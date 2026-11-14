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

// Function: sub_002B0170
// Address: 0x2b0170 - 0x2b0200
void sub_002B0170_0x2b0170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0170_0x2b0170");
#endif

    switch (ctx->pc) {
        case 0x2b01acu: goto label_2b01ac;
        case 0x2b01ecu: goto label_2b01ec;
        default: break;
    }

    ctx->pc = 0x2b0170u;

    // 0x2b0170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b0174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0178: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b0178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b017c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b017cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b0180: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b0180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0184: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b0184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b0188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b018c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2b018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b0190: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0190u;
    {
        const bool branch_taken_0x2b0190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b0190) {
            ctx->pc = 0x2B01C4u;
            goto label_2b01c4;
        }
    }
    ctx->pc = 0x2B0198u;
    // 0x2b0198: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b019c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b01a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b01a4: 0xc0ac124  jal         func_2B0490
    ctx->pc = 0x2B01A4u;
    SET_GPR_U32(ctx, 31, 0x2B01ACu);
    ctx->pc = 0x2B0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0490u, 0x2B01A4u, 0x2B01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01ACu;
label_2b01ac:
    // 0x2b01ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b01acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b01b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b01b4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b01b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2b01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2b01bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B01BCu;
    {
        const bool branch_taken_0x2b01bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b01bc) {
            ctx->pc = 0x2B01ECu;
            goto label_2b01ec;
        }
    }
    ctx->pc = 0x2B01C4u;
label_2b01c4:
    // 0x2b01c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b01c8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2b01c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b01cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b01ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b01d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b01d4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2b01d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b01d8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2b01d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b01dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b01dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b01e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2b01e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b01e4: 0xc0ac080  jal         func_2B0200
    ctx->pc = 0x2B01E4u;
    SET_GPR_U32(ctx, 31, 0x2B01ECu);
    ctx->pc = 0x2B0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0200u, 0x2B01E4u, 0x2B01ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01ECu;
label_2b01ec:
    // 0x2b01ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b01ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b01f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b01f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b01f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B01F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B01FCu;
    // 0x2b01fc: 0x0  nop
    ctx->pc = 0x2b01fcu;
    // NOP
    ctx->pc = 0x2b0200u;
}
