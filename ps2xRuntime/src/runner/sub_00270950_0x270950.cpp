#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270950
// Address: 0x270950 - 0x2709d0
void sub_00270950_0x270950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270950_0x270950");
#endif

    switch (ctx->pc) {
        case 0x270974u: goto label_270974;
        case 0x2709b8u: goto label_2709b8;
        default: break;
    }

    ctx->pc = 0x270950u;

    // 0x270950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x270958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27095c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270964: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270968: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x270968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27096c: 0xc09bf48  jal         func_26FD20
    ctx->pc = 0x27096Cu;
    SET_GPR_U32(ctx, 31, 0x270974u);
    ctx->pc = 0x26FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD20u, 0x27096Cu, 0x270974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270974u;
label_270974:
    // 0x270974: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x270974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270978: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x270978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27097c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270980: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x270980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x270984: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x270988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27098c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27098cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270990: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x270990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270994: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x270994u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x270998: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270998u;
    {
        const bool branch_taken_0x270998 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x270998) {
            ctx->pc = 0x2709A8u;
            goto label_2709a8;
        }
    }
    ctx->pc = 0x2709A0u;
    // 0x2709a0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2709a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2709a4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2709a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2709a8:
    // 0x2709a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2709a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2709ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2709acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2709b0: 0xc09c6b8  jal         func_271AE0
    ctx->pc = 0x2709B0u;
    SET_GPR_U32(ctx, 31, 0x2709B8u);
    ctx->pc = 0x271AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271AE0u, 0x2709B0u, 0x2709B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709B8u;
label_2709b8:
    // 0x2709b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2709b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2709bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2709bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2709c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2709C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2709C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2709C8u;
    // 0x2709c8: 0x0  nop
    ctx->pc = 0x2709c8u;
    // NOP
    // 0x2709cc: 0x0  nop
    ctx->pc = 0x2709ccu;
    // NOP
    ctx->pc = 0x2709d0u;
}
