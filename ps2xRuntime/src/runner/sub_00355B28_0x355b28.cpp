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

// Function: sub_00355B28
// Address: 0x355b28 - 0x355c78
void sub_00355B28_0x355b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355B28_0x355b28");
#endif

    switch (ctx->pc) {
        case 0x355b54u: goto label_355b54;
        case 0x355be0u: goto label_355be0;
        default: break;
    }

    ctx->pc = 0x355b28u;

    // 0x355b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355b30: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x355b30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x355b34: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x355b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x355b38: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x355b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x355b3c: 0x14ca0007  bne         $a2, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x355B3Cu;
    {
        const bool branch_taken_0x355b3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x355B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B3Cu;
        // 0x355b40: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b3c) {
            ctx->pc = 0x355B5Cu;
            goto label_355b5c;
        }
    }
    ctx->pc = 0x355B44u;
    // 0x355b44: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x355b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x355b48: 0x3012  mflo        $a2
    ctx->pc = 0x355b48u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x355b4c: 0xc0d4f32  jal         func_353CC8
    ctx->pc = 0x355B4Cu;
    SET_GPR_U32(ctx, 31, 0x355B54u);
    ctx->pc = 0x353CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353CC8u, 0x355B4Cu, 0x355B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B54u;
label_355b54:
    // 0x355b54: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x355B54u;
    {
        const bool branch_taken_0x355b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B54u;
        // 0x355b58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b54) {
            ctx->pc = 0x355C6Cu;
            goto label_355c6c;
        }
    }
    ctx->pc = 0x355B5Cu;
label_355b5c:
    // 0x355b5c: 0x18e00042  blez        $a3, . + 4 + (0x42 << 2)
    ctx->pc = 0x355B5Cu;
    {
        const bool branch_taken_0x355b5c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x355B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B5Cu;
        // 0x355b60: 0x71023  negu        $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b5c) {
            ctx->pc = 0x355C68u;
            goto label_355c68;
        }
    }
    ctx->pc = 0x355B64u;
    // 0x355b64: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x355b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355b68: 0x30490003  andi        $t1, $v0, 0x3
    ctx->pc = 0x355b68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x355b6c: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x355B6Cu;
    {
        const bool branch_taken_0x355b6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B6Cu;
        // 0x355b70: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b6c) {
            ctx->pc = 0x355BE0u;
            goto label_355be0;
        }
    }
    ctx->pc = 0x355B74u;
    // 0x355b74: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x355b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x355b78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x355B78u;
    {
        const bool branch_taken_0x355b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B78u;
        // 0x355b7c: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b78) {
            ctx->pc = 0x355BD0u;
            goto label_355bd0;
        }
    }
    ctx->pc = 0x355B80u;
    // 0x355b80: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x355B80u;
    {
        const bool branch_taken_0x355b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b80) {
            ctx->pc = 0x355B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355B80u;
            // 0x355b84: 0xc5000000  lwc1        $f0, 0x0($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x355BB0u;
            goto label_355bb0;
        }
    }
    ctx->pc = 0x355B88u;
    // 0x355b88: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x355b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355b8c: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x355b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x355b90: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x355b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x355b94: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x355b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x355b98: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x355b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x355b9c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x355b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355ba0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x355ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x355ba4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x355ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355ba8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x355ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x355bac: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x355bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355bb0:
    // 0x355bb0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x355bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x355bb4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x355bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355bb8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x355bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355bbc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x355bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355bc0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x355bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355bc4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x355bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x355bc8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x355bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355bcc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_355bd0:
    // 0x355bd0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x355bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355bd4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x355BD4u;
    {
        const bool branch_taken_0x355bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355BD4u;
        // 0x355bd8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355bd4) {
            ctx->pc = 0x355C48u;
            goto label_355c48;
        }
    }
    ctx->pc = 0x355BDCu;
    // 0x355bdc: 0x0  nop
    ctx->pc = 0x355bdcu;
    // NOP
label_355be0:
    // 0x355be0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x355be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355be4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x355be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x355be8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x355be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355bec: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x355becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355bf0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x355bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355bf4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x355bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355bf8: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x355bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x355bfc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x355bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355c00: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355c04: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x355c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355c08: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x355c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355c0c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x355c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355c10: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x355c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355c14: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x355c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355c18: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x355c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x355c1c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x355c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355c20: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355c24: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x355c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355c28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x355c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355c2c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x355c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355c30: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x355c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355c34: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x355c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355c38: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x355c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x355c3c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x355c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355c40: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355c44: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x355c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355c48:
    // 0x355c48: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x355c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355c4c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x355c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355c50: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x355c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355c54: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x355c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355c58: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x355c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x355c5c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x355c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355c60: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x355C60u;
    {
        const bool branch_taken_0x355c60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x355C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C60u;
        // 0x355c64: 0x6a1821  addu        $v1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c60) {
            ctx->pc = 0x355BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355be0;
        }
    }
    ctx->pc = 0x355C68u;
label_355c68:
    // 0x355c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_355c6c:
    // 0x355c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x355C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C6Cu;
        // 0x355c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355C74u;
    // 0x355c74: 0x0  nop
    ctx->pc = 0x355c74u;
    // NOP
    ctx->pc = 0x355c78u;
}
