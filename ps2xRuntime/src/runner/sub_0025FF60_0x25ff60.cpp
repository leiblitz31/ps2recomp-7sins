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

// Function: sub_0025FF60
// Address: 0x25ff60 - 0x260090
void sub_0025FF60_0x25ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF60_0x25ff60");
#endif

    switch (ctx->pc) {
        case 0x25ffacu: goto label_25ffac;
        case 0x260004u: goto label_260004;
        case 0x260078u: goto label_260078;
        default: break;
    }

    ctx->pc = 0x25ff60u;

    // 0x25ff60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ff64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25ff68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ff6c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25ff6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ff70: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF78u;
    // 0x25ff78: 0x0  nop
    ctx->pc = 0x25ff78u;
    // NOP
    // 0x25ff7c: 0x0  nop
    ctx->pc = 0x25ff7cu;
    // NOP
    // 0x25ff80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25ff84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25ff88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ff8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ff90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ff94: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x25ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x25ff98: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x25ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x25ff9c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ffa0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ffa4: 0xc0911dc  jal         func_244770
    ctx->pc = 0x25FFA4u;
    SET_GPR_U32(ctx, 31, 0x25FFACu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x25FFA4u, 0x25FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FFACu;
label_25ffac:
    // 0x25ffac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25ffacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ffb0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x25ffb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x25ffb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ffb8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25FFB8u;
    {
        const bool branch_taken_0x25ffb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ffb8) {
            ctx->pc = 0x260004u;
            goto label_260004;
        }
    }
    ctx->pc = 0x25FFC0u;
    // 0x25ffc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ffc4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25ffc8: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FFC8u;
    {
        const bool branch_taken_0x25ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ffc8) {
            ctx->pc = 0x25FFE0u;
            goto label_25ffe0;
        }
    }
    ctx->pc = 0x25FFD0u;
    // 0x25ffd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ffd4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x25ffd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25ffd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FFD8u;
    {
        const bool branch_taken_0x25ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ffd8) {
            ctx->pc = 0x25FFE8u;
            goto label_25ffe8;
        }
    }
    ctx->pc = 0x25FFE0u;
label_25ffe0:
    // 0x25ffe0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ffe4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ffe8:
    // 0x25ffe8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25ffe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ffec: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FFECu;
    {
        const bool branch_taken_0x25ffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x25ffec) {
            ctx->pc = 0x260004u;
            goto label_260004;
        }
    }
    ctx->pc = 0x25FFF4u;
    // 0x25fff4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25fff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25fff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fffc: 0xc0980e4  jal         func_260390
    ctx->pc = 0x25FFFCu;
    SET_GPR_U32(ctx, 31, 0x260004u);
    ctx->pc = 0x260390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260390u, 0x25FFFCu, 0x260004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260004u;
label_260004:
    // 0x260004: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x260004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260008: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x260008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26000c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26000cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x260010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x260014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260018: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x260018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26001c: 0x3e00008  jr          $ra
    ctx->pc = 0x26001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260024u;
    // 0x260024: 0x0  nop
    ctx->pc = 0x260024u;
    // NOP
    // 0x260028: 0x0  nop
    ctx->pc = 0x260028u;
    // NOP
    // 0x26002c: 0x0  nop
    ctx->pc = 0x26002cu;
    // NOP
    // 0x260030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x260034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x260038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26003c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26003cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x260040: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x260040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x260044: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x260044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260048: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x260048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26004c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26004Cu;
    {
        const bool branch_taken_0x26004c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26004c) {
            ctx->pc = 0x26005Cu;
            goto label_26005c;
        }
    }
    ctx->pc = 0x260054u;
    // 0x260054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260054u;
    {
        const bool branch_taken_0x260054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260054) {
            ctx->pc = 0x260078u;
            goto label_260078;
        }
    }
    ctx->pc = 0x26005Cu;
label_26005c:
    // 0x26005c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260060: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260060u;
    {
        const bool branch_taken_0x260060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x260060) {
            ctx->pc = 0x260078u;
            goto label_260078;
        }
    }
    ctx->pc = 0x260068u;
    // 0x260068: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x260068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26006c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26006cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260070: 0xc0980e4  jal         func_260390
    ctx->pc = 0x260070u;
    SET_GPR_U32(ctx, 31, 0x260078u);
    ctx->pc = 0x260390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260390u, 0x260070u, 0x260078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260078u;
label_260078:
    // 0x260078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26007c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26007cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260080: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x260084: 0x3e00008  jr          $ra
    ctx->pc = 0x260084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26008Cu;
    // 0x26008c: 0x0  nop
    ctx->pc = 0x26008cu;
    // NOP
    ctx->pc = 0x260090u;
}
