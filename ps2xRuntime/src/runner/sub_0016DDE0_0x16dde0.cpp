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

// Function: sub_0016DDE0
// Address: 0x16dde0 - 0x16def0
void sub_0016DDE0_0x16dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DDE0_0x16dde0");
#endif

    switch (ctx->pc) {
        case 0x16de14u: goto label_16de14;
        case 0x16de5cu: goto label_16de5c;
        case 0x16debcu: goto label_16debc;
        default: break;
    }

    ctx->pc = 0x16dde0u;

    // 0x16dde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16dde4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dde8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16ddec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ddf0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ddf4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x16ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x16ddf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ddfc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16de04: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16de04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16de08: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16de0c: 0xc08c910  jal         func_232440
    ctx->pc = 0x16DE0Cu;
    SET_GPR_U32(ctx, 31, 0x16DE14u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16DE0Cu, 0x16DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE14u;
label_16de14:
    // 0x16de14: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x16de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de18: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x16de1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de24: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x16de28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16de28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16de2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16de34: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16de34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16de38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16de38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16de3c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16de40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16de40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16de44: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x16de44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x16de48: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16de4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16de4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16de50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de54: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16DE54u;
    SET_GPR_U32(ctx, 31, 0x16DE5Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16DE54u, 0x16DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE5Cu;
label_16de5c:
    // 0x16de5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de60: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x16de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x16de64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de68: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x16de6c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x16DE6Cu;
    {
        const bool branch_taken_0x16de6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16de6c) {
            ctx->pc = 0x16DEBCu;
            goto label_16debc;
        }
    }
    ctx->pc = 0x16DE74u;
    // 0x16de74: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x16de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de78: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16de78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x16de7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de84: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x16de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x16de88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16de8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16de90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16de94: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16de94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16de98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16de98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16de9c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16dea0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16dea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16dea4: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x16dea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x16dea8: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16deac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16deacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16deb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16deb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16deb4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16DEB4u;
    SET_GPR_U32(ctx, 31, 0x16DEBCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16DEB4u, 0x16DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEBCu;
label_16debc:
    // 0x16debc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16debcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dec0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16dec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16dec4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DECCu;
    // 0x16decc: 0x0  nop
    ctx->pc = 0x16deccu;
    // NOP
    // 0x16ded0: 0x805b654  j           func_16D950
    ctx->pc = 0x16DED0u;
    ctx->pc = 0x16DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DED0u;
    // 0x16ded4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D950u, 0x16DED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x16DED8u;
    // 0x16ded8: 0x0  nop
    ctx->pc = 0x16ded8u;
    // NOP
    // 0x16dedc: 0x0  nop
    ctx->pc = 0x16dedcu;
    // NOP
    // 0x16dee0: 0x805b1e4  j           func_16C790
    ctx->pc = 0x16DEE0u;
    ctx->pc = 0x16DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEE0u;
    // 0x16dee4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C790u, 0x16DEE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x16DEE8u;
    // 0x16dee8: 0x0  nop
    ctx->pc = 0x16dee8u;
    // NOP
    // 0x16deec: 0x0  nop
    ctx->pc = 0x16deecu;
    // NOP
    ctx->pc = 0x16def0u;
}
