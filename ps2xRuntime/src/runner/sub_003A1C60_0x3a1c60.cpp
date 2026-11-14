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

// Function: sub_003A1C60
// Address: 0x3a1c60 - 0x3a22c0
void sub_003A1C60_0x3a1c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1C60_0x3a1c60");
#endif

    switch (ctx->pc) {
        case 0x3a1cbcu: goto label_3a1cbc;
        case 0x3a1cd0u: goto label_3a1cd0;
        case 0x3a1cf8u: goto label_3a1cf8;
        case 0x3a1d74u: goto label_3a1d74;
        case 0x3a1d88u: goto label_3a1d88;
        case 0x3a1da0u: goto label_3a1da0;
        case 0x3a1dd4u: goto label_3a1dd4;
        case 0x3a1de0u: goto label_3a1de0;
        case 0x3a1e68u: goto label_3a1e68;
        case 0x3a2084u: goto label_3a2084;
        case 0x3a20c4u: goto label_3a20c4;
        case 0x3a20f0u: goto label_3a20f0;
        case 0x3a2100u: goto label_3a2100;
        case 0x3a2114u: goto label_3a2114;
        case 0x3a218cu: goto label_3a218c;
        case 0x3a229cu: goto label_3a229c;
        default: break;
    }

    ctx->pc = 0x3a1c60u;

label_3a1c60:
    // 0x3a1c60: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3a1c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3a1c64: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3a1c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x3a1c68: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3a1c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x3a1c6c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3a1c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x3a1c70: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3a1c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x3a1c74: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3a1c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x3a1c78: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3a1c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x3a1c7c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3a1c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x3a1c80: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a1c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3a1c84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a1c88: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3a1c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x3a1c8c: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x3a1c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a1c90: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x3a1c90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x3a1c94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a1c98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a1c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a1c9c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3A1C9Cu;
    {
        const bool branch_taken_0x3a1c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C9Cu;
        // 0x3a1ca0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c9c) {
            ctx->pc = 0x3A1E80u;
            goto label_3a1e80;
        }
    }
    ctx->pc = 0x3A1CA4u;
    // 0x3a1ca4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3a1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3a1ca8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3a1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x3a1cac: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x3a1cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3a1cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a1cb4: 0xc106784  jal         func_419E10
    ctx->pc = 0x3A1CB4u;
    SET_GPR_U32(ctx, 31, 0x3A1CBCu);
    ctx->pc = 0x3A1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1CB4u;
    // 0x3a1cb8: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3A1CB4u, 0x3A1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CBCu;
label_3a1cbc:
    // 0x3a1cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a1cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1cc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3a1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a1cc4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3a1cc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1cc8: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3A1CC8u;
    SET_GPR_U32(ctx, 31, 0x3A1CD0u);
    ctx->pc = 0x3A1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1CC8u;
    // 0x3a1ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3A1CC8u, 0x3A1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CD0u;
label_3a1cd0:
    // 0x3a1cd0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3a1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a1cd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a1cd8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3a1cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3a1cdc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A1CDCu;
    {
        const bool branch_taken_0x3a1cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CDCu;
        // 0x3a1ce0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cdc) {
            ctx->pc = 0x3A1D0Cu;
            goto label_3a1d0c;
        }
    }
    ctx->pc = 0x3A1CE4u;
    // 0x3a1ce4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a1ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1cec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3a1cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3a1cf0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A1CF0u;
    {
        const bool branch_taken_0x3a1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CF0u;
        // 0x3a1cf4: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cf0) {
            ctx->pc = 0x3A1D48u;
            goto label_3a1d48;
        }
    }
    ctx->pc = 0x3A1CF8u;
label_3a1cf8:
    // 0x3a1cf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a1cfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1d00: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3a1d00u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3a1d04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A1D04u;
    {
        const bool branch_taken_0x3a1d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D04u;
        // 0x3a1d08: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d04) {
            ctx->pc = 0x3A1D48u;
            goto label_3a1d48;
        }
    }
    ctx->pc = 0x3A1D0Cu;
label_3a1d0c:
    // 0x3a1d0c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x3a1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a1d10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3a1d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3a1d14: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3a1d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a1d18: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3a1d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3a1d1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3a1d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3a1d20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a1d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a1d24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a1d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a1d28: 0x46000084  c1          0x84
    ctx->pc = 0x3a1d28u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x3a1d2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a1d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1d30: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3a1d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1d34: 0x0  nop
    ctx->pc = 0x3a1d34u;
    // NOP
    // 0x3a1d38: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x3A1D38u;
    {
        const bool branch_taken_0x3a1d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D38u;
        // 0x3a1d3c: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d38) {
            ctx->pc = 0x3A1CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1cf8;
        }
    }
    ctx->pc = 0x3A1D40u;
    // 0x3a1d40: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x3a1d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3a1d44: 0x0  nop
    ctx->pc = 0x3a1d44u;
    // NOP
label_3a1d48:
    // 0x3a1d48: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x3a1d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3a1d4c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x3a1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x3a1d50: 0x24843b60  addiu       $a0, $a0, 0x3B60
    ctx->pc = 0x3a1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15200));
    // 0x3a1d54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a1d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1d58: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x3a1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3a1d5c: 0x26950064  addiu       $s5, $s4, 0x64
    ctx->pc = 0x3a1d5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x3a1d60: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a1d64: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3a1d68: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3a1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3a1d6c: 0xc0e67d6  jal         func_399F58
    ctx->pc = 0x3A1D6Cu;
    SET_GPR_U32(ctx, 31, 0x3A1D74u);
    ctx->pc = 0x3A1D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D6Cu;
    // 0x3a1d70: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399F58u, 0x3A1D6Cu, 0x3A1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D74u;
label_3a1d74:
    // 0x3a1d74: 0x8e920064  lw          $s2, 0x64($s4)
    ctx->pc = 0x3a1d74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x3a1d78: 0x12550041  beq         $s2, $s5, . + 4 + (0x41 << 2)
    ctx->pc = 0x3A1D78u;
    {
        const bool branch_taken_0x3a1d78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x3A1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D78u;
        // 0x3a1d7c: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d78) {
            ctx->pc = 0x3A1E80u;
            goto label_3a1e80;
        }
    }
    ctx->pc = 0x3A1D80u;
    // 0x3a1d80: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3a1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a1d84: 0x0  nop
    ctx->pc = 0x3a1d84u;
    // NOP
label_3a1d88:
    // 0x3a1d88: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x3a1d88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x3a1d8c: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x3a1d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3a1d90: 0x52330039  beql        $s1, $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A1D90u;
    {
        const bool branch_taken_0x3a1d90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x3a1d90) {
            ctx->pc = 0x3A1D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1D90u;
            // 0x3a1d94: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E78u;
            goto label_3a1e78;
        }
    }
    ctx->pc = 0x3A1D98u;
    // 0x3a1d98: 0x26f6e880  addiu       $s6, $s7, -0x1780
    ctx->pc = 0x3a1d98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
    // 0x3a1d9c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a1da0:
    // 0x3a1da0: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A1DA0u;
    {
        const bool branch_taken_0x3a1da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1da0) {
            ctx->pc = 0x3A1DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1DA0u;
            // 0x3a1da4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E6Cu;
            goto label_3a1e6c;
        }
    }
    ctx->pc = 0x3A1DA8u;
    // 0x3a1da8: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x3a1da8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x3a1dac: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x3a1dacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3a1db0: 0x5045002e  beql        $v0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A1DB0u;
    {
        const bool branch_taken_0x3a1db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a1db0) {
            ctx->pc = 0x3A1DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1DB0u;
            // 0x3a1db4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E6Cu;
            goto label_3a1e6c;
        }
    }
    ctx->pc = 0x3A1DB8u;
    // 0x3a1db8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3a1db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3a1dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a1dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a1dc0: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A1DC0u;
    {
        const bool branch_taken_0x3a1dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1dc0) {
            ctx->pc = 0x3A1DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1DC0u;
            // 0x3a1dc4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E6Cu;
            goto label_3a1e6c;
        }
    }
    ctx->pc = 0x3A1DC8u;
    // 0x3a1dc8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3a1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a1dcc: 0xc106784  jal         func_419E10
    ctx->pc = 0x3A1DCCu;
    SET_GPR_U32(ctx, 31, 0x3A1DD4u);
    ctx->pc = 0x3A1DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1DCCu;
    // 0x3a1dd0: 0xa465003c  sh          $a1, 0x3C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3A1DCCu, 0x3A1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1DD4u;
label_3a1dd4:
    // 0x3a1dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a1dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1dd8: 0xc0e2048  jal         func_388120
    ctx->pc = 0x3A1DD8u;
    SET_GPR_U32(ctx, 31, 0x3A1DE0u);
    ctx->pc = 0x3A1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1DD8u;
    // 0x3a1ddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3A1DD8u, 0x3A1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1DE0u;
label_3a1de0:
    // 0x3a1de0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3a1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3a1de4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x3a1de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a1de8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x3a1de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1dec: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3a1decu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3a1df0: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x3a1df0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3a1df4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a1df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1df8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3a1df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a1dfc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3a1dfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3a1e00: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3a1e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3a1e04: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3a1e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a1e08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1e0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a1e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3a1e10: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3a1e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3a1e14: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x3a1e14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3a1e18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a1e1c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3a1e1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3a1e20: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3a1e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a1e24: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3a1e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3a1e28: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x3a1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a1e2c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x3a1e2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x3a1e30: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3a1e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3a1e34: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3a1e34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3a1e38: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3a1e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3a1e3c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x3a1e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1e40: 0x0  nop
    ctx->pc = 0x3a1e40u;
    // NOP
    // 0x3a1e44: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x3A1E44u;
    {
        const bool branch_taken_0x3a1e44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a1e44) {
            ctx->pc = 0x3A1E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1E44u;
            // 0x3a1e48: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1E6Cu;
            goto label_3a1e6c;
        }
    }
    ctx->pc = 0x3A1E4Cu;
    // 0x3a1e4c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3a1e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a1e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a1e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a1e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1E54u;
    {
        const bool branch_taken_0x3a1e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E54u;
        // 0x3a1e58: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e54) {
            ctx->pc = 0x3A1E68u;
            goto label_3a1e68;
        }
    }
    ctx->pc = 0x3A1E5Cu;
    // 0x3a1e5c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3a1e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e60: 0xc0e85d0  jal         func_3A1740
    ctx->pc = 0x3A1E60u;
    SET_GPR_U32(ctx, 31, 0x3A1E68u);
    ctx->pc = 0x3A1E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E60u;
    // 0x3a1e64: 0xc7ad0054  lwc1        $f13, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1740u, 0x3A1E60u, 0x3A1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E68u;
label_3a1e68:
    // 0x3a1e68: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x3a1e68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1e6c:
    // 0x3a1e6c: 0x5633ffcc  bnel        $s1, $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3A1E6Cu;
    {
        const bool branch_taken_0x3a1e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x3a1e6c) {
            ctx->pc = 0x3A1E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1E6Cu;
            // 0x3a1e70: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1da0;
        }
    }
    ctx->pc = 0x3A1E74u;
    // 0x3a1e74: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x3a1e74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a1e78:
    // 0x3a1e78: 0x5655ffc3  bnel        $s2, $s5, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3A1E78u;
    {
        const bool branch_taken_0x3a1e78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x3a1e78) {
            ctx->pc = 0x3A1E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1E78u;
            // 0x3a1e7c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1d88;
        }
    }
    ctx->pc = 0x3A1E80u;
label_3a1e80:
    // 0x3a1e80: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3a1e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3a1e84: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3a1e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3a1e88: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3a1e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a1e8c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3a1e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a1e90: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3a1e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a1e94: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3a1e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a1e98: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3a1e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a1e9c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3a1e9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a1ea0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a1ea0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a1ea4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a1ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a1ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EA8u;
        // 0x3a1eac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1EB0u;
    // 0x3a1eb0: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x3a1eb0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1eb4: 0x13000042  beqz        $t8, . + 4 + (0x42 << 2)
    ctx->pc = 0x3A1EB4u;
    {
        const bool branch_taken_0x3a1eb4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EB4u;
        // 0x3a1eb8: 0x8f82bd70  lw          $v0, -0x4290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1eb4) {
            ctx->pc = 0x3A1FC0u;
            goto label_3a1fc0;
        }
    }
    ctx->pc = 0x3A1EBCu;
    // 0x3a1ebc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3a1ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3a1ec0: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x3a1ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1ec4: 0x34c6fffb  ori         $a2, $a2, 0xFFFB
    ctx->pc = 0x3a1ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65531);
    // 0x3a1ec8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3a1ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a1ecc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1ed0: 0xc7000004  lwc1        $f0, 0x4($t8)
    ctx->pc = 0x3a1ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1ed4: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x3a1ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1ed8: 0xaf82bd70  sw          $v0, -0x4290($gp)
    ctx->pc = 0x3a1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 2));
    // 0x3a1edc: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3a1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3a1ee0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3a1ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a1ee4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x3a1ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3a1ee8: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a1eec: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x3a1eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3a1ef0: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x3a1ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1ef4: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x3a1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3a1ef8: 0x24480018  addiu       $t0, $v0, 0x18
    ctx->pc = 0x3a1ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a1efc: 0x2449001c  addiu       $t1, $v0, 0x1C
    ctx->pc = 0x3a1efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3a1f00: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3a1f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3a1f04: 0x244a0020  addiu       $t2, $v0, 0x20
    ctx->pc = 0x3a1f04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3a1f08: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1f0c: 0x244b0024  addiu       $t3, $v0, 0x24
    ctx->pc = 0x3a1f0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x3a1f10: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x3a1f10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3a1f14: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x3a1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a1f18: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a1f1c: 0x244c002c  addiu       $t4, $v0, 0x2C
    ctx->pc = 0x3a1f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x3a1f20: 0xc7000010  lwc1        $f0, 0x10($t8)
    ctx->pc = 0x3a1f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f24: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3a1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3a1f28: 0x244d0034  addiu       $t5, $v0, 0x34
    ctx->pc = 0x3a1f28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x3a1f2c: 0x244e0038  addiu       $t6, $v0, 0x38
    ctx->pc = 0x3a1f2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x3a1f30: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3a1f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3a1f34: 0x244f003c  addiu       $t7, $v0, 0x3C
    ctx->pc = 0x3a1f34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3a1f38: 0xaf87bd70  sw          $a3, -0x4290($gp)
    ctx->pc = 0x3a1f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 7));
    // 0x3a1f3c: 0xc7000014  lwc1        $f0, 0x14($t8)
    ctx->pc = 0x3a1f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f40: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3a1f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3a1f44: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a1f48: 0xc7000018  lwc1        $f0, 0x18($t8)
    ctx->pc = 0x3a1f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f4c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x3a1f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3a1f50: 0xaf88bd70  sw          $t0, -0x4290($gp)
    ctx->pc = 0x3a1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 8));
    // 0x3a1f54: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x3a1f54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3a1f58: 0xaf89bd70  sw          $t1, -0x4290($gp)
    ctx->pc = 0x3a1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 9));
    // 0x3a1f5c: 0xc7000020  lwc1        $f0, 0x20($t8)
    ctx->pc = 0x3a1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f60: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x3a1f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3a1f64: 0xaf8abd70  sw          $t2, -0x4290($gp)
    ctx->pc = 0x3a1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 10));
    // 0x3a1f68: 0xc7000024  lwc1        $f0, 0x24($t8)
    ctx->pc = 0x3a1f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f6c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3a1f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3a1f70: 0xaf8bbd70  sw          $t3, -0x4290($gp)
    ctx->pc = 0x3a1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 11));
    // 0x3a1f74: 0xc7000028  lwc1        $f0, 0x28($t8)
    ctx->pc = 0x3a1f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f78: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x3a1f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3a1f7c: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a1f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1f80: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x3a1f80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3a1f84: 0xaf8cbd70  sw          $t4, -0x4290($gp)
    ctx->pc = 0x3a1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 12));
    // 0x3a1f88: 0xc7000030  lwc1        $f0, 0x30($t8)
    ctx->pc = 0x3a1f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f8c: 0xaf86bd74  sw          $a2, -0x428C($gp)
    ctx->pc = 0x3a1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 6));
    // 0x3a1f90: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x3a1f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x3a1f94: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a1f98: 0xc7000034  lwc1        $f0, 0x34($t8)
    ctx->pc = 0x3a1f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f9c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3a1f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3a1fa0: 0xaf8dbd70  sw          $t5, -0x4290($gp)
    ctx->pc = 0x3a1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 13));
    // 0x3a1fa4: 0xc7000038  lwc1        $f0, 0x38($t8)
    ctx->pc = 0x3a1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1fa8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3a1fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3a1fac: 0xaf8ebd70  sw          $t6, -0x4290($gp)
    ctx->pc = 0x3a1facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 14));
    // 0x3a1fb0: 0xe44d0038  swc1        $f13, 0x38($v0)
    ctx->pc = 0x3a1fb0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3a1fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FB4u;
        // 0x3a1fb8: 0xaf8fbd70  sw          $t7, -0x4290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1FBCu;
    // 0x3a1fbc: 0x0  nop
    ctx->pc = 0x3a1fbcu;
    // NOP
label_3a1fc0:
    // 0x3a1fc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a1fc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a1fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a1fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FC8u;
        // 0x3a1fcc: 0xaf82bd74  sw          $v0, -0x428C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1FD0u;
    // 0x3a1fd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a1fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a1fd4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3a1fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3a1fd8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3a1fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3a1fdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a1fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1fe0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a1fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3a1fe4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a1fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1fe8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3a1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3a1fec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a1fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a1ff0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a1ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a1ff4: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x3a1ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a1ff8: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x3a1ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x3a1ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2000: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x3a2000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3a2004: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x3a2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3a2008: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A2008u;
    {
        const bool branch_taken_0x3a2008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2008u;
        // 0x3a200c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2008) {
            ctx->pc = 0x3A2044u;
            goto label_3a2044;
        }
    }
    ctx->pc = 0x3A2010u;
    // 0x3a2010: 0x8f82bd7c  lw          $v0, -0x4284($gp)
    ctx->pc = 0x3a2010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
    // 0x3a2014: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x3a2014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3a2018: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x3a2018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3a201c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a2020: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2020u;
    {
        const bool branch_taken_0x3a2020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2020u;
        // 0x3a2024: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2020) {
            ctx->pc = 0x3A2038u;
            goto label_3a2038;
        }
    }
    ctx->pc = 0x3A2028u;
    // 0x3a2028: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a2028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a202c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3a202cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a2030: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A2030u;
    {
        const bool branch_taken_0x3a2030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2030u;
        // 0x3a2034: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2030) {
            ctx->pc = 0x3A2084u;
            goto label_3a2084;
        }
    }
    ctx->pc = 0x3A2038u;
label_3a2038:
    // 0x3a2038: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3a2038u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a203c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A203Cu;
    {
        const bool branch_taken_0x3a203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A203Cu;
        // 0x3a2040: 0x2662021  addu        $a0, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a203c) {
            ctx->pc = 0x3A207Cu;
            goto label_3a207c;
        }
    }
    ctx->pc = 0x3A2044u;
label_3a2044:
    // 0x3a2044: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3a2044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3a2048: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x3a2048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3a204c: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x3a204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a2050: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a2050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a2054: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2054u;
    {
        const bool branch_taken_0x3a2054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2054u;
        // 0x3a2058: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2054) {
            ctx->pc = 0x3A2074u;
            goto label_3a2074;
        }
    }
    ctx->pc = 0x3A205Cu;
    // 0x3a205c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2060: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3a2060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a2064: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2064u;
    {
        const bool branch_taken_0x3a2064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a2064) {
            ctx->pc = 0x3A2068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2064u;
            // 0x3a2068: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2078u;
            goto label_3a2078;
        }
    }
    ctx->pc = 0x3A206Cu;
    // 0x3a206c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A206Cu;
    {
        const bool branch_taken_0x3a206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A206Cu;
        // 0x3a2070: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a206c) {
            ctx->pc = 0x3A2084u;
            goto label_3a2084;
        }
    }
    ctx->pc = 0x3A2074u;
label_3a2074:
    // 0x3a2074: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3a2074u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3a2078:
    // 0x3a2078: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x3a2078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3a207c:
    // 0x3a207c: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A207Cu;
    SET_GPR_U32(ctx, 31, 0x3A2084u);
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A207Cu, 0x3A2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2084u;
label_3a2084:
    // 0x3a2084: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a2088: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3a2088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x3a208c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x3a208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x3a2090: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3a2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3a2094: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x3a2094u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2098: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2098u;
    {
        const bool branch_taken_0x3a2098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2098u;
        // 0x3a209c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2098) {
            ctx->pc = 0x3A20B8u;
            goto label_3a20b8;
        }
    }
    ctx->pc = 0x3A20A0u;
    // 0x3a20a0: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x3a20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x3a20a4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3a20a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a20a8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3a20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a20ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a20acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a20b0: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x3a20b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x3a20b4: 0x0  nop
    ctx->pc = 0x3a20b4u;
    // NOP
label_3a20b8:
    // 0x3a20b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a20b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a20bc: 0xc0e86d2  jal         func_3A1B48
    ctx->pc = 0x3A20BCu;
    SET_GPR_U32(ctx, 31, 0x3A20C4u);
    ctx->pc = 0x3A20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20BCu;
    // 0x3a20c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B48u, 0x3A20BCu, 0x3A20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20C4u;
label_3a20c4:
    // 0x3a20c4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x3a20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x3a20c8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x3a20c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3a20cc: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3a20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3a20d0: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x3a20d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a20d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a20d8: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x3a20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x3a20dc: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x3a20dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x3a20e0: 0x8e30e880  lw          $s0, -0x1780($s1)
    ctx->pc = 0x3a20e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61E880u));
    // 0x3a20e4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3a20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3a20e8: 0xc106784  jal         func_419E10
    ctx->pc = 0x3A20E8u;
    SET_GPR_U32(ctx, 31, 0x3A20F0u);
    ctx->pc = 0x3A20ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20E8u;
    // 0x3a20ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3A20E8u, 0x3A20F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20F0u;
label_3a20f0:
    // 0x3a20f0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3a20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3a20f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a20f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a20f8: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x3A20F8u;
    SET_GPR_U32(ctx, 31, 0x3A2100u);
    ctx->pc = 0x3A20FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20F8u;
    // 0x3a20fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3A20F8u, 0x3A2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2100u;
label_3a2100:
    // 0x3a2100: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x3a2100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a2108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a210c: 0xc0e2048  jal         func_388120
    ctx->pc = 0x3A210Cu;
    SET_GPR_U32(ctx, 31, 0x3A2114u);
    ctx->pc = 0x3A2110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A210Cu;
    // 0x3a2110: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3A210Cu, 0x3A2114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2114u;
label_3a2114:
    // 0x3a2114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2118: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x3a2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x3a211c: 0x8e22e880  lw          $v0, -0x1780($s1)
    ctx->pc = 0x3a211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961280)));
    // 0x3a2120: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3a2120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3a2124: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3a2124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2128: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a2128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a212c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a2130: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x3a2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a2134: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x3a2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3a2138: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x3a2138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a213c: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x3a213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a2140: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3a2140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3a2144: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a2144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a2148: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3a2148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a214c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3a214cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x3a2150: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3a2150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a2154: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x3a2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a2158: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a2158u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a215c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3a215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2160: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3a2160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3a2164: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a2164u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a2168: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3a2168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3a216c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3a216cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3a2170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a2170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2174: 0x0  nop
    ctx->pc = 0x3a2174u;
    // NOP
    // 0x3a2178: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2178u;
    {
        const bool branch_taken_0x3a2178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2178u;
        // 0x3a217c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2178) {
            ctx->pc = 0x3A2188u;
            goto label_3a2188;
        }
    }
    ctx->pc = 0x3A2180u;
    // 0x3a2180: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3A2180u;
    {
        const bool branch_taken_0x3a2180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2180u;
        // 0x3a2184: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2180) {
            ctx->pc = 0x3A21E4u;
            goto label_3a21e4;
        }
    }
    ctx->pc = 0x3A2188u;
label_3a2188:
    // 0x3a2188: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a2188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3a218c:
    // 0x3a218c: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A218Cu;
    {
        const bool branch_taken_0x3a218c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3A2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A218Cu;
        // 0x3a2190: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a218c) {
            ctx->pc = 0x3A21E4u;
            goto label_3a21e4;
        }
    }
    ctx->pc = 0x3A2194u;
    // 0x3a2194: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3a2194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2198: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x3a2198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a219c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3a219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a21a0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x3a21a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a21a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a21a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a21a8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3a21a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a21ac: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3a21acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3a21b0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3a21b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a21b4: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x3a21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a21b8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a21b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a21bc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3a21bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a21c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3a21c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3a21c4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3a21c4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3a21c8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a21c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3a21cc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3a21ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3a21d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a21d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a21d4: 0x0  nop
    ctx->pc = 0x3a21d4u;
    // NOP
    // 0x3a21d8: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x3A21D8u;
    {
        const bool branch_taken_0x3a21d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a21d8) {
            ctx->pc = 0x3A21DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A21D8u;
            // 0x3a21dc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A218Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a218c;
        }
    }
    ctx->pc = 0x3A21E0u;
    // 0x3a21e0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x3a21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_3a21e4:
    // 0x3a21e4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3a21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3a21e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a21e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a21ec: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3a21ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3a21f0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A21F0u;
    {
        const bool branch_taken_0x3a21f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21F0u;
        // 0x3a21f4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21f0) {
            ctx->pc = 0x3A2228u;
            goto label_3a2228;
        }
    }
    ctx->pc = 0x3A21F8u;
    // 0x3a21f8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3a21f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3a21fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A21FCu;
    {
        const bool branch_taken_0x3a21fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21FCu;
        // 0x3a2200: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21fc) {
            ctx->pc = 0x3A2210u;
            goto label_3a2210;
        }
    }
    ctx->pc = 0x3A2204u;
    // 0x3a2204: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3a2204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3a2208: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2208u;
    {
        const bool branch_taken_0x3a2208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2208) {
            ctx->pc = 0x3A220Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2208u;
            // 0x3a220c: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2220u;
            goto label_3a2220;
        }
    }
    ctx->pc = 0x3A2210u;
label_3a2210:
    // 0x3a2210: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x3a2210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a2214: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a2214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a2218: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A2218u;
    {
        const bool branch_taken_0x3a2218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2218u;
        // 0x3a221c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2218) {
            ctx->pc = 0x3A2264u;
            goto label_3a2264;
        }
    }
    ctx->pc = 0x3A2220u;
label_3a2220:
    // 0x3a2220: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2220u;
    {
        const bool branch_taken_0x3a2220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2220u;
        // 0x3a2224: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2220) {
            ctx->pc = 0x3A223Cu;
            goto label_3a223c;
        }
    }
    ctx->pc = 0x3A2228u;
label_3a2228:
    // 0x3a2228: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a2228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a222c: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x3a222cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2230: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x3a2230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a2234: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A2234u;
    {
        const bool branch_taken_0x3a2234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2234u;
        // 0x3a2238: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2234) {
            ctx->pc = 0x3A2268u;
            goto label_3a2268;
        }
    }
    ctx->pc = 0x3A223Cu;
label_3a223c:
    // 0x3a223c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A223Cu;
    {
        const bool branch_taken_0x3a223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A223Cu;
        // 0x3a2240: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a223c) {
            ctx->pc = 0x3A2254u;
            goto label_3a2254;
        }
    }
    ctx->pc = 0x3A2244u;
    // 0x3a2244: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x3a2244u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a2248: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a2248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a224c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A224Cu;
    {
        const bool branch_taken_0x3a224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A224Cu;
        // 0x3a2250: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a224c) {
            ctx->pc = 0x3A2264u;
            goto label_3a2264;
        }
    }
    ctx->pc = 0x3A2254u;
label_3a2254:
    // 0x3a2254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2258: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x3a2258u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a225c: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a225cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a2260: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3a2260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_3a2264:
    // 0x3a2264: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x3a2264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_3a2268:
    // 0x3a2268: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a226c: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A226Cu;
    {
        const bool branch_taken_0x3a226c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a226c) {
            ctx->pc = 0x3A2270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A226Cu;
            // 0x3a2270: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2284u;
            goto label_3a2284;
        }
    }
    ctx->pc = 0x3A2274u;
    // 0x3a2274: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x3a2274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3a2278: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a2278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3a227c: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x3a227cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2280: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x3a2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3a2284:
    // 0x3a2284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a2284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2288: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a228c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3a228cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3a2290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a2290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a2294: 0xc0e8718  jal         func_3A1C60
    ctx->pc = 0x3A2294u;
    SET_GPR_U32(ctx, 31, 0x3A229Cu);
    ctx->pc = 0x3A2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2294u;
    // 0x3a2298: 0xa242002a  sb          $v0, 0x2A($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1C60u;
    goto label_3a1c60;
    ctx->pc = 0x3A229Cu;
label_3a229c:
    // 0x3a229c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a229cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a22a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a22a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3a22a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a22a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3a22a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a22ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a22acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a22b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3a22b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a22b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a22b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a22b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A22B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22B8u;
        // 0x3a22bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A22B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A22C0u;
}
