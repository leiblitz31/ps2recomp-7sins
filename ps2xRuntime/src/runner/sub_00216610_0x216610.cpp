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

// Function: sub_00216610
// Address: 0x216610 - 0x216690
void sub_00216610_0x216610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216610_0x216610");
#endif

    switch (ctx->pc) {
        case 0x216644u: goto label_216644;
        case 0x216654u: goto label_216654;
        case 0x216674u: goto label_216674;
        default: break;
    }

    ctx->pc = 0x216610u;

    // 0x216610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21661c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x21661cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x216620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216624: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x216624u;
    {
        const bool branch_taken_0x216624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216624) {
            ctx->pc = 0x216674u;
            goto label_216674;
        }
    }
    ctx->pc = 0x21662Cu;
    // 0x21662c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216634: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x216634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216638: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x216638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21663c: 0xc0859d0  jal         func_216740
    ctx->pc = 0x21663Cu;
    SET_GPR_U32(ctx, 31, 0x216644u);
    ctx->pc = 0x216740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216740u, 0x21663Cu, 0x216644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216644u;
label_216644:
    // 0x216644: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21664c: 0xc0859a4  jal         func_216690
    ctx->pc = 0x21664Cu;
    SET_GPR_U32(ctx, 31, 0x216654u);
    ctx->pc = 0x216690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216690u, 0x21664Cu, 0x216654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216654u;
label_216654:
    // 0x216654: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x216654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216658: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x216658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21665c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21665cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x216660: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216660u;
    {
        const bool branch_taken_0x216660 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x216660) {
            ctx->pc = 0x216674u;
            goto label_216674;
        }
    }
    ctx->pc = 0x216668u;
    // 0x216668: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21666c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x21666Cu;
    SET_GPR_U32(ctx, 31, 0x216674u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x21666Cu, 0x216674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216674u;
label_216674:
    // 0x216674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21667c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216680: 0x3e00008  jr          $ra
    ctx->pc = 0x216680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216688u;
    // 0x216688: 0x0  nop
    ctx->pc = 0x216688u;
    // NOP
    // 0x21668c: 0x0  nop
    ctx->pc = 0x21668cu;
    // NOP
    ctx->pc = 0x216690u;
}
