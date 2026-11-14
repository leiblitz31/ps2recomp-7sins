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

// Function: sub_00372100
// Address: 0x372100 - 0x372220
void sub_00372100_0x372100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372100_0x372100");
#endif

    switch (ctx->pc) {
        case 0x372128u: goto label_372128;
        case 0x372150u: goto label_372150;
        case 0x372170u: goto label_372170;
        default: break;
    }

    ctx->pc = 0x372100u;

    // 0x372100: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x372100u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372104: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372108: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x372108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x37210c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37210cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372110: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x372110u;
    {
        const bool branch_taken_0x372110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372110u;
        // 0x372114: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372110) {
            ctx->pc = 0x372214u;
            goto label_372214;
        }
    }
    ctx->pc = 0x372118u;
    // 0x372118: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x372118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x37211c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x37211cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372120: 0x8c4ec438  lw          $t6, -0x3BC8($v0)
    ctx->pc = 0x372120u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x61C438u));
    // 0x372124: 0x27ac0004  addiu       $t4, $sp, 0x4
    ctx->pc = 0x372124u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_372128:
    // 0x372128: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x372128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37212c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x37212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x372130: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x372130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x372134: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x372134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x372138: 0x8c8b0058  lw          $t3, 0x58($a0)
    ctx->pc = 0x372138u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x37213c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37213cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372140: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x372140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x372144: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x372144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372148: 0x10450026  beq         $v0, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x372148u;
    {
        const bool branch_taken_0x372148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372148u;
        // 0x37214c: 0xac800058  sw          $zero, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372148) {
            ctx->pc = 0x3721E4u;
            goto label_3721e4;
        }
    }
    ctx->pc = 0x372150u;
label_372150:
    // 0x372150: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x372150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x372154: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x372154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37215c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x37215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x372160: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x372160u;
    {
        const bool branch_taken_0x372160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x372164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372160u;
        // 0x372164: 0x8c640058  lw          $a0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372160) {
            ctx->pc = 0x3721DCu;
            goto label_3721dc;
        }
    }
    ctx->pc = 0x372168u;
    // 0x372168: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x372168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37216c: 0x0  nop
    ctx->pc = 0x37216cu;
    // NOP
label_372170:
    // 0x372170: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x372170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x372174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372178: 0x0  nop
    ctx->pc = 0x372178u;
    // NOP
    // 0x37217c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x37217Cu;
    {
        const bool branch_taken_0x37217c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37217c) {
            ctx->pc = 0x372180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37217Cu;
            // 0x372180: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3721C4u;
            goto label_3721c4;
        }
    }
    ctx->pc = 0x372184u;
    // 0x372184: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x372184u;
    {
        const bool branch_taken_0x372184 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x372188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372184u;
        // 0x372188: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372184) {
            ctx->pc = 0x372194u;
            goto label_372194;
        }
    }
    ctx->pc = 0x37218Cu;
    // 0x37218c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37218Cu;
    {
        const bool branch_taken_0x37218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37218Cu;
        // 0x372190: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37218c) {
            ctx->pc = 0x372198u;
            goto label_372198;
        }
    }
    ctx->pc = 0x372194u;
label_372194:
    // 0x372194: 0xace30058  sw          $v1, 0x58($a3)
    ctx->pc = 0x372194u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 3));
label_372198:
    // 0x372198: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x372198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37219c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x37219cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721a0: 0xace60058  sw          $a2, 0x58($a3)
    ctx->pc = 0x3721a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 6));
    // 0x3721a4: 0xacc40058  sw          $a0, 0x58($a2)
    ctx->pc = 0x3721a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 4));
    // 0x3721a8: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x3721a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x3721ac: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x3721acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3721b0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3721B0u;
    {
        const bool branch_taken_0x3721b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3721b0) {
            ctx->pc = 0x3721CCu;
            goto label_3721cc;
        }
    }
    ctx->pc = 0x3721B8u;
    // 0x3721b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3721b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3721BCu;
    {
        const bool branch_taken_0x3721bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721BCu;
        // 0x3721c0: 0xad850000  sw          $a1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721bc) {
            ctx->pc = 0x3721CCu;
            goto label_3721cc;
        }
    }
    ctx->pc = 0x3721C4u;
label_3721c4:
    // 0x3721c4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3721c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3721c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3721c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_3721cc:
    // 0x3721cc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3721CCu;
    {
        const bool branch_taken_0x3721cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3721cc) {
            ctx->pc = 0x3721D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3721CCu;
            // 0x3721d0: 0x8c840058  lw          $a0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3721D4u;
            goto label_3721d4;
        }
    }
    ctx->pc = 0x3721D4u;
label_3721d4:
    // 0x3721d4: 0x5445ffe6  bnel        $v0, $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3721D4u;
    {
        const bool branch_taken_0x3721d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3721d4) {
            ctx->pc = 0x3721D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3721D4u;
            // 0x3721d8: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x372170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372170;
        }
    }
    ctx->pc = 0x3721DCu;
label_3721dc:
    // 0x3721dc: 0x1100ffdc  beqz        $t0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3721DCu;
    {
        const bool branch_taken_0x3721dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721DCu;
        // 0x3721e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721dc) {
            ctx->pc = 0x372150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372150;
        }
    }
    ctx->pc = 0x3721E4u;
label_3721e4:
    // 0x3721e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3721e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3721e8: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3721E8u;
    {
        const bool branch_taken_0x3721e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721E8u;
        // 0x3721ec: 0xac4b0058  sw          $t3, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721e8) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3721F0u;
    // 0x3721f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3721f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3721f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3721F4u;
    {
        const bool branch_taken_0x3721f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721F4u;
        // 0x3721f8: 0xad420058  sw          $v0, 0x58($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721f4) {
            ctx->pc = 0x372204u;
            goto label_372204;
        }
    }
    ctx->pc = 0x3721FCu;
label_3721fc:
    // 0x3721fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3721fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372200: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x372200u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_372204:
    // 0x372204: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x372204u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x372208: 0x8d420058  lw          $v0, 0x58($t2)
    ctx->pc = 0x372208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x37220c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x37220Cu;
    {
        const bool branch_taken_0x37220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37220Cu;
        // 0x372210: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37220c) {
            ctx->pc = 0x372128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372128;
        }
    }
    ctx->pc = 0x372214u;
label_372214:
    // 0x372214: 0x3e00008  jr          $ra
    ctx->pc = 0x372214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372214u;
        // 0x372218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37221Cu;
    // 0x37221c: 0x0  nop
    ctx->pc = 0x37221cu;
    // NOP
    ctx->pc = 0x372220u;
}
