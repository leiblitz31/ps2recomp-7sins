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

// Function: sub_0047BEB0
// Address: 0x47beb0 - 0x47bfc0
void sub_0047BEB0_0x47beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BEB0_0x47beb0");
#endif

    switch (ctx->pc) {
        case 0x47bef0u: goto label_47bef0;
        case 0x47bf30u: goto label_47bf30;
        case 0x47bf40u: goto label_47bf40;
        case 0x47bf78u: goto label_47bf78;
        default: break;
    }

    ctx->pc = 0x47beb0u;

    // 0x47beb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x47beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x47beb4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x47beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x47beb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x47bebc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x47bec0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x47bec4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x47bec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47bec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x47becc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47bed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47bed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47bed8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x47bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x47bedc: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x47bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x47bee0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x47bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x47bee4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x47bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47bee8: 0xc11eb8c  jal         func_47AE30
    ctx->pc = 0x47BEE8u;
    SET_GPR_U32(ctx, 31, 0x47BEF0u);
    ctx->pc = 0x47AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE30u, 0x47BEE8u, 0x47BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BEF0u;
label_47bef0:
    // 0x47bef0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x47bef0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bef4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47bef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bef8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47bef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47befc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x47befcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bf00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47bf00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bf04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47bf04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bf08: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x47bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x47bf0c: 0x248416e8  addiu       $a0, $a0, 0x16E8
    ctx->pc = 0x47bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5864));
    // 0x47bf10: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x47bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x47bf14: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x47bf14u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5E16E8u));
    // 0x47bf18: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x47bf18u;
    { uint32_t bits = FAST_READ32(0x5E16F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bf1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x47bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x47bf20: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x47bf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x47bf24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47bf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bf28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x47BF28u;
    {
        const bool branch_taken_0x47bf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bf28) {
            ctx->pc = 0x47BF7Cu;
            goto label_47bf7c;
        }
    }
    ctx->pc = 0x47BF30u;
label_47bf30:
    // 0x47bf30: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x47bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47bf34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47bf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bf38: 0xc11eff0  jal         func_47BFC0
    ctx->pc = 0x47BF38u;
    SET_GPR_U32(ctx, 31, 0x47BF40u);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47BF38u, 0x47BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BF40u;
label_47bf40:
    // 0x47bf40: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x47bf40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47bf44: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x47BF44u;
    {
        const bool branch_taken_0x47bf44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bf44) {
            ctx->pc = 0x47BF78u;
            goto label_47bf78;
        }
    }
    ctx->pc = 0x47BF4Cu;
    // 0x47bf4c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x47bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x47bf50: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x47bf50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47bf54: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x47bf54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x47bf58: 0x26750030  addiu       $s5, $s3, 0x30
    ctx->pc = 0x47bf58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x47bf5c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x47bf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x47bf60: 0x26360010  addiu       $s6, $s1, 0x10
    ctx->pc = 0x47bf60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x47bf64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47bf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bf68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x47bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bf6c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x47bf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x47bf70: 0xc11ef24  jal         func_47BC90
    ctx->pc = 0x47BF70u;
    SET_GPR_U32(ctx, 31, 0x47BF78u);
    ctx->pc = 0x47BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC90u, 0x47BF70u, 0x47BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BF78u;
label_47bf78:
    // 0x47bf78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47bf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47bf7c:
    // 0x47bf7c: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x47bf7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x47bf80: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x47BF80u;
    {
        const bool branch_taken_0x47bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47bf80) {
            ctx->pc = 0x47BF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47bf30;
        }
    }
    ctx->pc = 0x47BF88u;
    // 0x47bf88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47bf8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x47bf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47bf90: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47bf90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47bf94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47bf94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47bf98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47bf98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47bf9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47bf9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47bfa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47bfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47bfa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47bfa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47bfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47bfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47bfac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47bfacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47bfb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x47bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x47bfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x47BFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BFBCu;
    // 0x47bfbc: 0x0  nop
    ctx->pc = 0x47bfbcu;
    // NOP
    ctx->pc = 0x47bfc0u;
}
