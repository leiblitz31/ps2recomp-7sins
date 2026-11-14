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

// Function: sub_00377710
// Address: 0x377710 - 0x3777e8
void sub_00377710_0x377710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377710_0x377710");
#endif

    ctx->pc = 0x377710u;

    // 0x377710: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x377714: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x377714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377718: 0x2446c430  addiu       $a2, $v0, -0x3BD0
    ctx->pc = 0x377718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x37771c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37771cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377720: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x377720u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C438u));
    // 0x377724: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x377724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x377728: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x377728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C450u));
    // 0x37772c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x37772Cu;
    {
        const bool branch_taken_0x37772c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x377730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37772Cu;
        // 0x377730: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37772c) {
            ctx->pc = 0x3777B4u;
            goto label_3777b4;
        }
    }
    ctx->pc = 0x377734u;
    // 0x377734: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x377734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377738: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x377738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37773c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37773cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377740: 0x0  nop
    ctx->pc = 0x377740u;
    // NOP
    // 0x377744: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x377744u;
    {
        const bool branch_taken_0x377744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x377744) {
            ctx->pc = 0x377748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377744u;
            // 0x377748: 0x2502c430  addiu       $v0, $t0, -0x3BD0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951984));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3777C4u;
            goto label_3777c4;
        }
    }
    ctx->pc = 0x37774Cu;
    // 0x37774c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x37774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x377750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377754: 0x0  nop
    ctx->pc = 0x377754u;
    // NOP
    // 0x377758: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x377758u;
    {
        const bool branch_taken_0x377758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x377758) {
            ctx->pc = 0x37775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377758u;
            // 0x37775c: 0x2502c430  addiu       $v0, $t0, -0x3BD0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951984));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3777C4u;
            goto label_3777c4;
        }
    }
    ctx->pc = 0x377760u;
    // 0x377760: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x377760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377764: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x377764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x377768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37776c: 0x0  nop
    ctx->pc = 0x37776cu;
    // NOP
    // 0x377770: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x377770u;
    {
        const bool branch_taken_0x377770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x377774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377770u;
        // 0x377774: 0x2502c430  addiu       $v0, $t0, -0x3BD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377770) {
            ctx->pc = 0x3777C4u;
            goto label_3777c4;
        }
    }
    ctx->pc = 0x377778u;
    // 0x377778: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x377778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37777c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37777cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377780: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x377780u;
    {
        const bool branch_taken_0x377780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x377780) {
            ctx->pc = 0x3777C4u;
            goto label_3777c4;
        }
    }
    ctx->pc = 0x377788u;
    // 0x377788: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x377788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37778c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x37778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377790: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x377790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377794: 0x0  nop
    ctx->pc = 0x377794u;
    // NOP
    // 0x377798: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x377798u;
    {
        const bool branch_taken_0x377798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x377798) {
            ctx->pc = 0x37779Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377798u;
            // 0x37779c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3777C8u;
            goto label_3777c8;
        }
    }
    ctx->pc = 0x3777A0u;
    // 0x3777a0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3777a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3777a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3777a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3777a8: 0x0  nop
    ctx->pc = 0x3777a8u;
    // NOP
    // 0x3777ac: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x3777ACu;
    {
        const bool branch_taken_0x3777ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3777ac) {
            ctx->pc = 0x3777B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3777ACu;
            // 0x3777b0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3777C8u;
            goto label_3777c8;
        }
    }
    ctx->pc = 0x3777B4u;
label_3777b4:
    // 0x3777b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3777b8: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x3777b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x3777bc: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x3777bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x3777c0: 0x2502c430  addiu       $v0, $t0, -0x3BD0
    ctx->pc = 0x3777c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951984));
label_3777c4:
    // 0x3777c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3777c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3777c8:
    // 0x3777c8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3777c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3777cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3777ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3777d0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3777d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777d4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x3777d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3777d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3777d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3777dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3777DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3777E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3777DCu;
        // 0x3777e0: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3777DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3777E4u;
    // 0x3777e4: 0x0  nop
    ctx->pc = 0x3777e4u;
    // NOP
    ctx->pc = 0x3777e8u;
}
