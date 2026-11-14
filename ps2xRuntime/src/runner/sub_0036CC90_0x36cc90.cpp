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

// Function: sub_0036CC90
// Address: 0x36cc90 - 0x36ce38
void sub_0036CC90_0x36cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CC90_0x36cc90");
#endif

    switch (ctx->pc) {
        case 0x36ccf8u: goto label_36ccf8;
        case 0x36cd80u: goto label_36cd80;
        default: break;
    }

    ctx->pc = 0x36cc90u;

    // 0x36cc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36cc94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36cc98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36cc9c: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x36cc9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36cca0: 0x15020017  bne         $t0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36CCA0u;
    {
        const bool branch_taken_0x36cca0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x36CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCA0u;
        // 0x36cca4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cca0) {
            ctx->pc = 0x36CD00u;
            goto label_36cd00;
        }
    }
    ctx->pc = 0x36CCA8u;
    // 0x36cca8: 0xc4e700ac  lwc1        $f7, 0xAC($a3)
    ctx->pc = 0x36cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36ccac: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x36ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x36ccb0: 0xc4e60090  lwc1        $f6, 0x90($a3)
    ctx->pc = 0x36ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36ccb4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36ccb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ccb8: 0xc4e00094  lwc1        $f0, 0x94($a3)
    ctx->pc = 0x36ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ccbc: 0xc4e10098  lwc1        $f1, 0x98($a3)
    ctx->pc = 0x36ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ccc0: 0xc4e2009c  lwc1        $f2, 0x9C($a3)
    ctx->pc = 0x36ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ccc4: 0xc4e300a0  lwc1        $f3, 0xA0($a3)
    ctx->pc = 0x36ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ccc8: 0xc4e400a4  lwc1        $f4, 0xA4($a3)
    ctx->pc = 0x36ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36cccc: 0xc4e500a8  lwc1        $f5, 0xA8($a3)
    ctx->pc = 0x36ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36ccd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ccd4: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x36ccd4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36ccd8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x36ccd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36ccdc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x36ccdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36cce0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x36cce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x36cce4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x36cce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36cce8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x36cce8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ccec: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x36ccecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36ccf0: 0xc0d4dd8  jal         func_353760
    ctx->pc = 0x36CCF0u;
    SET_GPR_U32(ctx, 31, 0x36CCF8u);
    ctx->pc = 0x36CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CCF0u;
    // 0x36ccf4: 0xe7a7001c  swc1        $f7, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x353760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353760u, 0x36CCF0u, 0x36CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CCF8u;
label_36ccf8:
    // 0x36ccf8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x36CCF8u;
    {
        const bool branch_taken_0x36ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCF8u;
        // 0x36ccfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ccf8) {
            ctx->pc = 0x36CE2Cu;
            goto label_36ce2c;
        }
    }
    ctx->pc = 0x36CD00u;
label_36cd00:
    // 0x36cd00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36cd04: 0x24eb0090  addiu       $t3, $a3, 0x90
    ctx->pc = 0x36cd04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x36cd08: 0x24ea0098  addiu       $t2, $a3, 0x98
    ctx->pc = 0x36cd08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
    // 0x36cd0c: 0x24e900a0  addiu       $t1, $a3, 0xA0
    ctx->pc = 0x36cd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x36cd10: 0x18a00045  blez        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x36CD10u;
    {
        const bool branch_taken_0x36cd10 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD10u;
        // 0x36cd14: 0x24e600a8  addiu       $a2, $a3, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd10) {
            ctx->pc = 0x36CE28u;
            goto label_36ce28;
        }
    }
    ctx->pc = 0x36CD18u;
    // 0x36cd18: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x36cd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36cd1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36CD1Cu;
    {
        const bool branch_taken_0x36cd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD1Cu;
        // 0x36cd20: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd1c) {
            ctx->pc = 0x36CD80u;
            goto label_36cd80;
        }
    }
    ctx->pc = 0x36CD24u;
    // 0x36cd24: 0xc4e10090  lwc1        $f1, 0x90($a3)
    ctx->pc = 0x36cd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cd28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36cd2c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36cd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cd30: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x36cd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cd34: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36cd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36cd38: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36cd3c: 0xc4e00098  lwc1        $f0, 0x98($a3)
    ctx->pc = 0x36cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cd40: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36cd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cd44: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x36cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cd48: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36cd48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36cd4c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36cd50: 0xc4e000a0  lwc1        $f0, 0xA0($a3)
    ctx->pc = 0x36cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cd54: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36cd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cd58: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x36cd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cd5c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36cd5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36cd60: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36cd64: 0xc4e100a8  lwc1        $f1, 0xA8($a3)
    ctx->pc = 0x36cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cd68: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x36cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36cd6c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36cd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36cd70: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cd74: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x36CD74u;
    {
        const bool branch_taken_0x36cd74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD74u;
        // 0x36cd78: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd74) {
            ctx->pc = 0x36CE28u;
            goto label_36ce28;
        }
    }
    ctx->pc = 0x36CD7Cu;
    // 0x36cd7c: 0x0  nop
    ctx->pc = 0x36cd7cu;
    // NOP
label_36cd80:
    // 0x36cd80: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x36cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cd84: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x36cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x36cd88: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36cd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cd8c: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x36cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cd90: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36cd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cd94: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cd98: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x36cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cd9c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cda0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x36cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cda4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cda8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cdac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x36cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cdb0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cdb4: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x36cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cdb8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cdb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cdbc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cdc0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cdc4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cdc8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cdcc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cdccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cdd0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cdd4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x36cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cdd8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cddc: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x36cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cde0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cde4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cde8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x36cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36cdec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36cdf0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x36cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cdf4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cdf8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36cdfc: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x36cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ce00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36ce00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36ce04: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x36ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ce08: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36ce08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36ce0c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x36ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x36ce10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ce14: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36ce14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36ce18: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ce1c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36ce1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36ce20: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x36CE20u;
    {
        const bool branch_taken_0x36ce20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE20u;
        // 0x36ce24: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce20) {
            ctx->pc = 0x36CD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cd80;
        }
    }
    ctx->pc = 0x36CE28u;
label_36ce28:
    // 0x36ce28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36ce2c:
    // 0x36ce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE2Cu;
        // 0x36ce30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CE34u;
    // 0x36ce34: 0x0  nop
    ctx->pc = 0x36ce34u;
    // NOP
    ctx->pc = 0x36ce38u;
}
