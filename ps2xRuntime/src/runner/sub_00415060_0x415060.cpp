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

// Function: sub_00415060
// Address: 0x415060 - 0x415188
void sub_00415060_0x415060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415060_0x415060");
#endif

    switch (ctx->pc) {
        case 0x415118u: goto label_415118;
        default: break;
    }

    ctx->pc = 0x415060u;

    // 0x415060: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x415060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415064: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x415064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x415068: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x415068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41506c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41506cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x415070: 0x0  nop
    ctx->pc = 0x415070u;
    // NOP
    // 0x415074: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x415074u;
    {
        const bool branch_taken_0x415074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x415074) {
            ctx->pc = 0x415078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415074u;
            // 0x415078: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x41507Cu;
            goto label_41507c;
        }
    }
    ctx->pc = 0x41507Cu;
label_41507c:
    // 0x41507c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x41507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415080: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x415080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x415084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x415084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x415088: 0x0  nop
    ctx->pc = 0x415088u;
    // NOP
    // 0x41508c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x41508Cu;
    {
        const bool branch_taken_0x41508c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41508c) {
            ctx->pc = 0x415090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41508Cu;
            // 0x415090: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x415094u;
            goto label_415094;
        }
    }
    ctx->pc = 0x415094u;
label_415094:
    // 0x415094: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x415094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415098: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x415098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41509c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41509cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4150a0: 0x0  nop
    ctx->pc = 0x4150a0u;
    // NOP
    // 0x4150a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4150A4u;
    {
        const bool branch_taken_0x4150a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4150a4) {
            ctx->pc = 0x4150A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4150A4u;
            // 0x4150a8: 0xe4410014  swc1        $f1, 0x14($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4150ACu;
            goto label_4150ac;
        }
    }
    ctx->pc = 0x4150ACu;
label_4150ac:
    // 0x4150ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4150acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4150b0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x4150b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4150b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4150b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4150b8: 0x0  nop
    ctx->pc = 0x4150b8u;
    // NOP
    // 0x4150bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4150BCu;
    {
        const bool branch_taken_0x4150bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4150bc) {
            ctx->pc = 0x4150C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4150BCu;
            // 0x4150c0: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4150C4u;
            goto label_4150c4;
        }
    }
    ctx->pc = 0x4150C4u;
label_4150c4:
    // 0x4150c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4150c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4150c8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4150c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4150cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4150ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4150d0: 0x0  nop
    ctx->pc = 0x4150d0u;
    // NOP
    // 0x4150d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4150D4u;
    {
        const bool branch_taken_0x4150d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4150d4) {
            ctx->pc = 0x4150D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4150D4u;
            // 0x4150d8: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4150DCu;
            goto label_4150dc;
        }
    }
    ctx->pc = 0x4150DCu;
label_4150dc:
    // 0x4150dc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4150dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4150e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4150e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4150e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4150e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4150e8: 0x0  nop
    ctx->pc = 0x4150e8u;
    // NOP
    // 0x4150ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4150ECu;
    {
        const bool branch_taken_0x4150ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4150ec) {
            ctx->pc = 0x4150F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4150ECu;
            // 0x4150f0: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4150F4u;
            goto label_4150f4;
        }
    }
    ctx->pc = 0x4150F4u;
label_4150f4:
    // 0x4150f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4150F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4150F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4150FCu;
    // 0x4150fc: 0x0  nop
    ctx->pc = 0x4150fcu;
    // NOP
    // 0x415100: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x415100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x415104: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x415104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415108: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x415108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41510c: 0x0  nop
    ctx->pc = 0x41510cu;
    // NOP
    // 0x415110: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x415110u;
    {
        const bool branch_taken_0x415110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x415110) {
            ctx->pc = 0x415114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415110u;
            // 0x415114: 0xc4800010  lwc1        $f0, 0x10($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x415120u;
            goto label_415120;
        }
    }
    ctx->pc = 0x415118u;
label_415118:
    // 0x415118: 0x3e00008  jr          $ra
    ctx->pc = 0x415118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415118u;
        // 0x41511c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415120u;
label_415120:
    // 0x415120: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x415120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x415124: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x415124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x415128: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x415128u;
    {
        const bool branch_taken_0x415128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x415128) {
            ctx->pc = 0x415118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415118;
        }
    }
    ctx->pc = 0x415130u;
    // 0x415130: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x415130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x415134: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x415134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415138: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x415138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41513c: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
    ctx->pc = 0x41513Cu;
    {
        const bool branch_taken_0x41513c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41513c) {
            ctx->pc = 0x415118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415118;
        }
    }
    ctx->pc = 0x415144u;
    // 0x415144: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x415144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415148: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x415148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41514c: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x41514Cu;
    {
        const bool branch_taken_0x41514c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41514c) {
            ctx->pc = 0x415118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415118;
        }
    }
    ctx->pc = 0x415154u;
    // 0x415154: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x415154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415158: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x415158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41515c: 0x0  nop
    ctx->pc = 0x41515cu;
    // NOP
    // 0x415160: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x415160u;
    {
        const bool branch_taken_0x415160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x415164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415160u;
        // 0x415164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415160) {
            ctx->pc = 0x415180u;
            goto label_415180;
        }
    }
    ctx->pc = 0x415168u;
    // 0x415168: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x415168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41516c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x41516cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x415170: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x415170u;
    {
        const bool branch_taken_0x415170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x415170) {
            ctx->pc = 0x415180u;
            goto label_415180;
        }
    }
    ctx->pc = 0x415178u;
    // 0x415178: 0x3e00008  jr          $ra
    ctx->pc = 0x415178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415178u;
        // 0x41517c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415180u;
label_415180:
    // 0x415180: 0x3e00008  jr          $ra
    ctx->pc = 0x415180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415188u;
}
