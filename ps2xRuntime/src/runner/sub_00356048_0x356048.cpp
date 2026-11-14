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

// Function: sub_00356048
// Address: 0x356048 - 0x3561e8
void sub_00356048_0x356048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356048_0x356048");
#endif

    switch (ctx->pc) {
        case 0x356074u: goto label_356074;
        case 0x356130u: goto label_356130;
        default: break;
    }

    ctx->pc = 0x356048u;

    // 0x356048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35604c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356050: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x356050u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x356054: 0x8cca0040  lw          $t2, 0x40($a2)
    ctx->pc = 0x356054u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x356058: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x356058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35605c: 0x154b0007  bne         $t2, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x35605Cu;
    {
        const bool branch_taken_0x35605c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x356060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35605Cu;
        // 0x356060: 0x8cc9003c  lw          $t1, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35605c) {
            ctx->pc = 0x35607Cu;
            goto label_35607c;
        }
    }
    ctx->pc = 0x356064u;
    // 0x356064: 0xaa0018  mult        $zero, $a1, $t2
    ctx->pc = 0x356064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x356068: 0x3012  mflo        $a2
    ctx->pc = 0x356068u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x35606c: 0xc0d4f32  jal         func_353CC8
    ctx->pc = 0x35606Cu;
    SET_GPR_U32(ctx, 31, 0x356074u);
    ctx->pc = 0x356070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35606Cu;
    // 0x356070: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353CC8u, 0x35606Cu, 0x356074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356074u;
label_356074:
    // 0x356074: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x356074u;
    {
        const bool branch_taken_0x356074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356074u;
        // 0x356078: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356074) {
            ctx->pc = 0x3561DCu;
            goto label_3561dc;
        }
    }
    ctx->pc = 0x35607Cu;
label_35607c:
    // 0x35607c: 0x18a00056  blez        $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x35607Cu;
    {
        const bool branch_taken_0x35607c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x356080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35607Cu;
        // 0x356080: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35607c) {
            ctx->pc = 0x3561D8u;
            goto label_3561d8;
        }
    }
    ctx->pc = 0x356084u;
    // 0x356084: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x356084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356088: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x356088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35608c: 0x11000028  beqz        $t0, . + 4 + (0x28 << 2)
    ctx->pc = 0x35608Cu;
    {
        const bool branch_taken_0x35608c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x356090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35608Cu;
        // 0x356090: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35608c) {
            ctx->pc = 0x356130u;
            goto label_356130;
        }
    }
    ctx->pc = 0x356094u;
    // 0x356094: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x356094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x356098: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x356098u;
    {
        const bool branch_taken_0x356098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356098u;
        // 0x35609c: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356098) {
            ctx->pc = 0x356100u;
            goto label_356100;
        }
    }
    ctx->pc = 0x3560A0u;
    // 0x3560a0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3560A0u;
    {
        const bool branch_taken_0x3560a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3560a0) {
            ctx->pc = 0x3560A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3560A0u;
            // 0x3560a4: 0xc4e10000  lwc1        $f1, 0x0($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3560D8u;
            goto label_3560d8;
        }
    }
    ctx->pc = 0x3560A8u;
    // 0x3560a8: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x3560a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3560ac: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x3560acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3560b0: 0x12a3821  addu        $a3, $t1, $t2
    ctx->pc = 0x3560b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3560b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3560b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3560b8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3560b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3560bc: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x3560bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3560c0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3560c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3560c4: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x3560c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3560c8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3560c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3560cc: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3560ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3560d0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3560d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3560d4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3560d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3560d8:
    // 0x3560d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3560d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3560dc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3560dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3560e0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3560e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3560e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3560e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3560e8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3560e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3560ec: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3560ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3560f0: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3560f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3560f4: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x3560f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3560f8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3560f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3560fc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3560fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_356100:
    // 0x356100: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x356100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356104: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x356104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x356108: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x356108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x35610c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x35610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356110: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x356110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x356114: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x356114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356118: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x356118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x35611c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x35611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356120: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x356120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x356124: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x356124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x356128: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x356128u;
    {
        const bool branch_taken_0x356128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356128u;
        // 0x35612c: 0x6b1821  addu        $v1, $v1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356128) {
            ctx->pc = 0x3561D8u;
            goto label_3561d8;
        }
    }
    ctx->pc = 0x356130u;
label_356130:
    // 0x356130: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x356130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356134: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x356134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x356138: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x356138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x35613c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x35613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356140: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x356140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x356144: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x356144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356148: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x356148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x35614c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x35614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356150: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x356150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x356154: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x356154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x356158: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x356158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x35615c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x35615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356160: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x356160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x356164: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x356164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356168: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x356168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x35616c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x35616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356170: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x356170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x356174: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x356174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356178: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x356178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x35617c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x35617cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x356180: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x356180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x356184: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x356184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356188: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x356188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x35618c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x35618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356190: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x356190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x356194: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x356194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356198: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x356198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x35619c: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x35619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3561a0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x3561a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3561a4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3561a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3561a8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3561a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3561ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3561acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3561b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3561b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3561b4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3561b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3561b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3561b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3561bc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3561bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3561c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3561c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3561c4: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x3561c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3561c8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x3561c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3561cc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3561ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3561d0: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3561D0u;
    {
        const bool branch_taken_0x3561d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3561D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561D0u;
        // 0x3561d4: 0x6b1821  addu        $v1, $v1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561d0) {
            ctx->pc = 0x356130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356130;
        }
    }
    ctx->pc = 0x3561D8u;
label_3561d8:
    // 0x3561d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3561d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3561dc:
    // 0x3561dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3561DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3561E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561DCu;
        // 0x3561e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3561DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3561E4u;
    // 0x3561e4: 0x0  nop
    ctx->pc = 0x3561e4u;
    // NOP
    ctx->pc = 0x3561e8u;
}
