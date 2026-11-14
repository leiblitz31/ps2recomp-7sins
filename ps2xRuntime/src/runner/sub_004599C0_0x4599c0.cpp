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

// Function: sub_004599C0
// Address: 0x4599c0 - 0x459a40
void sub_004599C0_0x4599c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004599C0_0x4599c0");
#endif

    switch (ctx->pc) {
        case 0x4599f4u: goto label_4599f4;
        case 0x459a04u: goto label_459a04;
        case 0x459a24u: goto label_459a24;
        default: break;
    }

    ctx->pc = 0x4599c0u;

    // 0x4599c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4599c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4599c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4599c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4599c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4599c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4599cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4599ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4599d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4599d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4599D4u;
    {
        const bool branch_taken_0x4599d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4599d4) {
            ctx->pc = 0x459A24u;
            goto label_459a24;
        }
    }
    ctx->pc = 0x4599DCu;
    // 0x4599dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4599dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4599e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4599e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4599e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4599e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4599e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4599e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4599ec: 0xc04ac78  jal         func_12B1E0
    ctx->pc = 0x4599ECu;
    SET_GPR_U32(ctx, 31, 0x4599F4u);
    ctx->pc = 0x12B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B1E0u, 0x4599ECu, 0x4599F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4599F4u;
label_4599f4:
    // 0x4599f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4599f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4599f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4599f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4599fc: 0xc116690  jal         func_459A40
    ctx->pc = 0x4599FCu;
    SET_GPR_U32(ctx, 31, 0x459A04u);
    ctx->pc = 0x459A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459A40u, 0x4599FCu, 0x459A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459A04u;
label_459a04:
    // 0x459a04: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x459a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459a08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x459a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x459a0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459a0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x459a10: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x459A10u;
    {
        const bool branch_taken_0x459a10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x459a10) {
            ctx->pc = 0x459A24u;
            goto label_459a24;
        }
    }
    ctx->pc = 0x459A18u;
    // 0x459a18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x459a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a1c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x459A1Cu;
    SET_GPR_U32(ctx, 31, 0x459A24u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x459A1Cu, 0x459A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459A24u;
label_459a24:
    // 0x459a24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459a2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x459a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x459a30: 0x3e00008  jr          $ra
    ctx->pc = 0x459A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459A38u;
    // 0x459a38: 0x0  nop
    ctx->pc = 0x459a38u;
    // NOP
    // 0x459a3c: 0x0  nop
    ctx->pc = 0x459a3cu;
    // NOP
    ctx->pc = 0x459a40u;
}
