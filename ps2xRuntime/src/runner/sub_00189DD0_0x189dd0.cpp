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

// Function: sub_00189DD0
// Address: 0x189dd0 - 0x189f30
void sub_00189DD0_0x189dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189DD0_0x189dd0");
#endif

    switch (ctx->pc) {
        case 0x189e04u: goto label_189e04;
        case 0x189e18u: goto label_189e18;
        case 0x189e3cu: goto label_189e3c;
        case 0x189e64u: goto label_189e64;
        case 0x189e88u: goto label_189e88;
        case 0x189eb0u: goto label_189eb0;
        case 0x189ee0u: goto label_189ee0;
        case 0x189ef0u: goto label_189ef0;
        case 0x189f14u: goto label_189f14;
        default: break;
    }

    ctx->pc = 0x189dd0u;

    // 0x189dd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x189dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x189dd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189dd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189ddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189de0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189de4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x189de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x189de8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x189de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x189dec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x189decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x189df0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x189df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x189df4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x189df4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x189df8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x189df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189dfc: 0xc06283c  jal         func_18A0F0
    ctx->pc = 0x189DFCu;
    SET_GPR_U32(ctx, 31, 0x189E04u);
    ctx->pc = 0x18A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0F0u, 0x189DFCu, 0x189E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E04u;
label_189e04:
    // 0x189e04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x189e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x189e08: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x189e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x189e0c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x189e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x189e10: 0xc041954  jal         func_106550
    ctx->pc = 0x189E10u;
    SET_GPR_U32(ctx, 31, 0x189E18u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x189E10u, 0x189E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E18u;
label_189e18:
    // 0x189e18: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x189e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x189e1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189e24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x189e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189e28: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x189e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x189e2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x189e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e34: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x189E34u;
    SET_GPR_U32(ctx, 31, 0x189E3Cu);
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x189E34u, 0x189E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E3Cu;
label_189e3c:
    // 0x189e3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e40: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x189e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x189e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189e48: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x189e48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x189e4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e50: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x189e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189e54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x189e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e58: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x189e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x189e5c: 0xc06281c  jal         func_18A070
    ctx->pc = 0x189E5Cu;
    SET_GPR_U32(ctx, 31, 0x189E64u);
    ctx->pc = 0x18A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A070u, 0x189E5Cu, 0x189E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E64u;
label_189e64:
    // 0x189e64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e68: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x189e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x189e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e70: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x189E70u;
    {
        const bool branch_taken_0x189e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189e70) {
            ctx->pc = 0x189E94u;
            goto label_189e94;
        }
    }
    ctx->pc = 0x189E78u;
    // 0x189e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e7c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x189e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189e80: 0xc06284c  jal         func_18A130
    ctx->pc = 0x189E80u;
    SET_GPR_U32(ctx, 31, 0x189E88u);
    ctx->pc = 0x18A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A130u, 0x189E80u, 0x189E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E88u;
label_189e88:
    // 0x189e88: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x189e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x189e8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x189E8Cu;
    {
        const bool branch_taken_0x189e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e8c) {
            ctx->pc = 0x189EB4u;
            goto label_189eb4;
        }
    }
    ctx->pc = 0x189E94u;
label_189e94:
    // 0x189e94: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x189e94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x189e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e9c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x189e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x189ea0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x189ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189ea4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x189ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x189ea8: 0xc0627fc  jal         func_189FF0
    ctx->pc = 0x189EA8u;
    SET_GPR_U32(ctx, 31, 0x189EB0u);
    ctx->pc = 0x189FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FF0u, 0x189EA8u, 0x189EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EB0u;
label_189eb0:
    // 0x189eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189eb4:
    // 0x189eb4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x189eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x189eb8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x189EB8u;
    {
        const bool branch_taken_0x189eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189eb8) {
            ctx->pc = 0x189EE4u;
            goto label_189ee4;
        }
    }
    ctx->pc = 0x189EC0u;
    // 0x189ec0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x189ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189ec4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x189ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x189ec8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x189ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189ecc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x189eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189ed0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x189ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ed4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x189ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189ed8: 0xc06281c  jal         func_18A070
    ctx->pc = 0x189ED8u;
    SET_GPR_U32(ctx, 31, 0x189EE0u);
    ctx->pc = 0x18A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A070u, 0x189ED8u, 0x189EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EE0u;
label_189ee0:
    // 0x189ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189ee4:
    // 0x189ee4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x189ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189ee8: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x189EE8u;
    SET_GPR_U32(ctx, 31, 0x189EF0u);
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x189EE8u, 0x189EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EF0u;
label_189ef0:
    // 0x189ef0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x189ef4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x189ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x189ef8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189efc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x189efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x189f00: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x189f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x189f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f0c: 0xc0627cc  jal         func_189F30
    ctx->pc = 0x189F0Cu;
    SET_GPR_U32(ctx, 31, 0x189F14u);
    ctx->pc = 0x189F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F30u, 0x189F0Cu, 0x189F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F14u;
label_189f14:
    // 0x189f14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x189f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189f18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f24: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x189f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x189f28: 0x3e00008  jr          $ra
    ctx->pc = 0x189F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189F30u;
}
