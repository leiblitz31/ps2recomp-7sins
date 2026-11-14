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

// Function: sub_001BCA90
// Address: 0x1bca90 - 0x1bcba0
void sub_001BCA90_0x1bca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA90_0x1bca90");
#endif

    ctx->pc = 0x1bca90u;

    // 0x1bca90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bca94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bca98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bca9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bcaa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bcaa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcaa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bcaa8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcaac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bcab0: 0x2442be50  addiu       $v0, $v0, -0x41B0
    ctx->pc = 0x1bcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
    // 0x1bcab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcab8: 0x8c510034  lw          $s1, 0x34($v0)
    ctx->pc = 0x1bcab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1bcabc: 0x2e21000a  sltiu       $at, $s1, 0xA
    ctx->pc = 0x1bcabcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bcac0: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BCAC0u;
    {
        const bool branch_taken_0x1bcac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcac0) {
            ctx->pc = 0x1BCB84u;
            goto label_1bcb84;
        }
    }
    ctx->pc = 0x1BCAC8u;
    // 0x1bcac8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bcac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1bcacc: 0x246387a0  addiu       $v1, $v1, -0x7860
    ctx->pc = 0x1bcaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936480));
    // 0x1bcad0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1bcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bcad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcadc: 0x400008  jr          $v0
    ctx->pc = 0x1BCADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BCAE4u: goto label_1bcae4;
            case 0x1BCAF4u: goto label_1bcaf4;
            case 0x1BCB04u: goto label_1bcb04;
            case 0x1BCB14u: goto label_1bcb14;
            case 0x1BCB24u: goto label_1bcb24;
            case 0x1BCB34u: goto label_1bcb34;
            case 0x1BCB44u: goto label_1bcb44;
            case 0x1BCB54u: goto label_1bcb54;
            case 0x1BCB64u: goto label_1bcb64;
            case 0x1BCB74u: goto label_1bcb74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCADCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BCAE4u;
label_1bcae4:
    // 0x1bcae4: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcae8: 0x261070f0  addiu       $s0, $s0, 0x70F0
    ctx->pc = 0x1bcae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28912));
    // 0x1bcaec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BCAECu;
    {
        const bool branch_taken_0x1bcaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcaec) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCAF4u;
label_1bcaf4:
    // 0x1bcaf4: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcaf8: 0x26107110  addiu       $s0, $s0, 0x7110
    ctx->pc = 0x1bcaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28944));
    // 0x1bcafc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BCAFCu;
    {
        const bool branch_taken_0x1bcafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcafc) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB04u;
label_1bcb04:
    // 0x1bcb04: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb08: 0x26107150  addiu       $s0, $s0, 0x7150
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29008));
    // 0x1bcb0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BCB0Cu;
    {
        const bool branch_taken_0x1bcb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb0c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB14u;
label_1bcb14:
    // 0x1bcb14: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb18: 0x261071a0  addiu       $s0, $s0, 0x71A0
    ctx->pc = 0x1bcb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29088));
    // 0x1bcb1c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BCB1Cu;
    {
        const bool branch_taken_0x1bcb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb1c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB24u;
label_1bcb24:
    // 0x1bcb24: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb28: 0x261071e0  addiu       $s0, $s0, 0x71E0
    ctx->pc = 0x1bcb28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29152));
    // 0x1bcb2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BCB2Cu;
    {
        const bool branch_taken_0x1bcb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb2c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB34u;
label_1bcb34:
    // 0x1bcb34: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb38: 0x26107220  addiu       $s0, $s0, 0x7220
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29216));
    // 0x1bcb3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BCB3Cu;
    {
        const bool branch_taken_0x1bcb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb3c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB44u;
label_1bcb44:
    // 0x1bcb44: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb48: 0x26107260  addiu       $s0, $s0, 0x7260
    ctx->pc = 0x1bcb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29280));
    // 0x1bcb4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BCB4Cu;
    {
        const bool branch_taken_0x1bcb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb4c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB54u;
label_1bcb54:
    // 0x1bcb54: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb58: 0x261072e0  addiu       $s0, $s0, 0x72E0
    ctx->pc = 0x1bcb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29408));
    // 0x1bcb5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BCB5Cu;
    {
        const bool branch_taken_0x1bcb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb5c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB64u;
label_1bcb64:
    // 0x1bcb64: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb68: 0x26107310  addiu       $s0, $s0, 0x7310
    ctx->pc = 0x1bcb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29456));
    // 0x1bcb6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCB6Cu;
    {
        const bool branch_taken_0x1bcb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb6c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB74u;
label_1bcb74:
    // 0x1bcb74: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bcb74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bcb78: 0x26107380  addiu       $s0, $s0, 0x7380
    ctx->pc = 0x1bcb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29568));
    // 0x1bcb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCB7Cu;
    {
        const bool branch_taken_0x1bcb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb7c) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB84u;
label_1bcb84:
    // 0x1bcb84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bcb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb88:
    // 0x1bcb88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bcb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bcb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcb90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bcb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcb94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bcb94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bcb98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCBA0u;
}
