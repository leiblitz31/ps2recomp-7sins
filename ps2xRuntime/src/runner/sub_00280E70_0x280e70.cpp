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

// Function: sub_00280E70
// Address: 0x280e70 - 0x280f80
void sub_00280E70_0x280e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E70_0x280e70");
#endif

    switch (ctx->pc) {
        case 0x280ea0u: goto label_280ea0;
        case 0x280eacu: goto label_280eac;
        case 0x280eb8u: goto label_280eb8;
        case 0x280ed0u: goto label_280ed0;
        case 0x280ee8u: goto label_280ee8;
        case 0x280f04u: goto label_280f04;
        case 0x280f2cu: goto label_280f2c;
        case 0x280f44u: goto label_280f44;
        default: break;
    }

    ctx->pc = 0x280e70u;

    // 0x280e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x280e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x280e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x280e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x280e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x280e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x280e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280e84: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x280e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x280e88: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x280e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x280e8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x280e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280e90: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x280e90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280e94: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x280e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280e98: 0xc0a0270  jal         func_2809C0
    ctx->pc = 0x280E98u;
    SET_GPR_U32(ctx, 31, 0x280EA0u);
    ctx->pc = 0x2809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809C0u, 0x280E98u, 0x280EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EA0u;
label_280ea0:
    // 0x280ea0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x280ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280ea4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x280EA4u;
    {
        const bool branch_taken_0x280ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280ea4) {
            ctx->pc = 0x280F08u;
            goto label_280f08;
        }
    }
    ctx->pc = 0x280EACu;
label_280eac:
    // 0x280eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280eb0: 0xc0a03fc  jal         func_280FF0
    ctx->pc = 0x280EB0u;
    SET_GPR_U32(ctx, 31, 0x280EB8u);
    ctx->pc = 0x280FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FF0u, 0x280EB0u, 0x280EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EB8u;
label_280eb8:
    // 0x280eb8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x280eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280ebc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x280ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x280ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ec4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x280ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280ec8: 0xc0a03f0  jal         func_280FC0
    ctx->pc = 0x280EC8u;
    SET_GPR_U32(ctx, 31, 0x280ED0u);
    ctx->pc = 0x280FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FC0u, 0x280EC8u, 0x280ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280ED0u;
label_280ed0:
    // 0x280ed0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280ED0u;
    {
        const bool branch_taken_0x280ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280ed0) {
            ctx->pc = 0x280EF8u;
            goto label_280ef8;
        }
    }
    ctx->pc = 0x280ED8u;
    // 0x280ed8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x280ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ee0: 0xc0a03e8  jal         func_280FA0
    ctx->pc = 0x280EE0u;
    SET_GPR_U32(ctx, 31, 0x280EE8u);
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x280EE0u, 0x280EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EE8u;
label_280ee8:
    // 0x280ee8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x280ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280eec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x280eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280EF0u;
    {
        const bool branch_taken_0x280ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280ef0) {
            ctx->pc = 0x280F08u;
            goto label_280f08;
        }
    }
    ctx->pc = 0x280EF8u;
label_280ef8:
    // 0x280ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280efc: 0xc0a03e0  jal         func_280F80
    ctx->pc = 0x280EFCu;
    SET_GPR_U32(ctx, 31, 0x280F04u);
    ctx->pc = 0x280F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F80u, 0x280EFCu, 0x280F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F04u;
label_280f04:
    // 0x280f04: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x280f04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280f08:
    // 0x280f08: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x280F08u;
    {
        const bool branch_taken_0x280f08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f08) {
            ctx->pc = 0x280EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280eac;
        }
    }
    ctx->pc = 0x280F10u;
    // 0x280f10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x280f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280f14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x280f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280f18: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x280F18u;
    {
        const bool branch_taken_0x280f18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x280f18) {
            ctx->pc = 0x280F4Cu;
            goto label_280f4c;
        }
    }
    ctx->pc = 0x280F20u;
    // 0x280f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f24: 0xc0a03fc  jal         func_280FF0
    ctx->pc = 0x280F24u;
    SET_GPR_U32(ctx, 31, 0x280F2Cu);
    ctx->pc = 0x280FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FF0u, 0x280F24u, 0x280F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F2Cu;
label_280f2c:
    // 0x280f2c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x280f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280f30: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x280f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x280f34: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x280f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280f38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x280f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f3c: 0xc0a03f0  jal         func_280FC0
    ctx->pc = 0x280F3Cu;
    SET_GPR_U32(ctx, 31, 0x280F44u);
    ctx->pc = 0x280FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FC0u, 0x280F3Cu, 0x280F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F44u;
label_280f44:
    // 0x280f44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280F44u;
    {
        const bool branch_taken_0x280f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f44) {
            ctx->pc = 0x280F54u;
            goto label_280f54;
        }
    }
    ctx->pc = 0x280F4Cu;
label_280f4c:
    // 0x280f4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x280f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280f50: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x280f50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280f54:
    // 0x280f54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x280f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x280f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280f5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x280f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280f68: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x280f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x280f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x280F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F74u;
    // 0x280f74: 0x0  nop
    ctx->pc = 0x280f74u;
    // NOP
    // 0x280f78: 0x0  nop
    ctx->pc = 0x280f78u;
    // NOP
    // 0x280f7c: 0x0  nop
    ctx->pc = 0x280f7cu;
    // NOP
    ctx->pc = 0x280f80u;
}
