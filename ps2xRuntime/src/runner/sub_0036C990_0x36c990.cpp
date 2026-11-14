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

// Function: sub_0036C990
// Address: 0x36c990 - 0x36cb00
void sub_0036C990_0x36c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C990_0x36c990");
#endif

    switch (ctx->pc) {
        case 0x36c9c0u: goto label_36c9c0;
        case 0x36ca40u: goto label_36ca40;
        default: break;
    }

    ctx->pc = 0x36c990u;

    // 0x36c990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c998: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36c998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36c99c: 0x8cc80048  lw          $t0, 0x48($a2)
    ctx->pc = 0x36c99cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x36c9a0: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x36c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x36c9a4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x36c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x36c9a8: 0x15020007  bne         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C9A8u;
    {
        const bool branch_taken_0x36c9a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9A8u;
        // 0x36c9ac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9a8) {
            ctx->pc = 0x36C9C8u;
            goto label_36c9c8;
        }
    }
    ctx->pc = 0x36C9B0u;
    // 0x36c9b0: 0xa73018  mult        $a2, $a1, $a3
    ctx->pc = 0x36c9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x36c9b4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x36c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c9b8: 0xc0d4f32  jal         func_353CC8
    ctx->pc = 0x36C9B8u;
    SET_GPR_U32(ctx, 31, 0x36C9C0u);
    ctx->pc = 0x36C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9B8u;
    // 0x36c9bc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353CC8u, 0x36C9B8u, 0x36C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9C0u;
label_36c9c0:
    // 0x36c9c0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x36C9C0u;
    {
        const bool branch_taken_0x36c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9C0u;
        // 0x36c9c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9c0) {
            ctx->pc = 0x36CAF4u;
            goto label_36caf4;
        }
    }
    ctx->pc = 0x36C9C8u;
label_36c9c8:
    // 0x36c9c8: 0x18a0004a  blez        $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x36C9C8u;
    {
        const bool branch_taken_0x36c9c8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9C8u;
        // 0x36c9cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9c8) {
            ctx->pc = 0x36CAF4u;
            goto label_36caf4;
        }
    }
    ctx->pc = 0x36C9D0u;
    // 0x36c9d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x36c9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c9d4: 0x682823  subu        $a1, $v1, $t0
    ctx->pc = 0x36c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36c9d8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x36c9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x36c9dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36C9DCu;
    {
        const bool branch_taken_0x36c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9DCu;
        // 0x36c9e0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9dc) {
            ctx->pc = 0x36CA40u;
            goto label_36ca40;
        }
    }
    ctx->pc = 0x36C9E4u;
    // 0x36c9e4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x36c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x36c9e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x36c9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x36c9ec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x36c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c9f0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36c9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36c9f4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x36c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c9f8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36c9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36c9fc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ca00: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x36ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ca04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ca08: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x36ca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ca0c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ca0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ca10: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ca14: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x36ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ca18: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ca1c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x36ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ca20: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ca20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ca24: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ca28: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x36ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ca2c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ca30: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36ca30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ca34: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x36ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ca38: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x36CA38u;
    {
        const bool branch_taken_0x36ca38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA38u;
        // 0x36ca3c: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ca38) {
            ctx->pc = 0x36CAF4u;
            goto label_36caf4;
        }
    }
    ctx->pc = 0x36CA40u;
label_36ca40:
    // 0x36ca40: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x36ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x36ca44: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x36ca44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x36ca48: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x36ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ca4c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36ca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36ca50: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x36ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ca54: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36ca54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36ca58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ca5c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x36ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ca60: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36ca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36ca64: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x36ca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ca68: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36ca68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36ca6c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ca70: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x36ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ca74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36ca74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36ca78: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x36ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ca7c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36ca7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36ca80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ca84: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x36ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ca88: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36ca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36ca8c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x36ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ca90: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x36ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x36ca94: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36ca94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36ca98: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ca9c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x36ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36caa0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36caa4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x36caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36caa8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36caa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36caac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36caacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cab0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x36cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cab4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cab8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x36cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cabc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cac0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cac4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x36cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cac8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cacc: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x36caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cad0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cad4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36cad8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x36cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cadc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cae0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x36cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cae4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cae8: 0x14c0ffd5  bnez        $a2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x36CAE8u;
    {
        const bool branch_taken_0x36cae8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CAE8u;
        // 0x36caec: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cae8) {
            ctx->pc = 0x36CA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ca40;
        }
    }
    ctx->pc = 0x36CAF0u;
    // 0x36caf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36caf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36caf4:
    // 0x36caf4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CAF4u;
        // 0x36caf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CAFCu;
    // 0x36cafc: 0x0  nop
    ctx->pc = 0x36cafcu;
    // NOP
    ctx->pc = 0x36cb00u;
}
