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

// Function: sub_00371F70
// Address: 0x371f70 - 0x372100
void sub_00371F70_0x371f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371F70_0x371f70");
#endif

    switch (ctx->pc) {
        case 0x371fa8u: goto label_371fa8;
        case 0x371fd0u: goto label_371fd0;
        default: break;
    }

    ctx->pc = 0x371f70u;

    // 0x371f70: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x371f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371f74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x371f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x371f78: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x371f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x371f7c: 0x10c0005e  beqz        $a2, . + 4 + (0x5E << 2)
    ctx->pc = 0x371F7Cu;
    {
        const bool branch_taken_0x371f7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x371F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F7Cu;
        // 0x371f80: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f7c) {
            ctx->pc = 0x3720F8u;
            goto label_3720f8;
        }
    }
    ctx->pc = 0x371F84u;
    // 0x371f84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x371f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x371f88: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x371f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x371f8c: 0xc44897e0  lwc1        $f8, -0x6820($v0)
    ctx->pc = 0x371f8cu;
    { uint32_t bits = FAST_READ32(0x6097E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x371f90: 0x2467c430  addiu       $a3, $v1, -0x3BD0
    ctx->pc = 0x371f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
    // 0x371f94: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x371f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x371f98: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x371f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x371f9c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x371f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x371fa0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x371fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x371fa4: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x371fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_371fa8:
    // 0x371fa8: 0x5044003b  beql        $v0, $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x371FA8u;
    {
        const bool branch_taken_0x371fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x371fa8) {
            ctx->pc = 0x371FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371FA8u;
            // 0x371fac: 0xe4c50004  swc1        $f5, 0x4($a2) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x372098u;
            goto label_372098;
        }
    }
    ctx->pc = 0x371FB0u;
    // 0x371fb0: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x371fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x371fb4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x371fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x371fb8: 0x8ce40030  lw          $a0, 0x30($a3)
    ctx->pc = 0x371fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x371fbc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x371fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371fc0: 0x10640031  beq         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x371FC0u;
    {
        const bool branch_taken_0x371fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x371FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FC0u;
        // 0x371fc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371fc0) {
            ctx->pc = 0x372088u;
            goto label_372088;
        }
    }
    ctx->pc = 0x371FC8u;
    // 0x371fc8: 0xe4c80004  swc1        $f8, 0x4($a2)
    ctx->pc = 0x371fc8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x371fcc: 0x0  nop
    ctx->pc = 0x371fccu;
    // NOP
label_371fd0:
    // 0x371fd0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x371fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x371fd4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x371FD4u;
    {
        const bool branch_taken_0x371fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x371fd4) {
            ctx->pc = 0x371FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371FD4u;
            // 0x371fd8: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x371FE0u;
            goto label_371fe0;
        }
    }
    ctx->pc = 0x371FDCu;
    // 0x371fdc: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x371fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371fe0:
    // 0x371fe0: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x371fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x371fe4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x371fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x371fe8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x371fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x371fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x371fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x371ff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371FF0u;
    {
        const bool branch_taken_0x371ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FF0u;
        // 0x371ff4: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ff0) {
            ctx->pc = 0x372000u;
            goto label_372000;
        }
    }
    ctx->pc = 0x371FF8u;
    // 0x371ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x371FF8u;
    {
        const bool branch_taken_0x371ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FF8u;
        // 0x371ffc: 0xc4600044  lwc1        $f0, 0x44($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ff8) {
            ctx->pc = 0x372004u;
            goto label_372004;
        }
    }
    ctx->pc = 0x372000u;
label_372000:
    // 0x372000: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x372000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372004:
    // 0x372004: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x372004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x372008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372008u;
    {
        const bool branch_taken_0x372008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372008u;
        // 0x37200c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372008) {
            ctx->pc = 0x372018u;
            goto label_372018;
        }
    }
    ctx->pc = 0x372010u;
    // 0x372010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372010u;
    {
        const bool branch_taken_0x372010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372010u;
        // 0x372014: 0xc4600048  lwc1        $f0, 0x48($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372010) {
            ctx->pc = 0x37201Cu;
            goto label_37201c;
        }
    }
    ctx->pc = 0x372018u;
label_372018:
    // 0x372018: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x372018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37201c:
    // 0x37201c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x37201cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x372020: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x372020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372024: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x372024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372028: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x372028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37202c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37202cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x372030: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x372030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372034: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x372034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372038: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x372038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37203c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x37203cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x372040: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x372040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x372044: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x372044u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x372048: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x372048u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x37204c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37204cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x372050: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x372050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x372054: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x372054u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x372058: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x372058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37205c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x37205cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x372060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x372060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x372064: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x372064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x372068: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x372068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x37206c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37206cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372070: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x372070u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x372074: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x372074u;
    {
        const bool branch_taken_0x372074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372074u;
        // 0x372078: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372074) {
            ctx->pc = 0x371FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371fd0;
        }
    }
    ctx->pc = 0x37207Cu;
    // 0x37207c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37207Cu;
    {
        const bool branch_taken_0x37207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37207Cu;
        // 0x372080: 0x8cc40028  lw          $a0, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37207c) {
            ctx->pc = 0x372090u;
            goto label_372090;
        }
    }
    ctx->pc = 0x372084u;
    // 0x372084: 0x0  nop
    ctx->pc = 0x372084u;
    // NOP
label_372088:
    // 0x372088: 0xe4c70004  swc1        $f7, 0x4($a2)
    ctx->pc = 0x372088u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x37208c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x37208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_372090:
    // 0x372090: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x372090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372094: 0xe4c50004  swc1        $f5, 0x4($a2)
    ctx->pc = 0x372094u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_372098:
    // 0x372098: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x372098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37209c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x37209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3720a0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x3720a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3720a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3720a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3720a8: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x3720a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3720ac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3720acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3720b0: 0xc4c2003c  lwc1        $f2, 0x3C($a2)
    ctx->pc = 0x3720b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3720b4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3720b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3720b8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3720b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3720bc: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x3720bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3720c0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3720c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3720c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3720c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3720c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3720c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3720cc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3720ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3720d0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3720d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3720d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3720d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3720d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3720d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3720dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3720dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3720e0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x3720e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x3720e4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3720e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3720e8: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x3720e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3720ec: 0x8cc60058  lw          $a2, 0x58($a2)
    ctx->pc = 0x3720ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x3720f0: 0x54c0ffad  bnel        $a2, $zero, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3720F0u;
    {
        const bool branch_taken_0x3720f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3720f0) {
            ctx->pc = 0x3720F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3720F0u;
            // 0x3720f4: 0x8cc20028  lw          $v0, 0x28($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371fa8;
        }
    }
    ctx->pc = 0x3720F8u;
label_3720f8:
    // 0x3720f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3720F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3720FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720F8u;
        // 0x3720fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3720F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372100u;
}
