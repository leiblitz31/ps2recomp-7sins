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

// Function: sub_0037EED0
// Address: 0x37eed0 - 0x37f008
void sub_0037EED0_0x37eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037EED0_0x37eed0");
#endif

    switch (ctx->pc) {
        case 0x37eef0u: goto label_37eef0;
        default: break;
    }

    ctx->pc = 0x37eed0u;

    // 0x37eed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37eed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37eed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37eedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37eee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37eee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37eee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eee8: 0xc111718  jal         func_445C60
    ctx->pc = 0x37EEE8u;
    SET_GPR_U32(ctx, 31, 0x37EEF0u);
    ctx->pc = 0x37EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EEE8u;
    // 0x37eeec: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x37EEE8u, 0x37EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EEF0u;
label_37eef0:
    // 0x37eef0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x37eef0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x37eef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37eef8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37eef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eefc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37eefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ef00: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF00u;
        // 0x37ef04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF08u;
    // 0x37ef08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37ef08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF0Cu;
        // 0x37ef10: 0xac45003c  sw          $a1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF14u;
    // 0x37ef14: 0x0  nop
    ctx->pc = 0x37ef14u;
    // NOP
    // 0x37ef18: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x37ef18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x37ef1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37ef1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ef20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37ef20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef24: 0xe48c0040  swc1        $f12, 0x40($a0)
    ctx->pc = 0x37ef24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x37ef28: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x37ef28u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x37ef2c: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF2Cu;
        // 0x37ef30: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF34u;
    // 0x37ef34: 0x0  nop
    ctx->pc = 0x37ef34u;
    // NOP
    // 0x37ef38: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x37ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x37ef3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37ef3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef40: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF40u;
        // 0x37ef44: 0xac86004c  sw          $a2, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF48u;
    // 0x37ef48: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF48u;
        // 0x37ef4c: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF50u;
    // 0x37ef50: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF50u;
        // 0x37ef54: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF58u;
    // 0x37ef58: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37EF58u;
    {
        const bool branch_taken_0x37ef58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ef58) {
            ctx->pc = 0x37EF68u;
            goto label_37ef68;
        }
    }
    ctx->pc = 0x37EF60u;
    // 0x37ef60: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x37ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x37ef64: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37ef68:
    // 0x37ef68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x37EF68u;
    {
        const bool branch_taken_0x37ef68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ef68) {
            ctx->pc = 0x37EF78u;
            goto label_37ef78;
        }
    }
    ctx->pc = 0x37EF70u;
    // 0x37ef70: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x37ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x37ef74: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37ef78:
    // 0x37ef78: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF78u;
        // 0x37ef7c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF80u;
    // 0x37ef80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37ef80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef84: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF84u;
        // 0x37ef88: 0xac4500f8  sw          $a1, 0xF8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF8Cu;
    // 0x37ef8c: 0x0  nop
    ctx->pc = 0x37ef8cu;
    // NOP
    // 0x37ef90: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF90u;
        // 0x37ef94: 0x8c8200f8  lw          $v0, 0xF8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EF98u;
    // 0x37ef98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37ef98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x37EF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF9Cu;
        // 0x37efa0: 0xac4500fc  sw          $a1, 0xFC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EFA4u;
    // 0x37efa4: 0x0  nop
    ctx->pc = 0x37efa4u;
    // NOP
    // 0x37efa8: 0x3e00008  jr          $ra
    ctx->pc = 0x37EFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EFA8u;
        // 0x37efac: 0x8c8200fc  lw          $v0, 0xFC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EFB0u;
    // 0x37efb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37efb4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x37efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37efb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x37efb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37efbc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x37efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37efc0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x37efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37efc4: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x37efc4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x37efc8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x37efc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37efcc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x37efccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37efd0: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x37efd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x37efd4: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x37efd4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x37efd8: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x37efd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x37efdc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x37efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37efe0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x37efe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x37efe4: 0xa7100b  movn        $v0, $a1, $a3
    ctx->pc = 0x37efe4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x37efe8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x37efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37efec: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x37efecu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x37eff0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x37eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37eff4: 0x89100b  movn        $v0, $a0, $t1
    ctx->pc = 0x37eff4u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x37eff8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x37eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37effc: 0x3e00008  jr          $ra
    ctx->pc = 0x37EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EFFCu;
        // 0x37f000: 0x66100b  movn        $v0, $v1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F004u;
    // 0x37f004: 0x0  nop
    ctx->pc = 0x37f004u;
    // NOP
    ctx->pc = 0x37f008u;
}
