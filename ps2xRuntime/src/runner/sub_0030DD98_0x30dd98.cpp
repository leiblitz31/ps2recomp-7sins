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

// Function: sub_0030DD98
// Address: 0x30dd98 - 0x30e020
void sub_0030DD98_0x30dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DD98_0x30dd98");
#endif

    switch (ctx->pc) {
        case 0x30ddecu: goto label_30ddec;
        default: break;
    }

    ctx->pc = 0x30dd98u;

    // 0x30dd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30dd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30dd9c: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x30dd9cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x30dda0: 0x44068000  mfc1        $a2, $f16
    ctx->pc = 0x30dda0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[16], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x30dda4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x30dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x30dda8: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x30dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x30ddac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30ddb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30ddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30ddb4: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x30ddb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x30ddb8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x30ddb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30ddbc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30DDBCu;
    {
        const bool branch_taken_0x30ddbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDBCu;
        // 0x30ddc0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddbc) {
            ctx->pc = 0x30DE38u;
            goto label_30de38;
        }
    }
    ctx->pc = 0x30DDC4u;
    // 0x30ddc4: 0x46008024  .word       0x46008024                   # cvt.w.s     $f0, $f16 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ddc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[16]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30ddc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30ddc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ddcc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30DDCCu;
    {
        const bool branch_taken_0x30ddcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDCCu;
        // 0x30ddd0: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddcc) {
            ctx->pc = 0x30DE3Cu;
            goto label_30de3c;
        }
    }
    ctx->pc = 0x30DDD4u;
    // 0x30ddd4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x30ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30ddd8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x30ddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30dddc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30DDDCu;
    {
        const bool branch_taken_0x30dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dddc) {
            ctx->pc = 0x30DDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DDDCu;
            // 0x30dde0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DE08u;
            goto label_30de08;
        }
    }
    ctx->pc = 0x30DDE4u;
    // 0x30dde4: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x30DDE4u;
    SET_GPR_U32(ctx, 31, 0x30DDECu);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x30DDE4u, 0x30DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDECu;
label_30ddec:
    // 0x30ddec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30ddf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30ddf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ddf4: 0x0  nop
    ctx->pc = 0x30ddf4u;
    // NOP
    // 0x30ddf8: 0x0  nop
    ctx->pc = 0x30ddf8u;
    // NOP
    // 0x30ddfc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30ddfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30de00: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x30DE00u;
    {
        const bool branch_taken_0x30de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE00u;
        // 0x30de04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de00) {
            ctx->pc = 0x30E014u;
            goto label_30e014;
        }
    }
    ctx->pc = 0x30DE08u;
label_30de08:
    // 0x30de08: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30DE08u;
    {
        const bool branch_taken_0x30de08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE08u;
        // 0x30de0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de08) {
            ctx->pc = 0x30DE30u;
            goto label_30de30;
        }
    }
    ctx->pc = 0x30DE10u;
    // 0x30de10: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30de10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30de14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30de14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30de18: 0x0  nop
    ctx->pc = 0x30de18u;
    // NOP
    // 0x30de1c: 0x0  nop
    ctx->pc = 0x30de1cu;
    // NOP
    // 0x30de20: 0x46100003  div.s       $f0, $f0, $f16
    ctx->pc = 0x30de20u;
    { if (ctx->f[16] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[16]); }
    // 0x30de24: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x30DE24u;
    {
        const bool branch_taken_0x30de24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30de24) {
            ctx->pc = 0x30E014u;
            goto label_30e014;
        }
    }
    ctx->pc = 0x30DE2Cu;
    // 0x30de2c: 0x0  nop
    ctx->pc = 0x30de2cu;
    // NOP
label_30de30:
    // 0x30de30: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x30DE30u;
    {
        const bool branch_taken_0x30de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE30u;
        // 0x30de34: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de30) {
            ctx->pc = 0x30E010u;
            goto label_30e010;
        }
    }
    ctx->pc = 0x30DE38u;
label_30de38:
    // 0x30de38: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x30de38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_30de3c:
    // 0x30de3c: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x30de3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x30de40: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x30de40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30de44: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x30DE44u;
    {
        const bool branch_taken_0x30de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30de44) {
            ctx->pc = 0x30DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DE44u;
            // 0x30de48: 0x461083c2  mul.s       $f15, $f16, $f16 (Delay Slot)
            ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DE88u;
            goto label_30de88;
        }
    }
    ctx->pc = 0x30DE4Cu;
    // 0x30de4c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DE4Cu;
    {
        const bool branch_taken_0x30de4c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x30de4c) {
            ctx->pc = 0x30DE5Cu;
            goto label_30de5c;
        }
    }
    ctx->pc = 0x30DE54u;
    // 0x30de54: 0x46008407  neg.s       $f16, $f16
    ctx->pc = 0x30de54u;
    ctx->f[16] = FPU_NEG_S(ctx->f[16]);
    // 0x30de58: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x30de58u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_30de5c:
    // 0x30de5c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x30de5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x30de60: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30de60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x30de64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30de64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30de68: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x30de6c: 0x34212167  ori         $at, $at, 0x2167
    ctx->pc = 0x30de6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8551);
    // 0x30de70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30de70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30de74: 0x461003c1  sub.s       $f15, $f0, $f16
    ctx->pc = 0x30de74u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x30de78: 0x460d0b81  sub.s       $f14, $f1, $f13
    ctx->pc = 0x30de78u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x30de7c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x30de7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30de80: 0x460e7c00  add.s       $f16, $f15, $f14
    ctx->pc = 0x30de80u;
    ctx->f[16] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x30de84: 0x461083c2  mul.s       $f15, $f16, $f16
    ctx->pc = 0x30de84u;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
label_30de88:
    // 0x30de88: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30de88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30de8c: 0x2442b4e8  addiu       $v0, $v0, -0x4B18
    ctx->pc = 0x30de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948072));
    // 0x30de90: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x30de90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x30de94: 0xc4480030  lwc1        $f8, 0x30($v0)
    ctx->pc = 0x30de94u;
    { uint32_t bits = FAST_READ32(0x5FB518u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30de98: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x30de98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x30de9c: 0xc449002c  lwc1        $f9, 0x2C($v0)
    ctx->pc = 0x30de9cu;
    { uint32_t bits = FAST_READ32(0x5FB514u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x30dea0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x30dea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30dea4: 0x460f7b82  mul.s       $f14, $f15, $f15
    ctx->pc = 0x30dea4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x30dea8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x30dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30deac: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x30deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30deb0: 0x46107b02  mul.s       $f12, $f15, $f16
    ctx->pc = 0x30deb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
    // 0x30deb4: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x30deb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30deb8: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x30deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30debc: 0x46087202  mul.s       $f8, $f14, $f8
    ctx->pc = 0x30debcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x30dec0: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x30dec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30dec4: 0x46097242  mul.s       $f9, $f14, $f9
    ctx->pc = 0x30dec4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x30dec8: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x30dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30decc: 0xc4460010  lwc1        $f6, 0x10($v0)
    ctx->pc = 0x30deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30ded0: 0xc447000c  lwc1        $f7, 0xC($v0)
    ctx->pc = 0x30ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30ded4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x30ded4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x30ded8: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x30ded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30dedc: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x30dedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x30dee0: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x30dee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x30dee4: 0xc44b0004  lwc1        $f11, 0x4($v0)
    ctx->pc = 0x30dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x30dee8: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x30dee8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x30deec: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x30deecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x30def0: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x30def0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x30def4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x30def4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30def8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x30def8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x30defc: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x30defcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x30df00: 0x460370c2  mul.s       $f3, $f14, $f3
    ctx->pc = 0x30df00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x30df04: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x30df04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x30df08: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x30df08u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x30df0c: 0x46057142  mul.s       $f5, $f14, $f5
    ctx->pc = 0x30df0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x30df10: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x30df10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x30df14: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x30df14u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30df18: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x30df18u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x30df1c: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x30df1cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x30df20: 0x460771c2  mul.s       $f7, $f14, $f7
    ctx->pc = 0x30df20u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x30df24: 0x46065280  add.s       $f10, $f10, $f6
    ctx->pc = 0x30df24u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x30df28: 0x460758c0  add.s       $f3, $f11, $f7
    ctx->pc = 0x30df28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x30df2c: 0x460a7942  mul.s       $f5, $f15, $f10
    ctx->pc = 0x30df2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[10]);
    // 0x30df30: 0x46051800  add.s       $f0, $f3, $f5
    ctx->pc = 0x30df30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x30df34: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30df34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30df38: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x30df38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x30df3c: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x30df3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x30df40: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x30df40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x30df44: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x30df44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x30df48: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x30DF48u;
    {
        const bool branch_taken_0x30df48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF48u;
        // 0x30df4c: 0x46038380  add.s       $f14, $f16, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df48) {
            ctx->pc = 0x30DFA0u;
            goto label_30dfa0;
        }
    }
    ctx->pc = 0x30DF50u;
    // 0x30df50: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x30df50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30df54: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x30df54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x30df58: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x30df58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x30df5c: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x30df5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x30df60: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30df60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30df64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30df68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30df68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30df6c: 0x46057040  add.s       $f1, $f14, $f5
    ctx->pc = 0x30df6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[14], ctx->f[5]);
    // 0x30df70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30df70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30df74: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30df74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30df78: 0x0  nop
    ctx->pc = 0x30df78u;
    // NOP
    // 0x30df7c: 0x0  nop
    ctx->pc = 0x30df7cu;
    // NOP
    // 0x30df80: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30df80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30df84: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x30df84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x30df88: 0x46008001  sub.s       $f0, $f16, $f0
    ctx->pc = 0x30df88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x30df8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30df8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x30df90: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x30df90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30df94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30DF94u;
    {
        const bool branch_taken_0x30df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF94u;
        // 0x30df98: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df94) {
            ctx->pc = 0x30E010u;
            goto label_30e010;
        }
    }
    ctx->pc = 0x30DF9Cu;
    // 0x30df9c: 0x0  nop
    ctx->pc = 0x30df9cu;
    // NOP
label_30dfa0:
    // 0x30dfa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dfa4: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x30DFA4u;
    {
        const bool branch_taken_0x30dfa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFA4u;
        // 0x30dfa8: 0x46007006  mov.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfa4) {
            ctx->pc = 0x30E010u;
            goto label_30e010;
        }
    }
    ctx->pc = 0x30DFACu;
    // 0x30dfac: 0x44037000  mfc1        $v1, $f14
    ctx->pc = 0x30dfacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30dfb0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x30dfb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dfb4: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x30dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30dfb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30dfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30dfbc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x30dfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30dfc0: 0x46107841  sub.s       $f1, $f15, $f16
    ctx->pc = 0x30dfc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x30dfc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30dfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30dfc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30dfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30dfcc: 0x0  nop
    ctx->pc = 0x30dfccu;
    // NOP
    // 0x30dfd0: 0x0  nop
    ctx->pc = 0x30dfd0u;
    // NOP
    // 0x30dfd4: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x30dfd4u;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[14]); }
    // 0x30dfd8: 0x46011941  sub.s       $f5, $f3, $f1
    ctx->pc = 0x30dfd8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30dfdc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x30dfdcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x30dfe0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30dfe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30dfe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x30dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dfe8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30dfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30dfec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30dfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30dff0: 0x460f1902  mul.s       $f4, $f3, $f15
    ctx->pc = 0x30dff0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x30dff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30dff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30dff8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30dff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30dffc: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x30dffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x30e000: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x30e000u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x30e004: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x30e004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x30e008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30e008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30e00c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x30e00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_30e010:
    // 0x30e010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30e010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30e014:
    // 0x30e014: 0x3e00008  jr          $ra
    ctx->pc = 0x30E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E014u;
        // 0x30e018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E01Cu;
    // 0x30e01c: 0x0  nop
    ctx->pc = 0x30e01cu;
    // NOP
    ctx->pc = 0x30e020u;
}
