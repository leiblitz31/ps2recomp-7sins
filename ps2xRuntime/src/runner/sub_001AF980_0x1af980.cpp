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

// Function: sub_001AF980
// Address: 0x1af980 - 0x1b14f0
void sub_001AF980_0x1af980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF980_0x1af980");
#endif

    switch (ctx->pc) {
        case 0x1afa80u: goto label_1afa80;
        case 0x1afabcu: goto label_1afabc;
        case 0x1afad8u: goto label_1afad8;
        case 0x1afb04u: goto label_1afb04;
        case 0x1afb2cu: goto label_1afb2c;
        case 0x1afb7cu: goto label_1afb7c;
        case 0x1afc54u: goto label_1afc54;
        case 0x1afc74u: goto label_1afc74;
        case 0x1afd90u: goto label_1afd90;
        case 0x1afe54u: goto label_1afe54;
        case 0x1afe84u: goto label_1afe84;
        case 0x1afeccu: goto label_1afecc;
        case 0x1afedcu: goto label_1afedc;
        case 0x1b0000u: goto label_1b0000;
        case 0x1b001cu: goto label_1b001c;
        case 0x1b01acu: goto label_1b01ac;
        case 0x1b03e8u: goto label_1b03e8;
        case 0x1b0414u: goto label_1b0414;
        case 0x1b06c4u: goto label_1b06c4;
        case 0x1b06e8u: goto label_1b06e8;
        case 0x1b0748u: goto label_1b0748;
        case 0x1b0774u: goto label_1b0774;
        case 0x1b0788u: goto label_1b0788;
        case 0x1b07a0u: goto label_1b07a0;
        case 0x1b07d4u: goto label_1b07d4;
        case 0x1b0804u: goto label_1b0804;
        case 0x1b0864u: goto label_1b0864;
        case 0x1b0904u: goto label_1b0904;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0984u: goto label_1b0984;
        case 0x1b09a4u: goto label_1b09a4;
        case 0x1b09c0u: goto label_1b09c0;
        case 0x1b09f0u: goto label_1b09f0;
        case 0x1b0a24u: goto label_1b0a24;
        case 0x1b0a48u: goto label_1b0a48;
        case 0x1b0a78u: goto label_1b0a78;
        case 0x1b0a98u: goto label_1b0a98;
        case 0x1b0ac4u: goto label_1b0ac4;
        case 0x1b0afcu: goto label_1b0afc;
        case 0x1b0b20u: goto label_1b0b20;
        case 0x1b0b50u: goto label_1b0b50;
        case 0x1b0b5cu: goto label_1b0b5c;
        case 0x1b0b74u: goto label_1b0b74;
        case 0x1b0b88u: goto label_1b0b88;
        case 0x1b0bc8u: goto label_1b0bc8;
        case 0x1b0be8u: goto label_1b0be8;
        case 0x1b0c44u: goto label_1b0c44;
        case 0x1b0c5cu: goto label_1b0c5c;
        case 0x1b0ca4u: goto label_1b0ca4;
        case 0x1b0cb8u: goto label_1b0cb8;
        case 0x1b0cd0u: goto label_1b0cd0;
        case 0x1b0d2cu: goto label_1b0d2c;
        case 0x1b0d38u: goto label_1b0d38;
        case 0x1b0d50u: goto label_1b0d50;
        case 0x1b0d90u: goto label_1b0d90;
        case 0x1b0da4u: goto label_1b0da4;
        case 0x1b0dbcu: goto label_1b0dbc;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e14u: goto label_1b0e14;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0eb4u: goto label_1b0eb4;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0ee4u: goto label_1b0ee4;
        case 0x1b0f00u: goto label_1b0f00;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0facu: goto label_1b0fac;
        case 0x1b0fc4u: goto label_1b0fc4;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1034u: goto label_1b1034;
        case 0x1b1050u: goto label_1b1050;
        case 0x1b109cu: goto label_1b109c;
        case 0x1b10c0u: goto label_1b10c0;
        case 0x1b10d8u: goto label_1b10d8;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b1130u: goto label_1b1130;
        case 0x1b1148u: goto label_1b1148;
        case 0x1b1164u: goto label_1b1164;
        case 0x1b1170u: goto label_1b1170;
        case 0x1b1190u: goto label_1b1190;
        case 0x1b120cu: goto label_1b120c;
        case 0x1b1248u: goto label_1b1248;
        case 0x1b1268u: goto label_1b1268;
        case 0x1b12acu: goto label_1b12ac;
        case 0x1b12c0u: goto label_1b12c0;
        case 0x1b12d8u: goto label_1b12d8;
        case 0x1b12f4u: goto label_1b12f4;
        case 0x1b133cu: goto label_1b133c;
        case 0x1b1394u: goto label_1b1394;
        case 0x1b13b4u: goto label_1b13b4;
        case 0x1b143cu: goto label_1b143c;
        case 0x1b1448u: goto label_1b1448;
        case 0x1b1464u: goto label_1b1464;
        case 0x1b1490u: goto label_1b1490;
        case 0x1b149cu: goto label_1b149c;
        case 0x1b14b4u: goto label_1b14b4;
        default: break;
    }

    ctx->pc = 0x1af980u;

    // 0x1af980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af984: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1af984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1af988: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1af988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af98c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af990: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1af990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1af994: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF99Cu;
    // 0x1af99c: 0x0  nop
    ctx->pc = 0x1af99cu;
    // NOP
    // 0x1af9a0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x1af9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x1af9a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1af9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1af9a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1af9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1af9ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1af9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1af9b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1af9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1af9b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1af9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1af9b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1af9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1af9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af9c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af9cc: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x1af9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
    // 0x1af9d0: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1af9d4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1af9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af9d8: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x1af9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x1af9dc: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1af9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1af9e0: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1af9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1af9e4: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1af9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1af9e8: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x1af9e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1af9ec: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1af9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af9f0: 0xc46004a0  lwc1        $f0, 0x4A0($v1)
    ctx->pc = 0x1af9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af9f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1af9f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1af9f8: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1af9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1af9fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1af9fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afa00: 0x0  nop
    ctx->pc = 0x1afa00u;
    // NOP
    // 0x1afa04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1afa04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1afa08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFA08u;
    {
        const bool branch_taken_0x1afa08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1afa08) {
            ctx->pc = 0x1AFA20u;
            goto label_1afa20;
        }
    }
    ctx->pc = 0x1AFA10u;
    // 0x1afa10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1afa10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1afa14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1afa14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1afa18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFA18u;
    {
        const bool branch_taken_0x1afa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa18) {
            ctx->pc = 0x1AFA34u;
            goto label_1afa34;
        }
    }
    ctx->pc = 0x1AFA20u;
label_1afa20:
    // 0x1afa20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1afa20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1afa24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1afa24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1afa28: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1afa28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1afa2c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1afa30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1afa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1afa34:
    // 0x1afa34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1afa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1afa38: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x1afa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x1afa3c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afa40: 0x8c4304a4  lw          $v1, 0x4A4($v0)
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1188)));
    // 0x1afa44: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x1afa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1afa48: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1afa48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1afa4c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AFA4Cu;
    {
        const bool branch_taken_0x1afa4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa4c) {
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFA54u;
    // 0x1afa54: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afa58: 0x904404a8  lbu         $a0, 0x4A8($v0)
    ctx->pc = 0x1afa58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1192)));
    // 0x1afa5c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AFA5Cu;
    {
        const bool branch_taken_0x1afa5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa5c) {
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFA64u;
    // 0x1afa64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afa68: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1afa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1afa6c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afa70: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1afa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1afa74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa78: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1AFA78u;
    SET_GPR_U32(ctx, 31, 0x1AFA80u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1AFA78u, 0x1AFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA80u;
label_1afa80:
    // 0x1afa80: 0x7ba30200  lq          $v1, 0x200($sp)
    ctx->pc = 0x1afa80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1afa84: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1afa84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1afa88: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1afa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afa8c: 0x8ca204a4  lw          $v0, 0x4A4($a1)
    ctx->pc = 0x1afa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1188)));
    // 0x1afa90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1afa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1afa94: 0xaca204a4  sw          $v0, 0x4A4($a1)
    ctx->pc = 0x1afa94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1188), GPR_U32(ctx, 2));
    // 0x1afa98: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1afa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1afa9c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1afa9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1afaa0: 0x8f87bbec  lw          $a3, -0x4414($gp)
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1afaa4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1afaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaa8: 0x278594c8  addiu       $a1, $gp, -0x6B38
    ctx->pc = 0x1afaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939848));
    // 0x1afaac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afab0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1afab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afab4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1AFAB4u;
    SET_GPR_U32(ctx, 31, 0x1AFABCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1AFAB4u, 0x1AFABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFABCu;
label_1afabc:
    // 0x1afabc: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1afabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1afac0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afac4: 0xa04004a8  sb          $zero, 0x4A8($v0)
    ctx->pc = 0x1afac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1192), (uint8_t)GPR_U32(ctx, 0));
label_1afac8:
    // 0x1afac8: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afacc: 0xc7ac0298  lwc1        $f12, 0x298($sp)
    ctx->pc = 0x1afaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1afad0: 0xc06d5c0  jal         func_1B5700
    ctx->pc = 0x1AFAD0u;
    SET_GPR_U32(ctx, 31, 0x1AFAD8u);
    ctx->pc = 0x1B5700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5700u, 0x1AFAD0u, 0x1AFAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAD8u;
label_1afad8:
    // 0x1afad8: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1afad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afadc: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x1afadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1afae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1afae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afae4: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1AFAE4u;
    {
        const bool branch_taken_0x1afae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afae4) {
            ctx->pc = 0x1AFC38u;
            goto label_1afc38;
        }
    }
    ctx->pc = 0x1AFAECu;
    // 0x1afaec: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1afaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afaf0: 0x24c70208  addiu       $a3, $a2, 0x208
    ctx->pc = 0x1afaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 520));
    // 0x1afaf4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1afaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1afaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afafc: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1AFAFCu;
    SET_GPR_U32(ctx, 31, 0x1AFB04u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1AFAFCu, 0x1AFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB04u;
label_1afb04:
    // 0x1afb04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1afb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afb08: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1afb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1afb0c: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1afb0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1afb10: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1AFB10u;
    {
        const bool branch_taken_0x1afb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb10) {
            ctx->pc = 0x1AFC38u;
            goto label_1afc38;
        }
    }
    ctx->pc = 0x1AFB18u;
    // 0x1afb18: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afb1c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1afb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1afb20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1afb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1afb24: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1AFB24u;
    SET_GPR_U32(ctx, 31, 0x1AFB2Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1AFB24u, 0x1AFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB2Cu;
label_1afb2c:
    // 0x1afb2c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1afb2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afb30: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1AFB30u;
    {
        const bool branch_taken_0x1afb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb30) {
            ctx->pc = 0x1AFC38u;
            goto label_1afc38;
        }
    }
    ctx->pc = 0x1AFB38u;
    // 0x1afb38: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afb3c: 0xc4430164  lwc1        $f3, 0x164($v0)
    ctx->pc = 0x1afb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afb40: 0xc7a20298  lwc1        $f2, 0x298($sp)
    ctx->pc = 0x1afb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afb44: 0x8fb002a0  lw          $s0, 0x2A0($sp)
    ctx->pc = 0x1afb44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afb48: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1afb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afb4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1afb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afb50: 0x0  nop
    ctx->pc = 0x1afb50u;
    // NOP
    // 0x1afb54: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1afb54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1afb58: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1afb58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1afb5c: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1afb5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1afb60: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afb64: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x1afb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb68: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1afb68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1afb6c: 0xc7a00298  lwc1        $f0, 0x298($sp)
    ctx->pc = 0x1afb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb70: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1afb70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1afb74: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x1AFB74u;
    SET_GPR_U32(ctx, 31, 0x1AFB7Cu);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x1AFB74u, 0x1AFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB7Cu;
label_1afb7c:
    // 0x1afb7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1afb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1afb80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1afb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1afb84: 0x0  nop
    ctx->pc = 0x1afb84u;
    // NOP
    // 0x1afb88: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1afb88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1afb8c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afb90: 0xc4420164  lwc1        $f2, 0x164($v0)
    ctx->pc = 0x1afb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afb94: 0x8fb202a0  lw          $s2, 0x2A0($sp)
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afb98: 0xc6410164  lwc1        $f1, 0x164($s2)
    ctx->pc = 0x1afb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afb9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1afb9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afba0: 0x0  nop
    ctx->pc = 0x1afba0u;
    // NOP
    // 0x1afba4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1afba4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1afba8: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x1afba8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1afbac: 0xe6410164  swc1        $f1, 0x164($s2)
    ctx->pc = 0x1afbacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 356), bits); }
    // 0x1afbb0: 0x8fb602a0  lw          $s6, 0x2A0($sp)
    ctx->pc = 0x1afbb0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afbb4: 0xc6c10154  lwc1        $f1, 0x154($s6)
    ctx->pc = 0x1afbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afbb8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afbbc: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1afbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1afbc0: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x1afbc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1afbc4: 0xc440015c  lwc1        $f0, 0x15C($v0)
    ctx->pc = 0x1afbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afbc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1afbc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1afbcc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1AFBCCu;
    {
        const bool branch_taken_0x1afbcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1afbcc) {
            ctx->pc = 0x1AFC00u;
            goto label_1afc00;
        }
    }
    ctx->pc = 0x1AFBD4u;
    // 0x1afbd4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afbd8: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1afbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1afbdc: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x1afbdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1afbe0: 0xc441015c  lwc1        $f1, 0x15C($v0)
    ctx->pc = 0x1afbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afbe4: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afbe8: 0xe4810154  swc1        $f1, 0x154($a0)
    ctx->pc = 0x1afbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x1afbec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1afbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afbf0: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afbf4: 0xe4a00164  swc1        $f0, 0x164($a1)
    ctx->pc = 0x1afbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 356), bits); }
    // 0x1afbf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AFBF8u;
    {
        const bool branch_taken_0x1afbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afbf8) {
            ctx->pc = 0x1AFC38u;
            goto label_1afc38;
        }
    }
    ctx->pc = 0x1AFC00u;
label_1afc00:
    // 0x1afc00: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc04: 0xc4400154  lwc1        $f0, 0x154($v0)
    ctx->pc = 0x1afc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afc08: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc0c: 0xc4410158  lwc1        $f1, 0x158($v0)
    ctx->pc = 0x1afc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afc10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1afc10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1afc14: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AFC14u;
    {
        const bool branch_taken_0x1afc14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1afc14) {
            ctx->pc = 0x1AFC38u;
            goto label_1afc38;
        }
    }
    ctx->pc = 0x1AFC1Cu;
    // 0x1afc1c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1afc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc20: 0xc4a00158  lwc1        $f0, 0x158($a1)
    ctx->pc = 0x1afc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afc24: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc28: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x1afc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x1afc2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1afc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afc30: 0x8fb102a0  lw          $s1, 0x2A0($sp)
    ctx->pc = 0x1afc30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc34: 0xe6200164  swc1        $f0, 0x164($s1)
    ctx->pc = 0x1afc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
label_1afc38:
    // 0x1afc38: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc3c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1afc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1afc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1afc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afc44: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1afc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1afc48: 0x7ba501b0  lq          $a1, 0x1B0($sp)
    ctx->pc = 0x1afc48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1afc4c: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1AFC4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC54u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1AFC4Cu, 0x1AFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC54u;
label_1afc54:
    // 0x1afc54: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1afc54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afc58: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AFC58u;
    {
        const bool branch_taken_0x1afc58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afc58) {
            ctx->pc = 0x1AFD08u;
            goto label_1afd08;
        }
    }
    ctx->pc = 0x1AFC60u;
    // 0x1afc60: 0x8fb502a0  lw          $s5, 0x2A0($sp)
    ctx->pc = 0x1afc60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc64: 0x26a40208  addiu       $a0, $s5, 0x208
    ctx->pc = 0x1afc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 520));
    // 0x1afc68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1afc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1afc6c: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1AFC6Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC74u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1AFC6Cu, 0x1AFC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC74u;
label_1afc74:
    // 0x1afc74: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1afc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afc78: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AFC78u;
    {
        const bool branch_taken_0x1afc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afc78) {
            ctx->pc = 0x1AFD08u;
            goto label_1afd08;
        }
    }
    ctx->pc = 0x1AFC80u;
    // 0x1afc80: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc84: 0xc4830154  lwc1        $f3, 0x154($a0)
    ctx->pc = 0x1afc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afc88: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc8c: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x1afc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afc90: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x1afc90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1afc94: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afc98: 0xc461015c  lwc1        $f1, 0x15C($v1)
    ctx->pc = 0x1afc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afc9c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afca0: 0xc4800158  lwc1        $f0, 0x158($a0)
    ctx->pc = 0x1afca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afca4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1afca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1afca8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1afca8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1afcac: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x1afcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x1afcb0: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afcb4: 0xc4630144  lwc1        $f3, 0x144($v1)
    ctx->pc = 0x1afcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afcb8: 0xc7a20290  lwc1        $f2, 0x290($sp)
    ctx->pc = 0x1afcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afcbc: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afcc0: 0xc461013c  lwc1        $f1, 0x13C($v1)
    ctx->pc = 0x1afcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afcc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1afcc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afcc8: 0x0  nop
    ctx->pc = 0x1afcc8u;
    // NOP
    // 0x1afccc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1afcccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1afcd0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1afcd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1afcd4: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afcd8: 0xe4800134  swc1        $f0, 0x134($a0)
    ctx->pc = 0x1afcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 308), bits); }
    // 0x1afcdc: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afce0: 0xc4420148  lwc1        $f2, 0x148($v0)
    ctx->pc = 0x1afce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afce4: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x1afce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afce8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afcec: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x1afcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afcf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1afcf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1afcf4: 0x0  nop
    ctx->pc = 0x1afcf4u;
    // NOP
    // 0x1afcf8: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x1afcf8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[12], ctx->f[0]));
    // 0x1afcfc: 0x46020b1c  madd.s      $f12, $f1, $f2
    ctx->pc = 0x1afcfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x1afd00: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd04: 0xe44c0138  swc1        $f12, 0x138($v0)
    ctx->pc = 0x1afd04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 312), bits); }
label_1afd08:
    // 0x1afd08: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd0c: 0xc48c0154  lwc1        $f12, 0x154($a0)
    ctx->pc = 0x1afd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1afd10: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd14: 0xc4400158  lwc1        $f0, 0x158($v0)
    ctx->pc = 0x1afd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd18: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1afd18u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1afd1c: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd20: 0xc461015c  lwc1        $f1, 0x15C($v1)
    ctx->pc = 0x1afd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd24: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd28: 0xc4800158  lwc1        $f0, 0x158($a0)
    ctx->pc = 0x1afd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1afd2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1afd30: 0x46016003  div.s       $f0, $f12, $f1
    ctx->pc = 0x1afd30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x1afd34: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x1afd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
    // 0x1afd38: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd3c: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x1afd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd40: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd44: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x1afd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd48: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1afd48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1afd4c: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x1afd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd50: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd54: 0xc461016c  lwc1        $f1, 0x16C($v1)
    ctx->pc = 0x1afd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd58: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1afd58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1afd5c: 0x0  nop
    ctx->pc = 0x1afd5cu;
    // NOP
    // 0x1afd60: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x1afd60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x1afd64: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x1afd64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x1afd68: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afd6c: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x1afd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
    // 0x1afd70: 0xc78280b4  lwc1        $f2, -0x7F4C($gp)
    ctx->pc = 0x1afd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afd74: 0xe7a20288  swc1        $f2, 0x288($sp)
    ctx->pc = 0x1afd74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x1afd78: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x1afd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x1afd7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1afd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1afd80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AFD80u;
    {
        const bool branch_taken_0x1afd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd80) {
            ctx->pc = 0x1AFDACu;
            goto label_1afdac;
        }
    }
    ctx->pc = 0x1AFD88u;
    // 0x1afd88: 0x401821  addu        $v1, $v0, $zero
    ctx->pc = 0x1afd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1afd8c: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x1afd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
label_1afd90:
    // 0x1afd90: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1afd90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1afd94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1afd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1afd98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1afd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1afd9c: 0x0  nop
    ctx->pc = 0x1afd9cu;
    // NOP
    // 0x1afda0: 0x0  nop
    ctx->pc = 0x1afda0u;
    // NOP
    // 0x1afda4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd90;
        }
    }
    ctx->pc = 0x1AFDACu;
label_1afdac:
    // 0x1afdac: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x1afdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afdb0: 0xe7a10248  swc1        $f1, 0x248($sp)
    ctx->pc = 0x1afdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x1afdb4: 0xc7ac0288  lwc1        $f12, 0x288($sp)
    ctx->pc = 0x1afdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1afdb8: 0xe7ac024c  swc1        $f12, 0x24C($sp)
    ctx->pc = 0x1afdb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x1afdbc: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x1afdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afdc0: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x1afdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x1afdc4: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x1afdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x1afdc8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afdcc: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x1afdccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1afdd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1afdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afdd4: 0x14a40240  bne         $a1, $a0, . + 4 + (0x240 << 2)
    ctx->pc = 0x1AFDD4u;
    {
        const bool branch_taken_0x1afdd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1afdd4) {
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1AFDDCu;
    // 0x1afddc: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1afddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afde0: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1afde4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFDE4u;
    {
        const bool branch_taken_0x1afde4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1afde4) {
            ctx->pc = 0x1AFE00u;
            goto label_1afe00;
        }
    }
    ctx->pc = 0x1AFDECu;
    // 0x1afdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afdf0: 0x0  nop
    ctx->pc = 0x1afdf0u;
    // NOP
    // 0x1afdf4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1afdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1afdf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AFDF8u;
    {
        const bool branch_taken_0x1afdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afdf8) {
            ctx->pc = 0x1AFE24u;
            goto label_1afe24;
        }
    }
    ctx->pc = 0x1AFE00u;
label_1afe00:
    // 0x1afe00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1afe04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1afe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1afe08: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1afe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1afe0c: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1afe0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1afe10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1afe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1afe14: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1afe14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1afe18: 0x0  nop
    ctx->pc = 0x1afe18u;
    // NOP
    // 0x1afe1c: 0x46806860  cvt.s.w     $f1, $f13
    ctx->pc = 0x1afe1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1afe20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1afe20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1afe24:
    // 0x1afe24: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1afe24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1afe28: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1afe28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1afe2c: 0x0  nop
    ctx->pc = 0x1afe2cu;
    // NOP
    // 0x1afe30: 0x46030883  div.s       $f2, $f1, $f3
    ctx->pc = 0x1afe30u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1afe34: 0xe7a20284  swc1        $f2, 0x284($sp)
    ctx->pc = 0x1afe34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x1afe38: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1afe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afe3c: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1afe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afe40: 0x248201ec  addiu       $v0, $a0, 0x1EC
    ctx->pc = 0x1afe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    // 0x1afe44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1afe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe48: 0x8cc500bc  lw          $a1, 0xBC($a2)
    ctx->pc = 0x1afe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x1afe4c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1AFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE54u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1AFE4Cu, 0x1AFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE54u;
label_1afe54:
    // 0x1afe54: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1afe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afe58: 0xe7a10280  swc1        $f1, 0x280($sp)
    ctx->pc = 0x1afe58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x1afe5c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1afe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afe60: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1afe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1afe64: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afe68: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1afe68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1afe6c: 0x244501e0  addiu       $a1, $v0, 0x1E0
    ctx->pc = 0x1afe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1afe70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1afe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe74: 0x8c6600bc  lw          $a2, 0xBC($v1)
    ctx->pc = 0x1afe74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1afe78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1afe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe7c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1AFE7Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE84u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1AFE7Cu, 0x1AFE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE84u;
label_1afe84:
    // 0x1afe84: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1afe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1afe88: 0xe7ac027c  swc1        $f12, 0x27C($sp)
    ctx->pc = 0x1afe88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x1afe8c: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1afe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afe90: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1afe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afe94: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1afe94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afe98: 0xc4a300e4  lwc1        $f3, 0xE4($a1)
    ctx->pc = 0x1afe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afe9c: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1afe9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1afea0: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x1afea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afea4: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afea8: 0xc4cd00e4  lwc1        $f13, 0xE4($a2)
    ctx->pc = 0x1afea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1afeac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1afeacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afeb0: 0x0  nop
    ctx->pc = 0x1afeb0u;
    // NOP
    // 0x1afeb4: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x1afeb4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[13]));
    // 0x1afeb8: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x1afeb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x1afebc: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x1afebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x1afec0: 0xc7ac0280  lwc1        $f12, 0x280($sp)
    ctx->pc = 0x1afec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1afec4: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1AFEC4u;
    SET_GPR_U32(ctx, 31, 0x1AFECCu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1AFEC4u, 0x1AFECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFECCu;
label_1afecc:
    // 0x1afecc: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x1afeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x1afed0: 0xc7ac0280  lwc1        $f12, 0x280($sp)
    ctx->pc = 0x1afed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1afed4: 0xc0c39a0  jal         func_30E680
    ctx->pc = 0x1AFED4u;
    SET_GPR_U32(ctx, 31, 0x1AFEDCu);
    ctx->pc = 0x30E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E680u, 0x1AFED4u, 0x1AFEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEDCu;
label_1afedc:
    // 0x1afedc: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x1afedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1afee0: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1afee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afee4: 0xc4e2049c  lwc1        $f2, 0x49C($a3)
    ctx->pc = 0x1afee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afee8: 0xc7ac0298  lwc1        $f12, 0x298($sp)
    ctx->pc = 0x1afee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1afeec: 0x8fa802a0  lw          $t0, 0x2A0($sp)
    ctx->pc = 0x1afeecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1afef0: 0xc50100b8  lwc1        $f1, 0xB8($t0)
    ctx->pc = 0x1afef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1afef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afef8: 0x0  nop
    ctx->pc = 0x1afef8u;
    // NOP
    // 0x1afefc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1afefcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1aff00: 0x4602635c  madd.s      $f13, $f12, $f2
    ctx->pc = 0x1aff00u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[2]));
    // 0x1aff04: 0xe50d00b8  swc1        $f13, 0xB8($t0)
    ctx->pc = 0x1aff04u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 184), bits); }
    // 0x1aff08: 0xc7a30278  lwc1        $f3, 0x278($sp)
    ctx->pc = 0x1aff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aff0c: 0xc7a20298  lwc1        $f2, 0x298($sp)
    ctx->pc = 0x1aff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aff10: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1aff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1aff14: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x1aff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aff18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aff18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aff1c: 0x0  nop
    ctx->pc = 0x1aff1cu;
    // NOP
    // 0x1aff20: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1aff20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1aff24: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1aff24u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1aff28: 0xe44c00e0  swc1        $f12, 0xE0($v0)
    ctx->pc = 0x1aff28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1aff2c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1aff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1aff30: 0xc4a300e0  lwc1        $f3, 0xE0($a1)
    ctx->pc = 0x1aff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aff34: 0xe7a30288  swc1        $f3, 0x288($sp)
    ctx->pc = 0x1aff34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x1aff38: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1aff38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1aff3c: 0xc7a2027c  lwc1        $f2, 0x27C($sp)
    ctx->pc = 0x1aff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aff40: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x1aff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aff44: 0x46011342  mul.s       $f13, $f2, $f1
    ctx->pc = 0x1aff44u;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1aff48: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x1aff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aff4c: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x1aff4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1aff50: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1aff54: 0xe4a100c0  swc1        $f1, 0xC0($a1)
    ctx->pc = 0x1aff54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 192), bits); }
    // 0x1aff58: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x1aff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aff5c: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x1aff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aff60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1aff60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aff64: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x1aff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aff68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aff68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aff6c: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x1aff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aff70: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1aff70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1aff74: 0xc78d8380  lwc1        $f13, -0x7C80($gp)
    ctx->pc = 0x1aff74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1aff78: 0x460c6843  div.s       $f1, $f13, $f12
    ctx->pc = 0x1aff78u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[13], ctx->f[12]); }
    // 0x1aff7c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1aff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1aff80: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x1aff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aff84: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1aff84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aff88: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1aff88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1aff8c: 0xc4c200c0  lwc1        $f2, 0xC0($a2)
    ctx->pc = 0x1aff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aff90: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1aff90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1aff94: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x1aff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aff98: 0xc4c000c0  lwc1        $f0, 0xC0($a2)
    ctx->pc = 0x1aff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aff9c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1aff9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1affa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1affa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1affa4: 0x0  nop
    ctx->pc = 0x1affa4u;
    // NOP
    // 0x1affa8: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x1affa8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x1affac: 0x4604109c  madd.s      $f2, $f2, $f4
    ctx->pc = 0x1affacu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1affb0: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1affb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1affb4: 0xe4e200c4  swc1        $f2, 0xC4($a3)
    ctx->pc = 0x1affb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 196), bits); }
    // 0x1affb8: 0xc7ac027c  lwc1        $f12, 0x27C($sp)
    ctx->pc = 0x1affb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1affbc: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1affbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1affc0: 0x46006142  mul.s       $f5, $f12, $f0
    ctx->pc = 0x1affc0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1affc4: 0xc7a4027c  lwc1        $f4, 0x27C($sp)
    ctx->pc = 0x1affc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1affc8: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x1affc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1affcc: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1affccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1affd0: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x1affd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1affd4: 0xc7808384  lwc1        $f0, -0x7C7C($gp)
    ctx->pc = 0x1affd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1affd8: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x1affd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1affdc: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1affdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1affe0: 0xc44d00c0  lwc1        $f13, 0xC0($v0)
    ctx->pc = 0x1affe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1affe4: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x1affe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1affe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1affe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1affec: 0x0  nop
    ctx->pc = 0x1affecu;
    // NOP
    // 0x1afff0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1afff0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1afff4: 0x46026b1c  madd.s      $f12, $f13, $f2
    ctx->pc = 0x1afff4u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[2]));
    // 0x1afff8: 0xc0c3816  jal         func_30E058
    ctx->pc = 0x1AFFF8u;
    SET_GPR_U32(ctx, 31, 0x1B0000u);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x1AFFF8u, 0x1B0000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0000u;
label_1b0000:
    // 0x1b0000: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x1b0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0004: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b0004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b0008: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x1b0008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x1b000c: 0xc7ac0288  lwc1        $f12, 0x288($sp)
    ctx->pc = 0x1b000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0010: 0xc78d8300  lwc1        $f13, -0x7D00($gp)
    ctx->pc = 0x1b0010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b0014: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1B0014u;
    SET_GPR_U32(ctx, 31, 0x1B001Cu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1B0014u, 0x1B001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B001Cu;
label_1b001c:
    // 0x1b001c: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x1b001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x1b0020: 0x8f97bb80  lw          $s7, -0x4480($gp)
    ctx->pc = 0x1b0020u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b0024: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x1b0024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1b0028: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0028u;
    {
        const bool branch_taken_0x1b0028 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1b0028) {
            ctx->pc = 0x1B0044u;
            goto label_1b0044;
        }
    }
    ctx->pc = 0x1B0030u;
    // 0x1b0030: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b0030u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0034: 0x0  nop
    ctx->pc = 0x1b0034u;
    // NOP
    // 0x1b0038: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b0038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b003c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B003Cu;
    {
        const bool branch_taken_0x1b003c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b003c) {
            ctx->pc = 0x1B0068u;
            goto label_1b0068;
        }
    }
    ctx->pc = 0x1B0044u;
label_1b0044:
    // 0x1b0044: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x1b0044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b0048: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1b0048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b004c: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x1b004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
    // 0x1b0050: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x1b0050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b0054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b0058: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b005c: 0x0  nop
    ctx->pc = 0x1b005cu;
    // NOP
    // 0x1b0060: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x1b0060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b0064: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b0064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b0068:
    // 0x1b0068: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1b0068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1b006c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b006cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0070: 0x0  nop
    ctx->pc = 0x1b0070u;
    // NOP
    // 0x1b0074: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b0074u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b0078: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b007c: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x1b007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b0080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0084: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0088: 0xe4a000c0  swc1        $f0, 0xC0($a1)
    ctx->pc = 0x1b0088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 192), bits); }
    // 0x1b008c: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b0090: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x1b0090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b0094: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0094u;
    {
        const bool branch_taken_0x1b0094 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1b0094) {
            ctx->pc = 0x1B00B0u;
            goto label_1b00b0;
        }
    }
    ctx->pc = 0x1B009Cu;
    // 0x1b009c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b009cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b00a0: 0x0  nop
    ctx->pc = 0x1b00a0u;
    // NOP
    // 0x1b00a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b00a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b00a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B00A8u;
    {
        const bool branch_taken_0x1b00a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b00a8) {
            ctx->pc = 0x1B00CCu;
            goto label_1b00cc;
        }
    }
    ctx->pc = 0x1B00B0u;
label_1b00b0:
    // 0x1b00b0: 0x63842  srl         $a3, $a2, 1
    ctx->pc = 0x1b00b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1b00b4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1b00b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1b00b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1b00b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1b00bc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1b00bcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b00c0: 0x0  nop
    ctx->pc = 0x1b00c0u;
    // NOP
    // 0x1b00c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b00c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b00c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b00c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b00cc:
    // 0x1b00cc: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1b00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x1b00d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b00d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b00d4: 0x0  nop
    ctx->pc = 0x1b00d4u;
    // NOP
    // 0x1b00d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b00d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b00dc: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b00dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b00e0: 0xc48000c4  lwc1        $f0, 0xC4($a0)
    ctx->pc = 0x1b00e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b00e4: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1b00e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b00e8: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b00ec: 0xe4a300c4  swc1        $f3, 0xC4($a1)
    ctx->pc = 0x1b00ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 196), bits); }
    // 0x1b00f0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b00f4: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1b00f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1b00f8: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1b00f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b00fc: 0xc44200c0  lwc1        $f2, 0xC0($v0)
    ctx->pc = 0x1b00fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0100: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0104: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1b0104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0108: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x1b0108u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b010c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0110: 0xe48c00c0  swc1        $f12, 0xC0($a0)
    ctx->pc = 0x1b0110u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x1b0114: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b0114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0118: 0xc4a000c4  lwc1        $f0, 0xC4($a1)
    ctx->pc = 0x1b0118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b011c: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1b011cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0120: 0xc4e300cc  lwc1        $f3, 0xCC($a3)
    ctx->pc = 0x1b0120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0124: 0x46030040  add.s       $f1, $f0, $f3
    ctx->pc = 0x1b0124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b0128: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b012c: 0xe44100c4  swc1        $f1, 0xC4($v0)
    ctx->pc = 0x1b012cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x1b0130: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1b0130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0134: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0138: 0xc4c000b8  lwc1        $f0, 0xB8($a2)
    ctx->pc = 0x1b0138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b013c: 0xc442049c  lwc1        $f2, 0x49C($v0)
    ctx->pc = 0x1b013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0140: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1b0140u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b0144: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b0144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0148: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1b0148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b014c: 0x0  nop
    ctx->pc = 0x1b014cu;
    // NOP
    // 0x1b0150: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1b0150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1b0154: 0xc78281b8  lwc1        $f2, -0x7E48($gp)
    ctx->pc = 0x1b0154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0158: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1b0158u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b015c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0160: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1b0160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1b0164: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1b0164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b0168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b0168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b016c: 0x0  nop
    ctx->pc = 0x1b016cu;
    // NOP
    // 0x1b0170: 0x46016800  add.s       $f0, $f13, $f1
    ctx->pc = 0x1b0170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x1b0174: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0178: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x1b0178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x1b017c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0180: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1b0180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1b0184: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b0184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0188: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1b0188u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b018c: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1b018cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b0190: 0xc44d00dc  lwc1        $f13, 0xDC($v0)
    ctx->pc = 0x1b0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b0194: 0x460d6003  div.s       $f0, $f12, $f13
    ctx->pc = 0x1b0194u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x1b0198: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b019c: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x1b019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x1b01a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b01a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01a4: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x1B01A4u;
    {
        const bool branch_taken_0x1b01a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b01a4) {
            ctx->pc = 0x1B0660u;
            goto label_1b0660;
        }
    }
    ctx->pc = 0x1B01ACu;
label_1b01ac:
    // 0x1b01ac: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1b01acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b01b0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B01B0u;
    {
        const bool branch_taken_0x1b01b0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1b01b0) {
            ctx->pc = 0x1B01CCu;
            goto label_1b01cc;
        }
    }
    ctx->pc = 0x1B01B8u;
    // 0x1b01b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b01b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b01bc: 0x0  nop
    ctx->pc = 0x1b01bcu;
    // NOP
    // 0x1b01c0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1b01c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b01c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B01C4u;
    {
        const bool branch_taken_0x1b01c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b01c4) {
            ctx->pc = 0x1B01E8u;
            goto label_1b01e8;
        }
    }
    ctx->pc = 0x1B01CCu;
label_1b01cc:
    // 0x1b01cc: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x1b01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1b01d0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1b01d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b01d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b01d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b01d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b01dc: 0x0  nop
    ctx->pc = 0x1b01dcu;
    // NOP
    // 0x1b01e0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1b01e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b01e4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1b01e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1b01e8:
    // 0x1b01e8: 0xc78294c0  lwc1        $f2, -0x6B40($gp)
    ctx->pc = 0x1b01e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b01ec: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b01ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b01f0: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x1b01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b01f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b01f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b01f8: 0x0  nop
    ctx->pc = 0x1b01f8u;
    // NOP
    // 0x1b01fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b01fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b0200: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1b0200u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b0204: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x1b0204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
    // 0x1b0208: 0xc7a1026c  lwc1        $f1, 0x26C($sp)
    ctx->pc = 0x1b0208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b020c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b020cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0210: 0x0  nop
    ctx->pc = 0x1b0210u;
    // NOP
    // 0x1b0214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b0214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0218: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0218u;
    {
        const bool branch_taken_0x1b0218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0218) {
            ctx->pc = 0x1B022Cu;
            goto label_1b022c;
        }
    }
    ctx->pc = 0x1B0220u;
    // 0x1b0220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0224: 0x0  nop
    ctx->pc = 0x1b0224u;
    // NOP
    // 0x1b0228: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x1b0228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_1b022c:
    // 0x1b022c: 0xc7a30278  lwc1        $f3, 0x278($sp)
    ctx->pc = 0x1b022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0230: 0xc7a20298  lwc1        $f2, 0x298($sp)
    ctx->pc = 0x1b0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0234: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0238: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x1b0238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b023c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b0240: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0244: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1b0244u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0248: 0xc7c10108  lwc1        $f1, 0x108($fp)
    ctx->pc = 0x1b0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b024c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b024cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0250: 0x0  nop
    ctx->pc = 0x1b0250u;
    // NOP
    // 0x1b0254: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b0254u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b0258: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1b0258u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b025c: 0xe7c00108  swc1        $f0, 0x108($fp)
    ctx->pc = 0x1b025cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 264), bits); }
    // 0x1b0260: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0264: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1b0264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1b0268: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1b0268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b026c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b0270: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1b0270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1b0274: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1b0274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b0278: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b0278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b027c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b027cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0280: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1b0280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b0284: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x1b0284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0288: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b028c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1b028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1b0290: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1b0290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b0294: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b0298: 0xe4400248  swc1        $f0, 0x248($v0)
    ctx->pc = 0x1b0298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 584), bits); }
    // 0x1b029c: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x1b029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b02a0: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1b02a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b02a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b02a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b02a8: 0xc7a0026c  lwc1        $f0, 0x26C($sp)
    ctx->pc = 0x1b02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b02ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b02acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b02b0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b02b4: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1b02b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b02b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b02bc: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b02c0: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1b02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b02c4: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x1b02c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x1b02c8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1b02c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b02cc: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1b02ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1b02d0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1b02d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1b02d4: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x1b02d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b02d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b02dc: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b02e0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1b02e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b02e4: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x1b02e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b02e8: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1b02e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b02ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b02ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b02f0: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x1b02f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b02f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b02f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b02f8: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1b02f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b02fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b02fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0300: 0xc7808380  lwc1        $f0, -0x7C80($gp)
    ctx->pc = 0x1b0300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0304: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b0304u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b0308: 0xc4a000f8  lwc1        $f0, 0xF8($a1)
    ctx->pc = 0x1b0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b030c: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1b030cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0310: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b0310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0314: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1b0314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b0318: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b0318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b031c: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0320: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b0320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0324: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1b0324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1b0328: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1b0328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b032c: 0xc44200f8  lwc1        $f2, 0xF8($v0)
    ctx->pc = 0x1b032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0330: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0334: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1b0334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b0338: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1b0338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b033c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0340: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b0344: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x1b0344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0348: 0xc46000f8  lwc1        $f0, 0xF8($v1)
    ctx->pc = 0x1b0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b034c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b034cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0354: 0x0  nop
    ctx->pc = 0x1b0354u;
    // NOP
    // 0x1b0358: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b0358u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b035c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b035cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b0360: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0364: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1b0364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1b0368: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1b0368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b036c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b0370: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b0370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0374: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0378: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1b0378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1b037c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1b037cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b0380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b0380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b0384: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x1b0384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x1b0388: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b038c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1b038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1b0390: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1b0390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0394: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1b0394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b0398: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1b0398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b039c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b03a0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1b03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b03a4: 0xc44300f8  lwc1        $f3, 0xF8($v0)
    ctx->pc = 0x1b03a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b03a8: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x1b03a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b03ac: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1b03acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b03b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b03b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b03b4: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x1b03b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b03b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b03b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b03bc: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1b03bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b03c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b03c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b03c4: 0xc7808384  lwc1        $f0, -0x7C7C($gp)
    ctx->pc = 0x1b03c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b03c8: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x1b03c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b03cc: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x1b03ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b03d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b03d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b03d4: 0x0  nop
    ctx->pc = 0x1b03d4u;
    // NOP
    // 0x1b03d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b03d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b03dc: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1b03dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b03e0: 0xc0c3816  jal         func_30E058
    ctx->pc = 0x1B03E0u;
    SET_GPR_U32(ctx, 31, 0x1B03E8u);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x1B03E0u, 0x1B03E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03E8u;
label_1b03e8:
    // 0x1b03e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b03ec: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1b03ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b03f0: 0xc4810248  lwc1        $f1, 0x248($a0)
    ctx->pc = 0x1b03f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b03f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b03f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b03f8: 0xe4800248  swc1        $f0, 0x248($a0)
    ctx->pc = 0x1b03f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 584), bits); }
    // 0x1b03fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0400: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x1b0400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b0404: 0xc4ec0248  lwc1        $f12, 0x248($a3)
    ctx->pc = 0x1b0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0408: 0xc78d8300  lwc1        $f13, -0x7D00($gp)
    ctx->pc = 0x1b0408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b040c: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1B040Cu;
    SET_GPR_U32(ctx, 31, 0x1B0414u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1B040Cu, 0x1B0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0414u;
label_1b0414:
    // 0x1b0414: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0418: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1b0418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b041c: 0xe4800248  swc1        $f0, 0x248($a0)
    ctx->pc = 0x1b041cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 584), bits); }
    // 0x1b0420: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0424: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1b0424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1b0428: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1b0428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b042c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b0430: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b0430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0434: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0438: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1b0438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b043c: 0x8f86bb80  lw          $a2, -0x4480($gp)
    ctx->pc = 0x1b043cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b0440: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b0440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b0444: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0444u;
    {
        const bool branch_taken_0x1b0444 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b0444) {
            ctx->pc = 0x1B0460u;
            goto label_1b0460;
        }
    }
    ctx->pc = 0x1B044Cu;
    // 0x1b044c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b044cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0450: 0x0  nop
    ctx->pc = 0x1b0450u;
    // NOP
    // 0x1b0454: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1b0454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b0458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0458u;
    {
        const bool branch_taken_0x1b0458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0458) {
            ctx->pc = 0x1B047Cu;
            goto label_1b047c;
        }
    }
    ctx->pc = 0x1B0460u;
label_1b0460:
    // 0x1b0460: 0x23842  srl         $a3, $v0, 1
    ctx->pc = 0x1b0460u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b0464: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b0464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b0468: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1b0468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1b046c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1b046cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0470: 0x0  nop
    ctx->pc = 0x1b0470u;
    // NOP
    // 0x1b0474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b0478: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b0478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b047c:
    // 0x1b047c: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x1b047cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x1b0480: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b0480u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0484: 0x0  nop
    ctx->pc = 0x1b0484u;
    // NOP
    // 0x1b0488: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b0488u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b048c: 0xc4a100f8  lwc1        $f1, 0xF8($a1)
    ctx->pc = 0x1b048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0490: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1b0490u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0494: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b0494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0498: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1b0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b049c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b049cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b04a0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b04a4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1b04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b04a8: 0xe48c00f8  swc1        $f12, 0xF8($a0)
    ctx->pc = 0x1b04a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x1b04ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b04acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b04b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b04b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b04b8: 0x8fb402a0  lw          $s4, 0x2A0($sp)
    ctx->pc = 0x1b04b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b04bc: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1b04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b04c0: 0x8f93bb80  lw          $s3, -0x4480($gp)
    ctx->pc = 0x1b04c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b04c4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1b04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1b04c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B04C8u;
    {
        const bool branch_taken_0x1b04c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b04c8) {
            ctx->pc = 0x1B04E4u;
            goto label_1b04e4;
        }
    }
    ctx->pc = 0x1B04D0u;
    // 0x1b04d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b04d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b04d4: 0x0  nop
    ctx->pc = 0x1b04d4u;
    // NOP
    // 0x1b04d8: 0x46801b20  cvt.s.w     $f12, $f3
    ctx->pc = 0x1b04d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b04dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B04DCu;
    {
        const bool branch_taken_0x1b04dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b04dc) {
            ctx->pc = 0x1B0508u;
            goto label_1b0508;
        }
    }
    ctx->pc = 0x1B04E4u;
label_1b04e4:
    // 0x1b04e4: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1b04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b04e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b04e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b04ec: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1b04ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1b04f0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1b04f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b04f4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1b04f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b04f8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b04f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b04fc: 0x0  nop
    ctx->pc = 0x1b04fcu;
    // NOP
    // 0x1b0500: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x1b0500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b0504: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1b0504u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1b0508:
    // 0x1b0508: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1b0508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1b050c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b050cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0510: 0x0  nop
    ctx->pc = 0x1b0510u;
    // NOP
    // 0x1b0514: 0x46016043  div.s       $f1, $f12, $f1
    ctx->pc = 0x1b0514u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x1b0518: 0xc46000fc  lwc1        $f0, 0xFC($v1)
    ctx->pc = 0x1b0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b051c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b051cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0520: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b0520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0524: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1b0524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b0528: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1b0528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b052c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b0530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b0534: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x1b0534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x1b0538: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b0538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b053c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1b053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b0540: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1b0540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1b0544: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x1b0544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b0548: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b0548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b054c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0550: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1b0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0554: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1b0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0558: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b0558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b055c: 0xc4a000c8  lwc1        $f0, 0xC8($a1)
    ctx->pc = 0x1b055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0560: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b0560u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b0564: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b0564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0568: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b0568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b056c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b056cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0570: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0578: 0xe44c00f8  swc1        $f12, 0xF8($v0)
    ctx->pc = 0x1b0578u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1b057c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b057cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0580: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1b0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b0584: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1b0584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1b0588: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1b0588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b058c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b058cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0590: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0594: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b0594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b0598: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x1b0598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b059c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b059cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b05a0: 0xc4a100cc  lwc1        $f1, 0xCC($a1)
    ctx->pc = 0x1b05a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b05a4: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x1b05a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b05a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b05ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b05b0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1b05b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b05b4: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1b05b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b05b8: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b05bc: 0xe4a300fc  swc1        $f3, 0xFC($a1)
    ctx->pc = 0x1b05bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 252), bits); }
    // 0x1b05c0: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1b05c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b05c4: 0xc7a2026c  lwc1        $f2, 0x26C($sp)
    ctx->pc = 0x1b05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b05c8: 0xc4e1049c  lwc1        $f1, 0x49C($a3)
    ctx->pc = 0x1b05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b05cc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1b05ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1b05d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b05d4: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1b05d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1b05d8: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1b05d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1b05dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b05dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b05e0: 0x0  nop
    ctx->pc = 0x1b05e0u;
    // NOP
    // 0x1b05e4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b05e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b05e8: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1b05e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b05ec: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b05ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b05f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b05f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b05f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b05f8: 0x0  nop
    ctx->pc = 0x1b05f8u;
    // NOP
    // 0x1b05fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b05fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0600: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b0600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0604: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1b0604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b0608: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1b0608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b060c: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0610: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1b0610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b0614: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1b0614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1b0618: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1b0618u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b061c: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x1b061cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1b0620: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1b0620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b0624: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0628: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b0628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b062c: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1b062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1b0630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0638: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1b0638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b063c: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1b063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0640: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b0640u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b0644: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b0644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b0648: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1b0648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b064c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b064cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b0650: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0654: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0658: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1b0658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1b065c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b065cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b0660:
    // 0x1b0660: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x1b0660u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b0664: 0x1460fed1  bnez        $v1, . + 4 + (-0x12F << 2)
    ctx->pc = 0x1B0664u;
    {
        const bool branch_taken_0x1b0664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0664) {
            ctx->pc = 0x1B01ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01ac;
        }
    }
    ctx->pc = 0x1B066Cu;
    // 0x1b066c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0670: 0xc44300c4  lwc1        $f3, 0xC4($v0)
    ctx->pc = 0x1b0670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0674: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0678: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1b0678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b067c: 0x3c1240a0  lui         $s2, 0x40A0
    ctx->pc = 0x1b067cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16544 << 16));
    // 0x1b0680: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x1b0680u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b0684: 0x0  nop
    ctx->pc = 0x1b0684u;
    // NOP
    // 0x1b0688: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1b0688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b068c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1b068cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0690: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0690u;
    {
        const bool branch_taken_0x1b0690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0690) {
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1B0698u;
    // 0x1b0698: 0x8fb602a0  lw          $s6, 0x2A0($sp)
    ctx->pc = 0x1b0698u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b069c: 0xaec000b0  sw          $zero, 0xB0($s6)
    ctx->pc = 0x1b069cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 176), GPR_U32(ctx, 0));
    // 0x1b06a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b06a4: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1b06a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1b06a8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b06ac: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1b06acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1b06b0: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x1b06b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1b06b4: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b06b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b06bc: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B06BCu;
    SET_GPR_U32(ctx, 31, 0x1B06C4u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B06BCu, 0x1B06C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06C4u;
label_1b06c4:
    // 0x1b06c4: 0x7ba301d0  lq          $v1, 0x1D0($sp)
    ctx->pc = 0x1b06c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b06c8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b06c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b06cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b06ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b06d0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b06d4: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x1b06d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_1b06d8:
    // 0x1b06d8: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b06d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b06dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b06dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06e0: 0xc06d2a8  jal         func_1B4AA0
    ctx->pc = 0x1B06E0u;
    SET_GPR_U32(ctx, 31, 0x1B06E8u);
    ctx->pc = 0x1B4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AA0u, 0x1B06E0u, 0x1B06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06E8u;
label_1b06e8:
    // 0x1b06e8: 0x8fb102a0  lw          $s1, 0x2A0($sp)
    ctx->pc = 0x1b06e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b06ec: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1b06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1b06f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b06f4: 0x14440116  bne         $v0, $a0, . + 4 + (0x116 << 2)
    ctx->pc = 0x1B06F4u;
    {
        const bool branch_taken_0x1b06f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b06f4) {
            ctx->pc = 0x1B0B50u;
            goto label_1b0b50;
        }
    }
    ctx->pc = 0x1B06FCu;
    // 0x1b06fc: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0700: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1b0700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1b0704: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1b0704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b0708: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1b0708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1b070c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b0710: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0710u;
    {
        const bool branch_taken_0x1b0710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b0710) {
            ctx->pc = 0x1B0724u;
            goto label_1b0724;
        }
    }
    ctx->pc = 0x1B0718u;
    // 0x1b0718: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b071c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B071Cu;
    {
        const bool branch_taken_0x1b071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b071c) {
            ctx->pc = 0x1B0728u;
            goto label_1b0728;
        }
    }
    ctx->pc = 0x1B0724u;
label_1b0724:
    // 0x1b0724: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b0724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0728:
    // 0x1b0728: 0xafb50268  sw          $s5, 0x268($sp)
    ctx->pc = 0x1b0728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 21));
    // 0x1b072c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0730: 0x248501fc  addiu       $a1, $a0, 0x1FC
    ctx->pc = 0x1b0730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 508));
    // 0x1b0734: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b0734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b073c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b073cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0740: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B0740u;
    SET_GPR_U32(ctx, 31, 0x1B0748u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B0740u, 0x1B0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0748u;
label_1b0748:
    // 0x1b0748: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x1b0748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1b074c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b074cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b0750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b0750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0754: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1b0754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b0758: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b075c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0760: 0x24640184  addiu       $a0, $v1, 0x184
    ctx->pc = 0x1b0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 388));
    // 0x1b0764: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b076c: 0xc06dcdc  jal         func_1B7370
    ctx->pc = 0x1B076Cu;
    SET_GPR_U32(ctx, 31, 0x1B0774u);
    ctx->pc = 0x1B7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7370u, 0x1B076Cu, 0x1B0774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0774u;
label_1b0774:
    // 0x1b0774: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0778: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b0778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b077c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0780: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B0780u;
    SET_GPR_U32(ctx, 31, 0x1B0788u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B0780u, 0x1B0788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0788u;
label_1b0788:
    // 0x1b0788: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b078c: 0x246401b4  addiu       $a0, $v1, 0x1B4
    ctx->pc = 0x1b078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 436));
    // 0x1b0790: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0798: 0xc06dcdc  jal         func_1B7370
    ctx->pc = 0x1B0798u;
    SET_GPR_U32(ctx, 31, 0x1B07A0u);
    ctx->pc = 0x1B7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7370u, 0x1B0798u, 0x1B07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07A0u;
label_1b07a0:
    // 0x1b07a0: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1b07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1b07a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b07a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b07ac: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1b07acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b07b0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b07b4: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1b07b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1b07b8: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1b07b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b07bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b07c0: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b07c4: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b07c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b07c8: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x1b07c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1b07cc: 0xc06dc28  jal         func_1B70A0
    ctx->pc = 0x1B07CCu;
    SET_GPR_U32(ctx, 31, 0x1B07D4u);
    ctx->pc = 0x1B70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70A0u, 0x1B07CCu, 0x1B07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07D4u;
label_1b07d4:
    // 0x1b07d4: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x1B07D4u;
    {
        const bool branch_taken_0x1b07d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b07d4) {
            ctx->pc = 0x1B0A80u;
            goto label_1b0a80;
        }
    }
    ctx->pc = 0x1B07DCu;
    // 0x1b07dc: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b07e0: 0xac6000b0  sw          $zero, 0xB0($v1)
    ctx->pc = 0x1b07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
    // 0x1b07e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b07e8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1b07e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1b07ec: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b07f0: 0x24640208  addiu       $a0, $v1, 0x208
    ctx->pc = 0x1b07f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 520));
    // 0x1b07f4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1b07f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b07f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b07f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07fc: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B07FCu;
    SET_GPR_U32(ctx, 31, 0x1B0804u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B07FCu, 0x1B0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0804u;
label_1b0804:
    // 0x1b0804: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x1b0804u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b0808: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b0808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b080c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b080cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0810: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b0810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0814: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x1b0814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
    // 0x1b0818: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b0818u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b081c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0820: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1b0820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1b0824: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1b0824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1b0828: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b0828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b082c: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1b082cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b0830: 0x14430071  bne         $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x1B0830u;
    {
        const bool branch_taken_0x1b0830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0830) {
            ctx->pc = 0x1B09F8u;
            goto label_1b09f8;
        }
    }
    ctx->pc = 0x1B0838u;
    // 0x1b0838: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b083c: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1b083cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0840: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0844: 0x24a3019c  addiu       $v1, $a1, 0x19C
    ctx->pc = 0x1b0844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 412));
    // 0x1b0848: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b0848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b084c: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1b0850: 0x24c600c0  addiu       $a2, $a2, 0xC0
    ctx->pc = 0x1b0850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x1b0854: 0x2447010c  addiu       $a3, $v0, 0x10C
    ctx->pc = 0x1b0854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1b0858: 0x27a80264  addiu       $t0, $sp, 0x264
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x1b085c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B085Cu;
    SET_GPR_U32(ctx, 31, 0x1B0864u);
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B085Cu, 0x1B0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0864u;
label_1b0864:
    // 0x1b0864: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1B0864u;
    {
        const bool branch_taken_0x1b0864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0864) {
            ctx->pc = 0x1B09F8u;
            goto label_1b09f8;
        }
    }
    ctx->pc = 0x1B086Cu;
    // 0x1b086c: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x1b086cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x1b0870: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b0870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0874: 0x14a40060  bne         $a1, $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1B0874u;
    {
        const bool branch_taken_0x1b0874 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b0874) {
            ctx->pc = 0x1B09F8u;
            goto label_1b09f8;
        }
    }
    ctx->pc = 0x1B087Cu;
    // 0x1b087c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b087cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0880: 0xc4a001f8  lwc1        $f0, 0x1F8($a1)
    ctx->pc = 0x1b0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0884: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x1b0884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x1b0888: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1b0888u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b088c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0890: 0xc4830050  lwc1        $f3, 0x50($a0)
    ctx->pc = 0x1b0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0894: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x1b0894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x1b0898: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1b0898u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b089c: 0x0  nop
    ctx->pc = 0x1b089cu;
    // NOP
    // 0x1b08a0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1b08a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b08a4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B08A4u;
    {
        const bool branch_taken_0x1b08a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b08a4) {
            ctx->pc = 0x1B08DCu;
            goto label_1b08dc;
        }
    }
    ctx->pc = 0x1B08ACu;
    // 0x1b08ac: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1b08acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b08b0: 0xc4c10050  lwc1        $f1, 0x50($a2)
    ctx->pc = 0x1b08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b08b4: 0xc7a00260  lwc1        $f0, 0x260($sp)
    ctx->pc = 0x1b08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b08b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b08b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b08bc: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x1b08bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x1b08c0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1b08c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b08c4: 0x0  nop
    ctx->pc = 0x1b08c4u;
    // NOP
    // 0x1b08c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b08c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b08cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B08CCu;
    {
        const bool branch_taken_0x1b08cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b08cc) {
            ctx->pc = 0x1B08DCu;
            goto label_1b08dc;
        }
    }
    ctx->pc = 0x1B08D4u;
    // 0x1b08d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b08d8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1b08d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b08dc:
    // 0x1b08dc: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x1b08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b08e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b08e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b08e4: 0x0  nop
    ctx->pc = 0x1b08e4u;
    // NOP
    // 0x1b08e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b08e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b08ec: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1B08ECu;
    {
        const bool branch_taken_0x1b08ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b08ec) {
            ctx->pc = 0x1B0948u;
            goto label_1b0948;
        }
    }
    ctx->pc = 0x1B08F4u;
    // 0x1b08f4: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b08f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b08f8: 0xc7ac0260  lwc1        $f12, 0x260($sp)
    ctx->pc = 0x1b08f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b08fc: 0xc064d10  jal         func_193440
    ctx->pc = 0x1B08FCu;
    SET_GPR_U32(ctx, 31, 0x1B0904u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1B08FCu, 0x1B0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0904u;
label_1b0904:
    // 0x1b0904: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0908: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1b0908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1b090c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x1b090cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b0910: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1b0910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1b0914: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0914u;
    {
        const bool branch_taken_0x1b0914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0914) {
            ctx->pc = 0x1B0948u;
            goto label_1b0948;
        }
    }
    ctx->pc = 0x1B091Cu;
    // 0x1b091c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b091cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0920: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1b0920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0924: 0x8f85bbec  lw          $a1, -0x4414($gp)
    ctx->pc = 0x1b0924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1b0928: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b0928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b092c: 0x278594d0  addiu       $a1, $gp, -0x6B30
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939856));
    // 0x1b0930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0934: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0938: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1B0938u;
    SET_GPR_U32(ctx, 31, 0x1B0940u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1B0938u, 0x1B0940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0940u;
label_1b0940:
    // 0x1b0940: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0944: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1b0944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1b0948:
    // 0x1b0948: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x1B0948u;
    {
        const bool branch_taken_0x1b0948 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0948) {
            ctx->pc = 0x1B0984u;
            goto label_1b0984;
        }
    }
    ctx->pc = 0x1B0950u;
    // 0x1b0950: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0954: 0x278594d8  addiu       $a1, $gp, -0x6B28
    ctx->pc = 0x1b0954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939864));
    // 0x1b0958: 0xc064d48  jal         func_193520
    ctx->pc = 0x1B0958u;
    SET_GPR_U32(ctx, 31, 0x1B0960u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x1B0958u, 0x1B0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0960u;
label_1b0960:
    // 0x1b0960: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1b0960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1b0964: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0968: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b096c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1b096cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1b0970: 0x278594e0  addiu       $a1, $gp, -0x6B20
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939872));
    // 0x1b0974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0978: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b0978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b097c: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1B097Cu;
    SET_GPR_U32(ctx, 31, 0x1B0984u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1B097Cu, 0x1B0984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0984u;
label_1b0984:
    // 0x1b0984: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1b0984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0988: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b098c: 0x24c40494  addiu       $a0, $a2, 0x494
    ctx->pc = 0x1b098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1172));
    // 0x1b0990: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1b0990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1b0994: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1b0994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1b0998: 0x7ba50150  lq          $a1, 0x150($sp)
    ctx->pc = 0x1b0998u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b099c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B099Cu;
    SET_GPR_U32(ctx, 31, 0x1B09A4u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B099Cu, 0x1B09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09A4u;
label_1b09a4:
    // 0x1b09a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b09a8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1b09a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1b09ac: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b09acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b09b0: 0x24a40208  addiu       $a0, $a1, 0x208
    ctx->pc = 0x1b09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
    // 0x1b09b4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b09b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b09b8: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B09B8u;
    SET_GPR_U32(ctx, 31, 0x1B09C0u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B09B8u, 0x1B09C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09C0u;
label_1b09c0:
    // 0x1b09c0: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x1b09c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b09c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b09c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b09c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b09cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b09ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b09d0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1b09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1b09d4: 0x278294e8  addiu       $v0, $gp, -0x6B18
    ctx->pc = 0x1b09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939880));
    // 0x1b09d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b09d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b09dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b09dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b09e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b09e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b09e4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b09e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b09e8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1B09E8u;
    SET_GPR_U32(ctx, 31, 0x1B09F0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1B09E8u, 0x1B09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09F0u;
label_1b09f0:
    // 0x1b09f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b09f4: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x1b09f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b09f8:
    // 0x1b09f8: 0x17c00055  bnez        $fp, . + 4 + (0x55 << 2)
    ctx->pc = 0x1B09F8u;
    {
        const bool branch_taken_0x1b09f8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b09f8) {
            ctx->pc = 0x1B0B50u;
            goto label_1b0b50;
        }
    }
    ctx->pc = 0x1B0A00u;
    // 0x1b0a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0a04: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1b0a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1b0a08: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0a0c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1b0a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1b0a10: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1b0a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b0a14: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b0a18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b0a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b0a1c: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B0A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B0A24u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B0A1Cu, 0x1B0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A24u;
label_1b0a24:
    // 0x1b0a24: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x1b0a24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b0a28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b0a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0a30: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1b0a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1b0a34: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0a38: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b0a3c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b0a40: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B0A40u;
    SET_GPR_U32(ctx, 31, 0x1B0A48u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B0A40u, 0x1B0A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A48u;
label_1b0a48:
    // 0x1b0a48: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x1b0a48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b0a4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b0a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0a50: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1b0a50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0a54: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1b0a54u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0a58: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1b0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1b0a5c: 0x278594f0  addiu       $a1, $gp, -0x6B10
    ctx->pc = 0x1b0a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939888));
    // 0x1b0a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0a68: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1b0a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1b0a6c: 0x7ba70100  lq          $a3, 0x100($sp)
    ctx->pc = 0x1b0a6cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b0a70: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1B0A70u;
    SET_GPR_U32(ctx, 31, 0x1B0A78u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1B0A70u, 0x1B0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A78u;
label_1b0a78:
    // 0x1b0a78: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B0A78u;
    {
        const bool branch_taken_0x1b0a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a78) {
            ctx->pc = 0x1B0B50u;
            goto label_1b0b50;
        }
    }
    ctx->pc = 0x1B0A80u;
label_1b0a80:
    // 0x1b0a80: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0a84: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0a88: 0x248401b4  addiu       $a0, $a0, 0x1B4
    ctx->pc = 0x1b0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 436));
    // 0x1b0a8c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x1b0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1b0a90: 0xc06dc28  jal         func_1B70A0
    ctx->pc = 0x1B0A90u;
    SET_GPR_U32(ctx, 31, 0x1B0A98u);
    ctx->pc = 0x1B70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70A0u, 0x1B0A90u, 0x1B0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A98u;
label_1b0a98:
    // 0x1b0a98: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B0A98u;
    {
        const bool branch_taken_0x1b0a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a98) {
            ctx->pc = 0x1B0B50u;
            goto label_1b0b50;
        }
    }
    ctx->pc = 0x1B0AA0u;
    // 0x1b0aa0: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0aa4: 0xac6000b0  sw          $zero, 0xB0($v1)
    ctx->pc = 0x1b0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
    // 0x1b0aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0aac: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1b0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1b0ab0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0ab4: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b0ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b0ab8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b0ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b0abc: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B0ABCu;
    SET_GPR_U32(ctx, 31, 0x1B0AC4u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B0ABCu, 0x1B0AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0AC4u;
label_1b0ac4:
    // 0x1b0ac4: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1b0ac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b0ac8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b0ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0acc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b0accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0ad0: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0ad4: 0xe46100ec  swc1        $f1, 0xEC($v1)
    ctx->pc = 0x1b0ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1b0ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0adc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1b0adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1b0ae0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0ae4: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b0ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b0ae8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1b0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b0aec: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1b0aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1b0af0: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x1b0af0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b0af4: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B0AF4u;
    SET_GPR_U32(ctx, 31, 0x1B0AFCu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B0AF4u, 0x1B0AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0AFCu;
label_1b0afc:
    // 0x1b0afc: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1b0afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b0b00: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b0b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0b08: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1b0b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1b0b0c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b0b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0b10: 0x24a40208  addiu       $a0, $a1, 0x208
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
    // 0x1b0b14: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b0b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b0b18: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B0B18u;
    SET_GPR_U32(ctx, 31, 0x1B0B20u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B0B18u, 0x1B0B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B20u;
label_1b0b20:
    // 0x1b0b20: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1b0b20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0b24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b0b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0b28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0b30: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1b0b34: 0x278294f0  addiu       $v0, $gp, -0x6B10
    ctx->pc = 0x1b0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939888));
    // 0x1b0b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b0b3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b0b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b44: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0b48: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1B0B48u;
    SET_GPR_U32(ctx, 31, 0x1B0B50u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1B0B48u, 0x1B0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B50u;
label_1b0b50:
    // 0x1b0b50: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0b54: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0B54u;
    SET_GPR_U32(ctx, 31, 0x1B0B5Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0B54u, 0x1B0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B5Cu;
label_1b0b5c:
    // 0x1b0b5c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1b0b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1b0b60: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0b64: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b0b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b0b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0B6Cu, 0x1B0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B74u;
label_1b0b74:
    // 0x1b0b74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b0b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0b78: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1b0b78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b0b7c: 0x27a60238  addiu       $a2, $sp, 0x238
    ctx->pc = 0x1b0b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1b0b80: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B0B80u;
    SET_GPR_U32(ctx, 31, 0x1B0B88u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B0B80u, 0x1B0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B88u;
label_1b0b88:
    // 0x1b0b88: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1b0b88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1b0b8c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1b0b8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0b90: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x1b0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0b94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b0b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0b98: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x1b0b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x1b0b9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b0ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0ba4: 0xc7a2023c  lwc1        $f2, 0x23C($sp)
    ctx->pc = 0x1b0ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0ba8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b0ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b0bac: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x1b0bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x1b0bb0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b0bb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bb4: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0bb8: 0x24840208  addiu       $a0, $a0, 0x208
    ctx->pc = 0x1b0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 520));
    // 0x1b0bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bc0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B0BC0u;
    SET_GPR_U32(ctx, 31, 0x1B0BC8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B0BC0u, 0x1B0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BC8u;
label_1b0bc8:
    // 0x1b0bc8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1b0bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0bcc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B0BCCu;
    {
        const bool branch_taken_0x1b0bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bcc) {
            ctx->pc = 0x1B0C0Cu;
            goto label_1b0c0c;
        }
    }
    ctx->pc = 0x1B0BD4u;
    // 0x1b0bd4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0bd8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b0bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0be0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B0BE0u;
    SET_GPR_U32(ctx, 31, 0x1B0BE8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B0BE0u, 0x1B0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BE8u;
label_1b0be8:
    // 0x1b0be8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0bec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0bf4: 0x0  nop
    ctx->pc = 0x1b0bf4u;
    // NOP
    // 0x1b0bf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0bfc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0BFCu;
    {
        const bool branch_taken_0x1b0bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0bfc) {
            ctx->pc = 0x1B0C0Cu;
            goto label_1b0c0c;
        }
    }
    ctx->pc = 0x1B0C04u;
    // 0x1b0c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0c08: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1b0c08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b0c0c:
    // 0x1b0c0c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0C0Cu;
    {
        const bool branch_taken_0x1b0c0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c0c) {
            ctx->pc = 0x1B0C24u;
            goto label_1b0c24;
        }
    }
    ctx->pc = 0x1B0C14u;
    // 0x1b0c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0c18: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1b0c18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0c1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0C1Cu;
    {
        const bool branch_taken_0x1b0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c1c) {
            ctx->pc = 0x1B0C28u;
            goto label_1b0c28;
        }
    }
    ctx->pc = 0x1B0C24u;
label_1b0c24:
    // 0x1b0c24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b0c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c28:
    // 0x1b0c28: 0xa3b3029f  sb          $s3, 0x29F($sp)
    ctx->pc = 0x1b0c28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 671), (uint8_t)GPR_U32(ctx, 19));
    // 0x1b0c2c: 0x93a2029f  lbu         $v0, 0x29F($sp)
    ctx->pc = 0x1b0c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 671)));
    // 0x1b0c30: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B0C30u;
    {
        const bool branch_taken_0x1b0c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c30) {
            ctx->pc = 0x1B0CACu;
            goto label_1b0cac;
        }
    }
    ctx->pc = 0x1B0C38u;
    // 0x1b0c38: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0c3c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C44u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0C3Cu, 0x1B0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C44u;
label_1b0c44:
    // 0x1b0c44: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1b0c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1b0c48: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0c4c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b0c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c54: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0C54u;
    SET_GPR_U32(ctx, 31, 0x1B0C5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0C54u, 0x1B0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C5Cu;
label_1b0c5c:
    // 0x1b0c5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b0c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0c60: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0c64: 0xc44300d8  lwc1        $f3, 0xD8($v0)
    ctx->pc = 0x1b0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0c68: 0xc7a20238  lwc1        $f2, 0x238($sp)
    ctx->pc = 0x1b0c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0c6c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0c70: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x1b0c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0c78: 0x0  nop
    ctx->pc = 0x1b0c78u;
    // NOP
    // 0x1b0c7c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b0c7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b0c80: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x1b0c80u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b0c84: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0c88: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1b0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0c8c: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x1b0c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0c90: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1b0c90u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b0c94: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1b0c94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c9c: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B0C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0CA4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B0C9Cu, 0x1B0CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CA4u;
label_1b0ca4:
    // 0x1b0ca4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B0CA4u;
    {
        const bool branch_taken_0x1b0ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ca4) {
            ctx->pc = 0x1B0D2Cu;
            goto label_1b0d2c;
        }
    }
    ctx->pc = 0x1B0CACu;
label_1b0cac:
    // 0x1b0cac: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0cb0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0CB0u;
    SET_GPR_U32(ctx, 31, 0x1B0CB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0CB0u, 0x1B0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CB8u;
label_1b0cb8:
    // 0x1b0cb8: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1b0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1b0cbc: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0cc0: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1b0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1b0cc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cc8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0CC8u;
    SET_GPR_U32(ctx, 31, 0x1B0CD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0CC8u, 0x1B0CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CD0u;
label_1b0cd0:
    // 0x1b0cd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0cd4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0cd8: 0xc44300d8  lwc1        $f3, 0xD8($v0)
    ctx->pc = 0x1b0cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0cdc: 0xc7a20238  lwc1        $f2, 0x238($sp)
    ctx->pc = 0x1b0cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0ce0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0ce4: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x1b0ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0cec: 0x0  nop
    ctx->pc = 0x1b0cecu;
    // NOP
    // 0x1b0cf0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b0cf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b0cf4: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x1b0cf4u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b0cf8: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0cfc: 0xc46300dc  lwc1        $f3, 0xDC($v1)
    ctx->pc = 0x1b0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0d00: 0xc7a2023c  lwc1        $f2, 0x23C($sp)
    ctx->pc = 0x1b0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0d04: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0d08: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1b0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0d10: 0x0  nop
    ctx->pc = 0x1b0d10u;
    // NOP
    // 0x1b0d14: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b0d14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b0d18: 0x4603135d  msub.s      $f13, $f2, $f3
    ctx->pc = 0x1b0d18u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b0d1c: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x1b0d1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b0d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d24: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B0D24u;
    SET_GPR_U32(ctx, 31, 0x1B0D2Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B0D24u, 0x1B0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D2Cu;
label_1b0d2c:
    // 0x1b0d2c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0d30: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0D30u;
    SET_GPR_U32(ctx, 31, 0x1B0D38u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0D30u, 0x1B0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D38u;
label_1b0d38:
    // 0x1b0d38: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1b0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1b0d3c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0d40: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b0d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d48: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0D48u;
    SET_GPR_U32(ctx, 31, 0x1B0D50u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0D48u, 0x1B0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D50u;
label_1b0d50:
    // 0x1b0d50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0d54: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b0d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0d5c: 0xc7ac0288  lwc1        $f12, 0x288($sp)
    ctx->pc = 0x1b0d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0d60: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1b0d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1b0d64: 0xc78c80b0  lwc1        $f12, -0x7F50($gp)
    ctx->pc = 0x1b0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0d68: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1b0d68u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1b0d6c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1b0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1b0d70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b0d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b0d74: 0x0  nop
    ctx->pc = 0x1b0d74u;
    // NOP
    // 0x1b0d78: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x1b0d78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b0d7c: 0x7ba40200  lq          $a0, 0x200($sp)
    ctx->pc = 0x1b0d7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b0d80: 0x27a60238  addiu       $a2, $sp, 0x238
    ctx->pc = 0x1b0d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1b0d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b0d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0d88: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1B0D88u;
    SET_GPR_U32(ctx, 31, 0x1B0D90u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1B0D88u, 0x1B0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D90u;
label_1b0d90:
    // 0x1b0d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d94: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1b0d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0d98: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1b0d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d9c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0DA4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0D9Cu, 0x1B0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DA4u;
label_1b0da4:
    // 0x1b0da4: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1b0da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1b0da8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0dac: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b0dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b0db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0db4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0DB4u;
    SET_GPR_U32(ctx, 31, 0x1B0DBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0DB4u, 0x1B0DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DBCu;
label_1b0dbc:
    // 0x1b0dbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b0dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0dc0: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0dc4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0dc8: 0x7ba401f0  lq          $a0, 0x1F0($sp)
    ctx->pc = 0x1b0dc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1b0dcc: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x1b0dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0dd0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1b0dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1b0dd4: 0xc44d00dc  lwc1        $f13, 0xDC($v0)
    ctx->pc = 0x1b0dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b0dd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0ddc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b0ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0de0: 0xc08c544  jal         func_231510
    ctx->pc = 0x1B0DE0u;
    SET_GPR_U32(ctx, 31, 0x1B0DE8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1B0DE0u, 0x1B0DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DE8u;
label_1b0de8:
    // 0x1b0de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dec: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0df4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0DF4u;
    SET_GPR_U32(ctx, 31, 0x1B0DFCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0DF4u, 0x1B0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DFCu;
label_1b0dfc:
    // 0x1b0dfc: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1b0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1b0e00: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0e04: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b0e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e0c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0E0Cu, 0x1B0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E14u;
label_1b0e14:
    // 0x1b0e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0e1c: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0e20: 0x7ba401e0  lq          $a0, 0x1E0($sp)
    ctx->pc = 0x1b0e20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b0e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e28: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x1b0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0e2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b0e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b0e30: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1B0E30u;
    SET_GPR_U32(ctx, 31, 0x1B0E38u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1B0E30u, 0x1B0E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E38u;
label_1b0e38:
    // 0x1b0e38: 0x8fb002a0  lw          $s0, 0x2A0($sp)
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0e3c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1b0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1b0e40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0e44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0E44u;
    {
        const bool branch_taken_0x1b0e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0e44) {
            ctx->pc = 0x1B0E5Cu;
            goto label_1b0e5c;
        }
    }
    ctx->pc = 0x1B0E4Cu;
    // 0x1b0e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0e50: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1b0e50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0e54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0E54u;
    {
        const bool branch_taken_0x1b0e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e54) {
            ctx->pc = 0x1B0E60u;
            goto label_1b0e60;
        }
    }
    ctx->pc = 0x1B0E5Cu;
label_1b0e5c:
    // 0x1b0e5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e60:
    // 0x1b0e60: 0x325600ff  andi        $s6, $s2, 0xFF
    ctx->pc = 0x1b0e60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1b0e64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b0e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B0E68u;
    {
        const bool branch_taken_0x1b0e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e68) {
            ctx->pc = 0x1B0EB8u;
            goto label_1b0eb8;
        }
    }
    ctx->pc = 0x1B0E70u;
label_1b0e70:
    // 0x1b0e70: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0e74: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1b0e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1b0e78: 0x7ba401d0  lq          $a0, 0x1D0($sp)
    ctx->pc = 0x1b0e78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b0e7c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E84u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0E7Cu, 0x1B0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E84u;
label_1b0e84:
    // 0x1b0e84: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1b0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1b0e88: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0e8c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x1b0e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b0e90: 0x248200a4  addiu       $v0, $a0, 0xA4
    ctx->pc = 0x1b0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1b0e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e98: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0E98u;
    SET_GPR_U32(ctx, 31, 0x1B0EA0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0E98u, 0x1B0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EA0u;
label_1b0ea0:
    // 0x1b0ea0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0ea4: 0x7ba401c0  lq          $a0, 0x1C0($sp)
    ctx->pc = 0x1b0ea4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1b0ea8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b0ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0eac: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B0EACu;
    SET_GPR_U32(ctx, 31, 0x1B0EB4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B0EACu, 0x1B0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EB4u;
label_1b0eb4:
    // 0x1b0eb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b0eb8:
    // 0x1b0eb8: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1b0eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b0ebc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B0EBCu;
    {
        const bool branch_taken_0x1b0ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ebc) {
            ctx->pc = 0x1B0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0e70;
        }
    }
    ctx->pc = 0x1B0EC4u;
    // 0x1b0ec4: 0x12c0007a  beqz        $s6, . + 4 + (0x7A << 2)
    ctx->pc = 0x1B0EC4u;
    {
        const bool branch_taken_0x1b0ec4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ec4) {
            ctx->pc = 0x1B10B0u;
            goto label_1b10b0;
        }
    }
    ctx->pc = 0x1B0ECCu;
    // 0x1b0ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b0eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ed0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1B0ED0u;
    {
        const bool branch_taken_0x1b0ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ed0) {
            ctx->pc = 0x1B10A4u;
            goto label_1b10a4;
        }
    }
    ctx->pc = 0x1B0ED8u;
label_1b0ed8:
    // 0x1b0ed8: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0edc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0EDCu;
    SET_GPR_U32(ctx, 31, 0x1B0EE4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0EDCu, 0x1B0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EE4u;
label_1b0ee4:
    // 0x1b0ee4: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1b0ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1b0ee8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0eec: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x1b0eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b0ef0: 0x245500a4  addiu       $s5, $v0, 0xA4
    ctx->pc = 0x1b0ef0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b0ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ef8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0EF8u;
    SET_GPR_U32(ctx, 31, 0x1B0F00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0EF8u, 0x1B0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F00u;
label_1b0f00:
    // 0x1b0f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f04: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0f08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b0f0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b0f10: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0f14: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0f1c: 0xc4630100  lwc1        $f3, 0x100($v1)
    ctx->pc = 0x1b0f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0f20: 0xc7a20238  lwc1        $f2, 0x238($sp)
    ctx->pc = 0x1b0f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0f24: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1b0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b0f28: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1b0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b0f2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b0f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0f30: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0f34: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0f38: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1b0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f40: 0x0  nop
    ctx->pc = 0x1b0f40u;
    // NOP
    // 0x1b0f44: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b0f44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b0f48: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x1b0f48u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b0f4c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b0f50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b0f54: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b0f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0f58: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0f5c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b0f60: 0xc4630104  lwc1        $f3, 0x104($v1)
    ctx->pc = 0x1b0f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0f64: 0xc7a2023c  lwc1        $f2, 0x23C($sp)
    ctx->pc = 0x1b0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0f68: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1b0f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b0f6c: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1b0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b0f70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0f74: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0f78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0f7c: 0xc44100fc  lwc1        $f1, 0xFC($v0)
    ctx->pc = 0x1b0f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0f80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f84: 0x0  nop
    ctx->pc = 0x1b0f84u;
    // NOP
    // 0x1b0f88: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b0f88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b0f8c: 0x4603135d  msub.s      $f13, $f2, $f3
    ctx->pc = 0x1b0f8cu;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b0f90: 0x7ba401b0  lq          $a0, 0x1B0($sp)
    ctx->pc = 0x1b0f90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b0f94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f98: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B0F98u;
    SET_GPR_U32(ctx, 31, 0x1B0FA0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B0F98u, 0x1B0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FA0u;
label_1b0fa0:
    // 0x1b0fa0: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0fa4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B0FA4u;
    SET_GPR_U32(ctx, 31, 0x1B0FACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B0FA4u, 0x1B0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FACu;
label_1b0fac:
    // 0x1b0fac: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1b0facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1b0fb0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b0fb4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x1b0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b0fb8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b0fbc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B0FBCu;
    SET_GPR_U32(ctx, 31, 0x1B0FC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B0FBCu, 0x1B0FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FC4u;
label_1b0fc4:
    // 0x1b0fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0fcc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b0fd0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b0fd4: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x1b0fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
    // 0x1b0fd8: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1b0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x1b0fdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b0fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0fe0: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x1b0fe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b0fe4: 0xc4600248  lwc1        $f0, 0x248($v1)
    ctx->pc = 0x1b0fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0fe8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b0fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0fec: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b0fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ff0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b0ff0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b0ff4: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x1b0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x1b0ff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b0ff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0ffc: 0x0  nop
    ctx->pc = 0x1b0ffcu;
    // NOP
    // 0x1b1000: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b1000u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1004: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x1b1004u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b1008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b100c: 0x27a60238  addiu       $a2, $sp, 0x238
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1b1010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1014: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b1014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1018: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1B1018u;
    SET_GPR_U32(ctx, 31, 0x1B1020u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1B1018u, 0x1B1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1020u;
label_1b1020:
    // 0x1b1020: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1024: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b102c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B102Cu;
    SET_GPR_U32(ctx, 31, 0x1B1034u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B102Cu, 0x1B1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1034u;
label_1b1034:
    // 0x1b1034: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1b1034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1b1038: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b103c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x1b103cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1040: 0x246600a4  addiu       $a2, $v1, 0xA4
    ctx->pc = 0x1b1040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1b1044: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b1044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1048: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B1048u;
    SET_GPR_U32(ctx, 31, 0x1B1050u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B1048u, 0x1B1050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1050u;
label_1b1050:
    // 0x1b1050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1054: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b1058: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1b105c: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1b105cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b1060: 0x8fa802a0  lw          $t0, 0x2A0($sp)
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1064: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x1b1064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b1068: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1b1068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b106c: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x1b106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1b1070: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1b1070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b1074: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1078: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1b1078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b107c: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x1b107cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b1080: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b1080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1084: 0xc44c0100  lwc1        $f12, 0x100($v0)
    ctx->pc = 0x1b1084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1088: 0xc4cd0104  lwc1        $f13, 0x104($a2)
    ctx->pc = 0x1b1088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b108c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1090: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1094: 0xc08c544  jal         func_231510
    ctx->pc = 0x1B1094u;
    SET_GPR_U32(ctx, 31, 0x1B109Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1B1094u, 0x1B109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B109Cu;
label_1b109c:
    // 0x1b109c: 0x26370001  addiu       $s7, $s1, 0x1
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b10a0: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x1b10a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b10a4:
    // 0x1b10a4: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x1b10a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b10a8: 0x1480ff8b  bnez        $a0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x1B10A8u;
    {
        const bool branch_taken_0x1b10a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b10a8) {
            ctx->pc = 0x1B0ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ed8;
        }
    }
    ctx->pc = 0x1B10B0u;
label_1b10b0:
    // 0x1b10b0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b10b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b10b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B10B8u;
    SET_GPR_U32(ctx, 31, 0x1B10C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B10B8u, 0x1B10C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10C0u;
label_1b10c0:
    // 0x1b10c0: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1b10c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1b10c4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b10c8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b10cc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b10ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b10d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B10D0u;
    SET_GPR_U32(ctx, 31, 0x1B10D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B10D0u, 0x1B10D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10D8u;
label_1b10d8:
    // 0x1b10d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b10d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10dc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b10dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b10e0: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x1b10e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b10e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b10e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10e8: 0x27a70238  addiu       $a3, $sp, 0x238
    ctx->pc = 0x1b10e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1b10ec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1b10ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10f0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B10F0u;
    SET_GPR_U32(ctx, 31, 0x1B10F8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B10F0u, 0x1B10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10F8u;
label_1b10f8:
    // 0x1b10f8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b10fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b10fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1100: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x1b1100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1104: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x1b1104u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1108: 0xe7a40238  swc1        $f4, 0x238($sp)
    ctx->pc = 0x1b1108u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x1b110c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b110cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b1110: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b1110u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1114: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x1b1114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1118: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1b1118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b111c: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x1b111cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x1b1120: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1124: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b1124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1128: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B1128u;
    SET_GPR_U32(ctx, 31, 0x1B1130u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B1128u, 0x1B1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1130u;
label_1b1130:
    // 0x1b1130: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1b1130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1b1134: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1138: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b1138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b113c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1140: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B1140u;
    SET_GPR_U32(ctx, 31, 0x1B1148u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B1140u, 0x1B1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1148u;
label_1b1148:
    // 0x1b1148: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b1148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b114c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b1150: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x1b1150u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b1154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1158: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x1b1158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1b115c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B115Cu;
    SET_GPR_U32(ctx, 31, 0x1B1164u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B115Cu, 0x1B1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1164u;
label_1b1164:
    // 0x1b1164: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b1164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1168: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B1168u;
    SET_GPR_U32(ctx, 31, 0x1B1170u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B1168u, 0x1B1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1170u;
label_1b1170:
    // 0x1b1170: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1b1170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1b1174: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1178: 0x244200a4  addiu       $v0, $v0, 0xA4
    ctx->pc = 0x1b1178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b117c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1b117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1b1180: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1b1180u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1184: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b1184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1188: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B1188u;
    SET_GPR_U32(ctx, 31, 0x1B1190u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B1188u, 0x1B1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1190u;
label_1b1190:
    // 0x1b1190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1194: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b1194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1198: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b119c: 0xc44301d8  lwc1        $f3, 0x1D8($v0)
    ctx->pc = 0x1b119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b11a0: 0xc7a20230  lwc1        $f2, 0x230($sp)
    ctx->pc = 0x1b11a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b11a4: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b11a8: 0xc46100c8  lwc1        $f1, 0xC8($v1)
    ctx->pc = 0x1b11a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b11ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b11acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b11b0: 0x0  nop
    ctx->pc = 0x1b11b0u;
    // NOP
    // 0x1b11b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b11b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b11b8: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x1b11b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b11bc: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b11c0: 0xc48501dc  lwc1        $f5, 0x1DC($a0)
    ctx->pc = 0x1b11c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b11c4: 0xc7a40234  lwc1        $f4, 0x234($sp)
    ctx->pc = 0x1b11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b11c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b11cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b11ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b11d0: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x1b11d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b11d4: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1b11d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b11d8: 0xc4e101d4  lwc1        $f1, 0x1D4($a3)
    ctx->pc = 0x1b11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b11dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b11dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b11e0: 0x0  nop
    ctx->pc = 0x1b11e0u;
    // NOP
    // 0x1b11e4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x1b11e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x1b11e8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1b11e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1b11ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b11ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b11f0: 0x0  nop
    ctx->pc = 0x1b11f0u;
    // NOP
    // 0x1b11f4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1b11f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x1b11f8: 0x4605235d  msub.s      $f13, $f4, $f5
    ctx->pc = 0x1b11f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b11fc: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x1b11fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1204: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B1204u;
    SET_GPR_U32(ctx, 31, 0x1B120Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B1204u, 0x1B120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B120Cu;
label_1b120c:
    // 0x1b120c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b120cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b1210: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b1210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1214: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1b1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1218: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b1218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b121c: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x1b121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x1b1220: 0x3c1e3f00  lui         $fp, 0x3F00
    ctx->pc = 0x1b1220u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16128 << 16));
    // 0x1b1224: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x1b1224u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1228: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x1b1228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b122c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1b122cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1230: 0xe7ac0234  swc1        $f12, 0x234($sp)
    ctx->pc = 0x1b1230u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x1b1234: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1238: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1b1238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1b123c: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x1b123cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b1240: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B1240u;
    SET_GPR_U32(ctx, 31, 0x1B1248u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B1240u, 0x1B1248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1248u;
label_1b1248:
    // 0x1b1248: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1b1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1b124c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1250: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1b1254: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b1254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1258: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b125c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b125cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1260: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B1260u;
    SET_GPR_U32(ctx, 31, 0x1B1268u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B1260u, 0x1B1268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1268u;
label_1b1268:
    // 0x1b1268: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1b1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1b126c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1b126cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b1270: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1274: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b1274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1278: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
    // 0x1b127c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1b127cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b1280: 0xc4800174  lwc1        $f0, 0x174($a0)
    ctx->pc = 0x1b1280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1284: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x1b1284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b1288: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b1288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b128c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b128cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b1290: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1b1290u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b1294: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1298: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1b1298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1b129c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b129cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b12a4: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1B12A4u;
    SET_GPR_U32(ctx, 31, 0x1B12ACu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1B12A4u, 0x1B12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12ACu;
label_1b12ac:
    // 0x1b12ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b12acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12b0: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b12b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b12b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B12B8u;
    SET_GPR_U32(ctx, 31, 0x1B12C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B12B8u, 0x1B12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1b12c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1b12c4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b12c8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b12cc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b12ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b12d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B12D0u;
    SET_GPR_U32(ctx, 31, 0x1B12D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B12D0u, 0x1B12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12D8u;
label_1b12d8:
    // 0x1b12d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b12dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b12e0: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x1b12e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b12e4: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1b12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1b12e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b12e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12ec: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B12ECu;
    SET_GPR_U32(ctx, 31, 0x1B12F4u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B12ECu, 0x1B12F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12F4u;
label_1b12f4:
    // 0x1b12f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b12f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b12fc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1b12fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1b1300: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1b1300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b1304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1308: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x1b1308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b130c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b130cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b1310: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x1b1310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x1b1314: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b1314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b1318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b131c: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x1b131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1320: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b1320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b1324: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x1b1324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x1b1328: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x1b1328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x1b132c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b1330: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1330u;
    {
        const bool branch_taken_0x1b1330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1330) {
            ctx->pc = 0x1B1358u;
            goto label_1b1358;
        }
    }
    ctx->pc = 0x1B1338u;
    // 0x1b1338: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1b1338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1b133c:
    // 0x1b133c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1b133cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1340: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b1340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b1344: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b1344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b1348: 0x0  nop
    ctx->pc = 0x1b1348u;
    // NOP
    // 0x1b134c: 0x0  nop
    ctx->pc = 0x1b134cu;
    // NOP
    // 0x1b1350: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B1350u;
    {
        const bool branch_taken_0x1b1350 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1350) {
            ctx->pc = 0x1B133Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b133c;
        }
    }
    ctx->pc = 0x1B1358u;
label_1b1358:
    // 0x1b1358: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b135c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1360: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1b1360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1b1364: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1b1364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b1368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b136c: 0xc460017c  lwc1        $f0, 0x17C($v1)
    ctx->pc = 0x1b136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1370: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b1370u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b1374: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x1b1374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x1b1378: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b137c: 0xc440017c  lwc1        $f0, 0x17C($v0)
    ctx->pc = 0x1b137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1380: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x1b1380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x1b1384: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x1b1384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x1b1388: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b1388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b138c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B138Cu;
    SET_GPR_U32(ctx, 31, 0x1B1394u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B138Cu, 0x1B1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1394u;
label_1b1394:
    // 0x1b1394: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1b1394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1b1398: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b139c: 0x244200a4  addiu       $v0, $v0, 0xA4
    ctx->pc = 0x1b139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b13a0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1b13a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1b13a4: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1b13a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b13a8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b13ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B13ACu;
    SET_GPR_U32(ctx, 31, 0x1B13B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B13ACu, 0x1B13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13B4u;
label_1b13b4:
    // 0x1b13b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b13b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b13b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b13bc: 0xc7a30238  lwc1        $f3, 0x238($sp)
    ctx->pc = 0x1b13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b13c0: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x1b13c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b13c4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b13c8: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1b13c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b13cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b13ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b13d0: 0x0  nop
    ctx->pc = 0x1b13d0u;
    // NOP
    // 0x1b13d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b13d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b13d8: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x1b13d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b13dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b13e0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b13e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b13e4: 0xc7a1022c  lwc1        $f1, 0x22C($sp)
    ctx->pc = 0x1b13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b13e8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b13ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b13ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b13f0: 0x0  nop
    ctx->pc = 0x1b13f0u;
    // NOP
    // 0x1b13f4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1b13f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b13f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b13fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b13fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1404: 0x0  nop
    ctx->pc = 0x1b1404u;
    // NOP
    // 0x1b1408: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b1408u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b140c: 0x460218dd  msub.s      $f3, $f3, $f2
    ctx->pc = 0x1b140cu;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b1410: 0xc7a2023c  lwc1        $f2, 0x23C($sp)
    ctx->pc = 0x1b1410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b1414: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x1b1414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1418: 0xc4e101d4  lwc1        $f1, 0x1D4($a3)
    ctx->pc = 0x1b1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b141c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b141cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1420: 0x0  nop
    ctx->pc = 0x1b1420u;
    // NOP
    // 0x1b1424: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b1424u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b1428: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1b1428u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b142c: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x1b142cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b1430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1434: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B1434u;
    SET_GPR_U32(ctx, 31, 0x1B143Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B1434u, 0x1B143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B143Cu;
label_1b143c:
    // 0x1b143c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1440: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B1440u;
    SET_GPR_U32(ctx, 31, 0x1B1448u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B1440u, 0x1B1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1448u;
label_1b1448:
    // 0x1b1448: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1b1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1b144c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1450: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b1450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b1454: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1b1454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b1458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b145c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B145Cu;
    SET_GPR_U32(ctx, 31, 0x1B1464u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B145Cu, 0x1B1464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1464u;
label_1b1464:
    // 0x1b1464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1468: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b1468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b146c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1b146cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b1470: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b1470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1474: 0xc7ac0228  lwc1        $f12, 0x228($sp)
    ctx->pc = 0x1b1474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1478: 0xc7ad022c  lwc1        $f13, 0x22C($sp)
    ctx->pc = 0x1b1478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b147c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1480: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1484: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b1484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1488: 0xc08c544  jal         func_231510
    ctx->pc = 0x1B1488u;
    SET_GPR_U32(ctx, 31, 0x1B1490u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1B1488u, 0x1B1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1490u;
label_1b1490:
    // 0x1b1490: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b1490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1494: 0xc06d3e8  jal         func_1B4FA0
    ctx->pc = 0x1B1494u;
    SET_GPR_U32(ctx, 31, 0x1B149Cu);
    ctx->pc = 0x1B4FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4FA0u, 0x1B1494u, 0x1B149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B149Cu;
label_1b149c:
    // 0x1b149c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14a0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b14a4: 0xac400490  sw          $zero, 0x490($v0)
    ctx->pc = 0x1b14a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 0));
    // 0x1b14a8: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x1b14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b14ac: 0xc064cb0  jal         func_1932C0
    ctx->pc = 0x1B14ACu;
    SET_GPR_U32(ctx, 31, 0x1B14B4u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1B14ACu, 0x1B14B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14B4u;
label_1b14b4:
    // 0x1b14b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b14b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b14b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b14b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b14bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b14bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b14c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b14c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b14c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b14c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b14c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b14c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b14cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b14ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b14d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b14d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b14d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b14d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14dc: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x1b14dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1b14e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B14E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B14E8u;
    // 0x1b14e8: 0x0  nop
    ctx->pc = 0x1b14e8u;
    // NOP
    // 0x1b14ec: 0x0  nop
    ctx->pc = 0x1b14ecu;
    // NOP
    ctx->pc = 0x1b14f0u;
}
