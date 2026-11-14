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

// Function: sub_003BBC00
// Address: 0x3bbc00 - 0x3bbdf0
void sub_003BBC00_0x3bbc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBC00_0x3bbc00");
#endif

    switch (ctx->pc) {
        case 0x3bbc00u: goto label_3bbc00;
        case 0x3bbc04u: goto label_3bbc04;
        case 0x3bbc08u: goto label_3bbc08;
        case 0x3bbc0cu: goto label_3bbc0c;
        case 0x3bbc10u: goto label_3bbc10;
        case 0x3bbc14u: goto label_3bbc14;
        case 0x3bbc18u: goto label_3bbc18;
        case 0x3bbc1cu: goto label_3bbc1c;
        case 0x3bbc20u: goto label_3bbc20;
        case 0x3bbc24u: goto label_3bbc24;
        case 0x3bbc28u: goto label_3bbc28;
        case 0x3bbc2cu: goto label_3bbc2c;
        case 0x3bbc30u: goto label_3bbc30;
        case 0x3bbc34u: goto label_3bbc34;
        case 0x3bbc38u: goto label_3bbc38;
        case 0x3bbc3cu: goto label_3bbc3c;
        case 0x3bbc40u: goto label_3bbc40;
        case 0x3bbc44u: goto label_3bbc44;
        case 0x3bbc48u: goto label_3bbc48;
        case 0x3bbc4cu: goto label_3bbc4c;
        case 0x3bbc50u: goto label_3bbc50;
        case 0x3bbc54u: goto label_3bbc54;
        case 0x3bbc58u: goto label_3bbc58;
        case 0x3bbc5cu: goto label_3bbc5c;
        case 0x3bbc60u: goto label_3bbc60;
        case 0x3bbc64u: goto label_3bbc64;
        case 0x3bbc68u: goto label_3bbc68;
        case 0x3bbc6cu: goto label_3bbc6c;
        case 0x3bbc70u: goto label_3bbc70;
        case 0x3bbc74u: goto label_3bbc74;
        case 0x3bbc78u: goto label_3bbc78;
        case 0x3bbc7cu: goto label_3bbc7c;
        case 0x3bbc80u: goto label_3bbc80;
        case 0x3bbc84u: goto label_3bbc84;
        case 0x3bbc88u: goto label_3bbc88;
        case 0x3bbc8cu: goto label_3bbc8c;
        case 0x3bbc90u: goto label_3bbc90;
        case 0x3bbc94u: goto label_3bbc94;
        case 0x3bbc98u: goto label_3bbc98;
        case 0x3bbc9cu: goto label_3bbc9c;
        case 0x3bbca0u: goto label_3bbca0;
        case 0x3bbca4u: goto label_3bbca4;
        case 0x3bbca8u: goto label_3bbca8;
        case 0x3bbcacu: goto label_3bbcac;
        case 0x3bbcb0u: goto label_3bbcb0;
        case 0x3bbcb4u: goto label_3bbcb4;
        case 0x3bbcb8u: goto label_3bbcb8;
        case 0x3bbcbcu: goto label_3bbcbc;
        case 0x3bbcc0u: goto label_3bbcc0;
        case 0x3bbcc4u: goto label_3bbcc4;
        case 0x3bbcc8u: goto label_3bbcc8;
        case 0x3bbcccu: goto label_3bbccc;
        case 0x3bbcd0u: goto label_3bbcd0;
        case 0x3bbcd4u: goto label_3bbcd4;
        case 0x3bbcd8u: goto label_3bbcd8;
        case 0x3bbcdcu: goto label_3bbcdc;
        case 0x3bbce0u: goto label_3bbce0;
        case 0x3bbce4u: goto label_3bbce4;
        case 0x3bbce8u: goto label_3bbce8;
        case 0x3bbcecu: goto label_3bbcec;
        case 0x3bbcf0u: goto label_3bbcf0;
        case 0x3bbcf4u: goto label_3bbcf4;
        case 0x3bbcf8u: goto label_3bbcf8;
        case 0x3bbcfcu: goto label_3bbcfc;
        case 0x3bbd00u: goto label_3bbd00;
        case 0x3bbd04u: goto label_3bbd04;
        case 0x3bbd08u: goto label_3bbd08;
        case 0x3bbd0cu: goto label_3bbd0c;
        case 0x3bbd10u: goto label_3bbd10;
        case 0x3bbd14u: goto label_3bbd14;
        case 0x3bbd18u: goto label_3bbd18;
        case 0x3bbd1cu: goto label_3bbd1c;
        case 0x3bbd20u: goto label_3bbd20;
        case 0x3bbd24u: goto label_3bbd24;
        case 0x3bbd28u: goto label_3bbd28;
        case 0x3bbd2cu: goto label_3bbd2c;
        case 0x3bbd30u: goto label_3bbd30;
        case 0x3bbd34u: goto label_3bbd34;
        case 0x3bbd38u: goto label_3bbd38;
        case 0x3bbd3cu: goto label_3bbd3c;
        case 0x3bbd40u: goto label_3bbd40;
        case 0x3bbd44u: goto label_3bbd44;
        case 0x3bbd48u: goto label_3bbd48;
        case 0x3bbd4cu: goto label_3bbd4c;
        case 0x3bbd50u: goto label_3bbd50;
        case 0x3bbd54u: goto label_3bbd54;
        case 0x3bbd58u: goto label_3bbd58;
        case 0x3bbd5cu: goto label_3bbd5c;
        case 0x3bbd60u: goto label_3bbd60;
        case 0x3bbd64u: goto label_3bbd64;
        case 0x3bbd68u: goto label_3bbd68;
        case 0x3bbd6cu: goto label_3bbd6c;
        case 0x3bbd70u: goto label_3bbd70;
        case 0x3bbd74u: goto label_3bbd74;
        case 0x3bbd78u: goto label_3bbd78;
        case 0x3bbd7cu: goto label_3bbd7c;
        case 0x3bbd80u: goto label_3bbd80;
        case 0x3bbd84u: goto label_3bbd84;
        case 0x3bbd88u: goto label_3bbd88;
        case 0x3bbd8cu: goto label_3bbd8c;
        case 0x3bbd90u: goto label_3bbd90;
        case 0x3bbd94u: goto label_3bbd94;
        case 0x3bbd98u: goto label_3bbd98;
        case 0x3bbd9cu: goto label_3bbd9c;
        case 0x3bbda0u: goto label_3bbda0;
        case 0x3bbda4u: goto label_3bbda4;
        case 0x3bbda8u: goto label_3bbda8;
        case 0x3bbdacu: goto label_3bbdac;
        case 0x3bbdb0u: goto label_3bbdb0;
        case 0x3bbdb4u: goto label_3bbdb4;
        case 0x3bbdb8u: goto label_3bbdb8;
        case 0x3bbdbcu: goto label_3bbdbc;
        case 0x3bbdc0u: goto label_3bbdc0;
        case 0x3bbdc4u: goto label_3bbdc4;
        case 0x3bbdc8u: goto label_3bbdc8;
        case 0x3bbdccu: goto label_3bbdcc;
        case 0x3bbdd0u: goto label_3bbdd0;
        case 0x3bbdd4u: goto label_3bbdd4;
        case 0x3bbdd8u: goto label_3bbdd8;
        case 0x3bbddcu: goto label_3bbddc;
        case 0x3bbde0u: goto label_3bbde0;
        case 0x3bbde4u: goto label_3bbde4;
        case 0x3bbde8u: goto label_3bbde8;
        case 0x3bbdecu: goto label_3bbdec;
        default: break;
    }

    ctx->pc = 0x3bbc00u;

label_3bbc00:
    // 0x3bbc00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3bbc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3bbc04:
    // 0x3bbc04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bbc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bbc08:
    // 0x3bbc08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3bbc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3bbc0c:
    // 0x3bbc0c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3bbc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3bbc10:
    // 0x3bbc10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bbc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bbc14:
    // 0x3bbc14: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3bbc14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3bbc18:
    // 0x3bbc18: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3bbc18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bbc1c:
    // 0x3bbc1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3bbc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3bbc20:
    // 0x3bbc20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3bbc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3bbc24:
    // 0x3bbc24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bbc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3bbc28:
    // 0x3bbc28: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3bbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3bbc2c:
    // 0x3bbc2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bbc30:
    // 0x3bbc30: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3bbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbc34:
    // 0x3bbc34: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3bbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bbc38:
    // 0x3bbc38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbc3c:
    // 0x3bbc3c: 0x0  nop
    ctx->pc = 0x3bbc3cu;
    // NOP
label_3bbc40:
    // 0x3bbc40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3bbc44:
    if (ctx->pc == 0x3BBC44u) {
        ctx->pc = 0x3BBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC40u;
        // 0x3bbc44: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBC48u;
        goto label_3bbc48;
    }
    ctx->pc = 0x3BBC40u;
    {
        const bool branch_taken_0x3bbc40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC40u;
        // 0x3bbc44: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc40) {
            ctx->pc = 0x3BBC60u;
            goto label_3bbc60;
        }
    }
    ctx->pc = 0x3BBC48u;
label_3bbc48:
    // 0x3bbc48: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3bbc48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3bbc4c:
    // 0x3bbc4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bbc4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbc50:
    // 0x3bbc50: 0x0  nop
    ctx->pc = 0x3bbc50u;
    // NOP
label_3bbc54:
    // 0x3bbc54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3bbc58:
    if (ctx->pc == 0x3BBC58u) {
        ctx->pc = 0x3BBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC54u;
        // 0x3bbc58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBC5Cu;
        goto label_3bbc5c;
    }
    ctx->pc = 0x3BBC54u;
    {
        const bool branch_taken_0x3bbc54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbc54) {
            ctx->pc = 0x3BBC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBC54u;
            // 0x3bbc58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBC5Cu;
            goto label_3bbc5c;
        }
    }
    ctx->pc = 0x3BBC5Cu;
label_3bbc5c:
    // 0x3bbc5c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3bbc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbc60:
    // 0x3bbc60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bbc60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bbc64:
    // 0x3bbc64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3bbc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3bbc68:
    // 0x3bbc68: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3bbc68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3bbc6c:
    // 0x3bbc6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3bbc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bbc70:
    // 0x3bbc70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3bbc70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbc74:
    // 0x3bbc74: 0x0  nop
    ctx->pc = 0x3bbc74u;
    // NOP
label_3bbc78:
    // 0x3bbc78: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_3bbc7c:
    if (ctx->pc == 0x3BBC7Cu) {
        ctx->pc = 0x3BBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC78u;
        // 0x3bbc7c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBC80u;
        goto label_3bbc80;
    }
    ctx->pc = 0x3BBC78u;
    {
        const bool branch_taken_0x3bbc78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC78u;
        // 0x3bbc7c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc78) {
            ctx->pc = 0x3BBCE4u;
            goto label_3bbce4;
        }
    }
    ctx->pc = 0x3BBC80u;
label_3bbc80:
    // 0x3bbc80: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3bbc84:
    if (ctx->pc == 0x3BBC84u) {
        ctx->pc = 0x3BBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC80u;
        // 0x3bbc84: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBC88u;
        goto label_3bbc88;
    }
    ctx->pc = 0x3BBC80u;
    {
        const bool branch_taken_0x3bbc80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC80u;
        // 0x3bbc84: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc80) {
            ctx->pc = 0x3BBCA4u;
            goto label_3bbca4;
        }
    }
    ctx->pc = 0x3BBC88u;
label_3bbc88:
    // 0x3bbc88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3bbc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3bbc8c:
    // 0x3bbc8c: 0x0  nop
    ctx->pc = 0x3bbc8cu;
    // NOP
label_3bbc90:
    // 0x3bbc90: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3bbc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbc94:
    // 0x3bbc94: 0x0  nop
    ctx->pc = 0x3bbc94u;
    // NOP
label_3bbc98:
    // 0x3bbc98: 0x4503fffd  bc1tl       . + 4 + (-0x3 << 2)
label_3bbc9c:
    if (ctx->pc == 0x3BBC9Cu) {
        ctx->pc = 0x3BBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC98u;
        // 0x3bbc9c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBCA0u;
        goto label_3bbca0;
    }
    ctx->pc = 0x3BBC98u;
    {
        const bool branch_taken_0x3bbc98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbc98) {
            ctx->pc = 0x3BBC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBC98u;
            // 0x3bbc9c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbc90;
        }
    }
    ctx->pc = 0x3BBCA0u;
label_3bbca0:
    // 0x3bbca0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3bbca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3bbca4:
    // 0x3bbca4: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x3bbca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bbca8:
    // 0x3bbca8: 0xc0eee8c  jal         func_3BBA30
label_3bbcac:
    if (ctx->pc == 0x3BBCACu) {
        ctx->pc = 0x3BBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCA8u;
        // 0x3bbcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBCB0u;
        goto label_3bbcb0;
    }
    ctx->pc = 0x3BBCA8u;
    SET_GPR_U32(ctx, 31, 0x3BBCB0u);
    ctx->pc = 0x3BBCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBCA8u;
    // 0x3bbcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x3BBCA8u, 0x3BBCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBCB0u;
label_3bbcb0:
    // 0x3bbcb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bbcb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3bbcb4:
    // 0x3bbcb4: 0xc0eef7c  jal         func_3BBDF0
label_3bbcb8:
    if (ctx->pc == 0x3BBCB8u) {
        ctx->pc = 0x3BBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCB4u;
        // 0x3bbcb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBCBCu;
        goto label_3bbcbc;
    }
    ctx->pc = 0x3BBCB4u;
    SET_GPR_U32(ctx, 31, 0x3BBCBCu);
    ctx->pc = 0x3BBCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBCB4u;
    // 0x3bbcb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x3BBCB4u, 0x3BBCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBCBCu;
label_3bbcbc:
    // 0x3bbcbc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3bbcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bbcc0:
    // 0x3bbcc0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3bbcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbcc4:
    // 0x3bbcc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbcc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbcc8:
    // 0x3bbcc8: 0x0  nop
    ctx->pc = 0x3bbcc8u;
    // NOP
label_3bbccc:
    // 0x3bbccc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3bbcd0:
    if (ctx->pc == 0x3BBCD0u) {
        ctx->pc = 0x3BBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCCCu;
        // 0x3bbcd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBCD4u;
        goto label_3bbcd4;
    }
    ctx->pc = 0x3BBCCCu;
    {
        const bool branch_taken_0x3bbccc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCCCu;
        // 0x3bbcd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbccc) {
            ctx->pc = 0x3BBCD8u;
            goto label_3bbcd8;
        }
    }
    ctx->pc = 0x3BBCD4u;
label_3bbcd4:
    // 0x3bbcd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bbcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bbcd8:
    // 0x3bbcd8: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x3bbcd8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_3bbcdc:
    // 0x3bbcdc: 0x10000025  b           . + 4 + (0x25 << 2)
label_3bbce0:
    if (ctx->pc == 0x3BBCE0u) {
        ctx->pc = 0x3BBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCDCu;
        // 0x3bbce0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBCE4u;
        goto label_3bbce4;
    }
    ctx->pc = 0x3BBCDCu;
    {
        const bool branch_taken_0x3bbcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCDCu;
        // 0x3bbce0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbcdc) {
            ctx->pc = 0x3BBD74u;
            goto label_3bbd74;
        }
    }
    ctx->pc = 0x3BBCE4u;
label_3bbce4:
    // 0x3bbce4: 0x8e32002c  lw          $s2, 0x2C($s1)
    ctx->pc = 0x3bbce4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bbce8:
    // 0x3bbce8: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x3bbce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_3bbcec:
    // 0x3bbcec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3bbcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bbcf0:
    // 0x3bbcf0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3bbcf4:
    if (ctx->pc == 0x3BBCF4u) {
        ctx->pc = 0x3BBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCF0u;
        // 0x3bbcf4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBCF8u;
        goto label_3bbcf8;
    }
    ctx->pc = 0x3BBCF0u;
    {
        const bool branch_taken_0x3bbcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCF0u;
        // 0x3bbcf4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbcf0) {
            ctx->pc = 0x3BBD70u;
            goto label_3bbd70;
        }
    }
    ctx->pc = 0x3BBCF8u;
label_3bbcf8:
    // 0x3bbcf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bbcfc:
    // 0x3bbcfc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3bbcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bbd00:
    // 0x3bbd00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3bbd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbd04:
    // 0x3bbd04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbd04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbd08:
    // 0x3bbd08: 0x0  nop
    ctx->pc = 0x3bbd08u;
    // NOP
label_3bbd0c:
    // 0x3bbd0c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_3bbd10:
    if (ctx->pc == 0x3BBD10u) {
        ctx->pc = 0x3BBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD0Cu;
        // 0x3bbd10: 0x2653ffff  addiu       $s3, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBD14u;
        goto label_3bbd14;
    }
    ctx->pc = 0x3BBD0Cu;
    {
        const bool branch_taken_0x3bbd0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD0Cu;
        // 0x3bbd10: 0x2653ffff  addiu       $s3, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd0c) {
            ctx->pc = 0x3BBD3Cu;
            goto label_3bbd3c;
        }
    }
    ctx->pc = 0x3BBD14u;
label_3bbd14:
    // 0x3bbd14: 0x0  nop
    ctx->pc = 0x3bbd14u;
    // NOP
label_3bbd18:
    // 0x3bbd18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3bbd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bbd1c:
    // 0x3bbd1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bbd20:
    // 0x3bbd20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3bbd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbd24:
    // 0x3bbd24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbd24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbd28:
    // 0x3bbd28: 0x0  nop
    ctx->pc = 0x3bbd28u;
    // NOP
label_3bbd2c:
    // 0x3bbd2c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
label_3bbd30:
    if (ctx->pc == 0x3BBD30u) {
        ctx->pc = 0x3BBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD2Cu;
        // 0x3bbd30: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBD34u;
        goto label_3bbd34;
    }
    ctx->pc = 0x3BBD2Cu;
    {
        const bool branch_taken_0x3bbd2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD2Cu;
        // 0x3bbd30: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd2c) {
            ctx->pc = 0x3BBD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbd18;
        }
    }
    ctx->pc = 0x3BBD34u;
label_3bbd34:
    // 0x3bbd34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3bbd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3bbd38:
    // 0x3bbd38: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3bbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_3bbd3c:
    // 0x3bbd3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bbd40:
    // 0x3bbd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bbd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bbd44:
    // 0x3bbd44: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x3bbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bbd48:
    // 0x3bbd48: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bbd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bbd4c:
    // 0x3bbd4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bbd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bbd50:
    // 0x3bbd50: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bbd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bbd54:
    // 0x3bbd54: 0x60f809  jalr        $v1
label_3bbd58:
    if (ctx->pc == 0x3BBD58u) {
        ctx->pc = 0x3BBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD54u;
        // 0x3bbd58: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBD5Cu;
        goto label_3bbd5c;
    }
    ctx->pc = 0x3BBD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BBD5Cu);
        ctx->pc = 0x3BBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD54u;
        // 0x3bbd58: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBD54u, 0x3BBD5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BBD5Cu;
label_3bbd5c:
    // 0x3bbd5c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bbd60:
    // 0x3bbd60: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3bbd60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bbd64:
    // 0x3bbd64: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3bbd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3bbd68:
    // 0x3bbd68: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_3bbd6c:
    if (ctx->pc == 0x3BBD6Cu) {
        ctx->pc = 0x3BBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD68u;
        // 0x3bbd6c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBD70u;
        goto label_3bbd70;
    }
    ctx->pc = 0x3BBD68u;
    {
        const bool branch_taken_0x3bbd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD68u;
        // 0x3bbd6c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd68) {
            ctx->pc = 0x3BBCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbcf8;
        }
    }
    ctx->pc = 0x3BBD70u;
label_3bbd70:
    // 0x3bbd70: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3bbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3bbd74:
    // 0x3bbd74: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_3bbd78:
    if (ctx->pc == 0x3BBD78u) {
        ctx->pc = 0x3BBD7Cu;
        goto label_3bbd7c;
    }
    ctx->pc = 0x3BBD74u;
    {
        const bool branch_taken_0x3bbd74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbd74) {
            ctx->pc = 0x3BBD9Cu;
            goto label_3bbd9c;
        }
    }
    ctx->pc = 0x3BBD7Cu;
label_3bbd7c:
    // 0x3bbd7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3bbd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3bbd80:
    // 0x3bbd80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3bbd84:
    if (ctx->pc == 0x3BBD84u) {
        ctx->pc = 0x3BBD88u;
        goto label_3bbd88;
    }
    ctx->pc = 0x3BBD80u;
    {
        const bool branch_taken_0x3bbd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbd80) {
            ctx->pc = 0x3BBD9Cu;
            goto label_3bbd9c;
        }
    }
    ctx->pc = 0x3BBD88u;
label_3bbd88:
    // 0x3bbd88: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3bbd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3bbd8c:
    // 0x3bbd8c: 0x40f809  jalr        $v0
label_3bbd90:
    if (ctx->pc == 0x3BBD90u) {
        ctx->pc = 0x3BBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD8Cu;
        // 0x3bbd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBD94u;
        goto label_3bbd94;
    }
    ctx->pc = 0x3BBD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BBD94u);
        ctx->pc = 0x3BBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD8Cu;
        // 0x3bbd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBD8Cu, 0x3BBD94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BBD94u;
label_3bbd94:
    // 0x3bbd94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3bbd98:
    if (ctx->pc == 0x3BBD98u) {
        ctx->pc = 0x3BBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD94u;
        // 0x3bbd98: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBD9Cu;
        goto label_3bbd9c;
    }
    ctx->pc = 0x3BBD94u;
    {
        const bool branch_taken_0x3bbd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbd94) {
            ctx->pc = 0x3BBD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBD94u;
            // 0x3bbd98: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBD9Cu;
            goto label_3bbd9c;
        }
    }
    ctx->pc = 0x3BBD9Cu;
label_3bbd9c:
    // 0x3bbd9c: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_3bbda0:
    if (ctx->pc == 0x3BBDA0u) {
        ctx->pc = 0x3BBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD9Cu;
        // 0x3bbda0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBDA4u;
        goto label_3bbda4;
    }
    ctx->pc = 0x3BBD9Cu;
    {
        const bool branch_taken_0x3bbd9c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD9Cu;
        // 0x3bbda0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd9c) {
            ctx->pc = 0x3BBDC8u;
            goto label_3bbdc8;
        }
    }
    ctx->pc = 0x3BBDA4u;
label_3bbda4:
    // 0x3bbda4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3bbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3bbda8:
    // 0x3bbda8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3bbdac:
    if (ctx->pc == 0x3BBDACu) {
        ctx->pc = 0x3BBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDA8u;
        // 0x3bbdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBDB0u;
        goto label_3bbdb0;
    }
    ctx->pc = 0x3BBDA8u;
    {
        const bool branch_taken_0x3bbda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbda8) {
            ctx->pc = 0x3BBDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBDA8u;
            // 0x3bbdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBDCCu;
            goto label_3bbdcc;
        }
    }
    ctx->pc = 0x3BBDB0u;
label_3bbdb0:
    // 0x3bbdb0: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x3bbdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3bbdb4:
    // 0x3bbdb4: 0x40f809  jalr        $v0
label_3bbdb8:
    if (ctx->pc == 0x3BBDB8u) {
        ctx->pc = 0x3BBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDB4u;
        // 0x3bbdb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBDBCu;
        goto label_3bbdbc;
    }
    ctx->pc = 0x3BBDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BBDBCu);
        ctx->pc = 0x3BBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDB4u;
        // 0x3bbdb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBDB4u, 0x3BBDBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BBDBCu;
label_3bbdbc:
    // 0x3bbdbc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3bbdc0:
    if (ctx->pc == 0x3BBDC0u) {
        ctx->pc = 0x3BBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDBCu;
        // 0x3bbdc0: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBDC4u;
        goto label_3bbdc4;
    }
    ctx->pc = 0x3BBDBCu;
    {
        const bool branch_taken_0x3bbdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbdbc) {
            ctx->pc = 0x3BBDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBDBCu;
            // 0x3bbdc0: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBDC4u;
            goto label_3bbdc4;
        }
    }
    ctx->pc = 0x3BBDC4u;
label_3bbdc4:
    // 0x3bbdc4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3bbdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bbdc8:
    // 0x3bbdc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bbdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bbdcc:
    // 0x3bbdcc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3bbdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bbdd0:
    // 0x3bbdd0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3bbdd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bbdd4:
    // 0x3bbdd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bbdd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bbdd8:
    // 0x3bbdd8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3bbdd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bbddc:
    // 0x3bbddc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3bbddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bbde0:
    // 0x3bbde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bbde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bbde4:
    // 0x3bbde4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3bbde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bbde8:
    // 0x3bbde8: 0x3e00008  jr          $ra
label_3bbdec:
    if (ctx->pc == 0x3BBDECu) {
        ctx->pc = 0x3BBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDE8u;
        // 0x3bbdec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBDF0u;
        goto label_fallthrough_0x3bbde8;
    }
    ctx->pc = 0x3BBDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDE8u;
        // 0x3bbdec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bbde8:
    ctx->pc = 0x3BBDF0u;
}
