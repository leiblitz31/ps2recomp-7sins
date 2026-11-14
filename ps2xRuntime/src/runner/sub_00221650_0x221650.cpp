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

// Function: sub_00221650
// Address: 0x221650 - 0x2216e0
void sub_00221650_0x221650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221650_0x221650");
#endif

    switch (ctx->pc) {
        case 0x22168cu: goto label_22168c;
        case 0x2216ccu: goto label_2216cc;
        default: break;
    }

    ctx->pc = 0x221650u;

    // 0x221650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221658: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x221658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22165c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x221660: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x221660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221664: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x221664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x221668: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x221668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22166c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221670: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x221670u;
    {
        const bool branch_taken_0x221670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x221670) {
            ctx->pc = 0x2216A4u;
            goto label_2216a4;
        }
    }
    ctx->pc = 0x221678u;
    // 0x221678: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x221678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22167c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x221680: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x221680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221684: 0xc088680  jal         func_221A00
    ctx->pc = 0x221684u;
    SET_GPR_U32(ctx, 31, 0x22168Cu);
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x221684u, 0x22168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22168Cu;
label_22168c:
    // 0x22168c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221690: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x221690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x221694: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x221698: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x221698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x22169c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22169Cu;
    {
        const bool branch_taken_0x22169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22169c) {
            ctx->pc = 0x2216CCu;
            goto label_2216cc;
        }
    }
    ctx->pc = 0x2216A4u;
label_2216a4:
    // 0x2216a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2216a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2216a8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2216a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2216ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2216acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2216b0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2216b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2216b4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2216b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2216b8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2216b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2216bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2216bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2216c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2216c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2216c4: 0xc0885b8  jal         func_2216E0
    ctx->pc = 0x2216C4u;
    SET_GPR_U32(ctx, 31, 0x2216CCu);
    ctx->pc = 0x2216E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216E0u, 0x2216C4u, 0x2216CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216CCu;
label_2216cc:
    // 0x2216cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2216ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2216d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2216d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2216d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2216D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2216D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2216DCu;
    // 0x2216dc: 0x0  nop
    ctx->pc = 0x2216dcu;
    // NOP
    ctx->pc = 0x2216e0u;
}
