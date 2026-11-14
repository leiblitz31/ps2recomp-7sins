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

// Function: sub_00250C80
// Address: 0x250c80 - 0x251710
void sub_00250C80_0x250c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250C80_0x250c80");
#endif

    switch (ctx->pc) {
        case 0x250cc4u: goto label_250cc4;
        case 0x250cd4u: goto label_250cd4;
        case 0x250ce4u: goto label_250ce4;
        case 0x250cf0u: goto label_250cf0;
        case 0x250d14u: goto label_250d14;
        case 0x250da0u: goto label_250da0;
        case 0x250dacu: goto label_250dac;
        case 0x250e44u: goto label_250e44;
        case 0x250e74u: goto label_250e74;
        case 0x250ea0u: goto label_250ea0;
        case 0x250ec0u: goto label_250ec0;
        case 0x250f5cu: goto label_250f5c;
        case 0x250f78u: goto label_250f78;
        case 0x250f90u: goto label_250f90;
        case 0x250ff8u: goto label_250ff8;
        case 0x251004u: goto label_251004;
        case 0x251018u: goto label_251018;
        case 0x2510b4u: goto label_2510b4;
        case 0x25117cu: goto label_25117c;
        case 0x2511b0u: goto label_2511b0;
        case 0x251260u: goto label_251260;
        case 0x251340u: goto label_251340;
        case 0x251374u: goto label_251374;
        case 0x251424u: goto label_251424;
        case 0x251454u: goto label_251454;
        case 0x251470u: goto label_251470;
        case 0x251498u: goto label_251498;
        case 0x2514a4u: goto label_2514a4;
        case 0x2514b8u: goto label_2514b8;
        case 0x251554u: goto label_251554;
        case 0x25157cu: goto label_25157c;
        case 0x251598u: goto label_251598;
        case 0x2515bcu: goto label_2515bc;
        case 0x2515c8u: goto label_2515c8;
        case 0x2515dcu: goto label_2515dc;
        case 0x251678u: goto label_251678;
        case 0x2516a8u: goto label_2516a8;
        case 0x2516c4u: goto label_2516c4;
        default: break;
    }

    ctx->pc = 0x250c80u;

    // 0x250c80: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x250c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x250c84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x250c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x250c88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x250c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x250c8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x250c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x250c90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x250c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x250c94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x250c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x250c98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x250c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x250c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x250c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x250ca0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x250ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x250ca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x250ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250cac: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x250cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x250cb0: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x250cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x250cb4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x250cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x250cb8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x250cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x250cbc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x250CBCu;
    SET_GPR_U32(ctx, 31, 0x250CC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x250CBCu, 0x250CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CC4u;
label_250cc4:
    // 0x250cc4: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x250cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x250cc8: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x250cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x250ccc: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x250CCCu;
    SET_GPR_U32(ctx, 31, 0x250CD4u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x250CCCu, 0x250CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CD4u;
label_250cd4:
    // 0x250cd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x250cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x250cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x250cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250cdc: 0xc09283c  jal         func_24A0F0
    ctx->pc = 0x250CDCu;
    SET_GPR_U32(ctx, 31, 0x250CE4u);
    ctx->pc = 0x24A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A0F0u, 0x250CDCu, 0x250CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CE4u;
label_250ce4:
    // 0x250ce4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x250ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x250ce8: 0xc094f24  jal         func_253C90
    ctx->pc = 0x250CE8u;
    SET_GPR_U32(ctx, 31, 0x250CF0u);
    ctx->pc = 0x253C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C90u, 0x250CE8u, 0x250CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CF0u;
label_250cf0:
    // 0x250cf0: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x250cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x250cf4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250cf8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x250cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250cfc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x250cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x250d00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x250d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x250d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x250d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d08: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x250d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x250d0c: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x250D0Cu;
    SET_GPR_U32(ctx, 31, 0x250D14u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x250D0Cu, 0x250D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D14u;
label_250d14:
    // 0x250d14: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x250d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x250d18: 0x10430224  beq         $v0, $v1, . + 4 + (0x224 << 2)
    ctx->pc = 0x250D18u;
    {
        const bool branch_taken_0x250d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d18) {
            ctx->pc = 0x2515ACu;
            goto label_2515ac;
        }
    }
    ctx->pc = 0x250D20u;
    // 0x250d20: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x250d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x250d24: 0x104301d8  beq         $v0, $v1, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x250D24u;
    {
        const bool branch_taken_0x250d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d24) {
            ctx->pc = 0x251488u;
            goto label_251488;
        }
    }
    ctx->pc = 0x250D2Cu;
    // 0x250d2c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x250d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x250d30: 0x104301d5  beq         $v0, $v1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x250D30u;
    {
        const bool branch_taken_0x250d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d30) {
            ctx->pc = 0x251488u;
            goto label_251488;
        }
    }
    ctx->pc = 0x250D38u;
    // 0x250d38: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x250d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x250d3c: 0x104301d2  beq         $v0, $v1, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x250D3Cu;
    {
        const bool branch_taken_0x250d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d3c) {
            ctx->pc = 0x251488u;
            goto label_251488;
        }
    }
    ctx->pc = 0x250D44u;
    // 0x250d44: 0x104001cf  beqz        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x250D44u;
    {
        const bool branch_taken_0x250d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250d44) {
            ctx->pc = 0x251484u;
            goto label_251484;
        }
    }
    ctx->pc = 0x250D4Cu;
    // 0x250d4c: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x250d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x250d50: 0x1043008b  beq         $v0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x250D50u;
    {
        const bool branch_taken_0x250d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d50) {
            ctx->pc = 0x250F80u;
            goto label_250f80;
        }
    }
    ctx->pc = 0x250D58u;
    // 0x250d58: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x250d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x250d5c: 0x10430088  beq         $v0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x250D5Cu;
    {
        const bool branch_taken_0x250d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d5c) {
            ctx->pc = 0x250F80u;
            goto label_250f80;
        }
    }
    ctx->pc = 0x250D64u;
    // 0x250d64: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x250d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x250d68: 0x10430085  beq         $v0, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x250D68u;
    {
        const bool branch_taken_0x250d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d68) {
            ctx->pc = 0x250F80u;
            goto label_250f80;
        }
    }
    ctx->pc = 0x250D70u;
    // 0x250d70: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x250d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x250d74: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x250D74u;
    {
        const bool branch_taken_0x250d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d74) {
            ctx->pc = 0x250D90u;
            goto label_250d90;
        }
    }
    ctx->pc = 0x250D7Cu;
    // 0x250d7c: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x250d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x250d80: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250D80u;
    {
        const bool branch_taken_0x250d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250d80) {
            ctx->pc = 0x250D90u;
            goto label_250d90;
        }
    }
    ctx->pc = 0x250D88u;
    // 0x250d88: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x250D88u;
    {
        const bool branch_taken_0x250d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250d88) {
            ctx->pc = 0x251484u;
            goto label_251484;
        }
    }
    ctx->pc = 0x250D90u;
label_250d90:
    // 0x250d90: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x250d90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x250d94: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x250d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x250d98: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x250D98u;
    {
        const bool branch_taken_0x250d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250d98) {
            ctx->pc = 0x250E8Cu;
            goto label_250e8c;
        }
    }
    ctx->pc = 0x250DA0u;
label_250da0:
    // 0x250da0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x250da0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250da4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x250DA4u;
    {
        const bool branch_taken_0x250da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250da4) {
            ctx->pc = 0x250E68u;
            goto label_250e68;
        }
    }
    ctx->pc = 0x250DACu;
label_250dac:
    // 0x250dac: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x250dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250db0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x250db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x250db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250db8: 0x0  nop
    ctx->pc = 0x250db8u;
    // NOP
    // 0x250dbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x250dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250dc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x250DC0u;
    {
        const bool branch_taken_0x250dc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250dc0) {
            ctx->pc = 0x250DD8u;
            goto label_250dd8;
        }
    }
    ctx->pc = 0x250DC8u;
    // 0x250dc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250dcc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x250dccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x250dd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x250DD0u;
    {
        const bool branch_taken_0x250dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250dd0) {
            ctx->pc = 0x250DECu;
            goto label_250dec;
        }
    }
    ctx->pc = 0x250DD8u;
label_250dd8:
    // 0x250dd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x250dd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x250ddc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250de0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x250de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x250de4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x250de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x250de8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_250dec:
    // 0x250dec: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x250decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x250df0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x250df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250df4: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x250df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250df8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x250df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x250dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250e00: 0x0  nop
    ctx->pc = 0x250e00u;
    // NOP
    // 0x250e04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x250e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250e08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x250E08u;
    {
        const bool branch_taken_0x250e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250e08) {
            ctx->pc = 0x250E20u;
            goto label_250e20;
        }
    }
    ctx->pc = 0x250E10u;
    // 0x250e10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250e14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x250e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x250e18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x250E18u;
    {
        const bool branch_taken_0x250e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250e18) {
            ctx->pc = 0x250E34u;
            goto label_250e34;
        }
    }
    ctx->pc = 0x250E20u;
label_250e20:
    // 0x250e20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x250e20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x250e24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250e28: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x250e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x250e2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x250e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x250e30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_250e34:
    // 0x250e34: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x250e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x250e38: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x250e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x250e3c: 0xc092158  jal         func_248560
    ctx->pc = 0x250E3Cu;
    SET_GPR_U32(ctx, 31, 0x250E44u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x250E3Cu, 0x250E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E44u;
label_250e44:
    // 0x250e44: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x250e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x250e48: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x250e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x250e4c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x250e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x250e50: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x250e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x250e54: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x250e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x250e58: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x250e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x250e5c: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x250e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x250e60: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x250e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x250e64: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x250e64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_250e68:
    // 0x250e68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x250e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x250e6c: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x250E6Cu;
    SET_GPR_U32(ctx, 31, 0x250E74u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x250E6Cu, 0x250E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E74u;
label_250e74:
    // 0x250e74: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x250e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x250e78: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x250E78u;
    {
        const bool branch_taken_0x250e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250e78) {
            ctx->pc = 0x250DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250dac;
        }
    }
    ctx->pc = 0x250E80u;
    // 0x250e80: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x250e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x250e84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x250e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250e88: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x250e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_250e8c:
    // 0x250e8c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x250e90: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x250e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x250e94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x250e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x250e98: 0xc042214  jal         func_108850
    ctx->pc = 0x250E98u;
    SET_GPR_U32(ctx, 31, 0x250EA0u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x250E98u, 0x250EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EA0u;
label_250ea0:
    // 0x250ea0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x250ea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250ea4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x250ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x250ea8: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x250EA8u;
    {
        const bool branch_taken_0x250ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250ea8) {
            ctx->pc = 0x250DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250da0;
        }
    }
    ctx->pc = 0x250EB0u;
    // 0x250eb0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x250eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x250eb4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x250eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x250eb8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x250EB8u;
    SET_GPR_U32(ctx, 31, 0x250EC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x250EB8u, 0x250EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EC0u;
label_250ec0:
    // 0x250ec0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x250ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x250ec4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x250ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x250ec8: 0x10020201  beq         $zero, $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x250EC8u;
    {
        const bool branch_taken_0x250ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x250ec8) {
            ctx->pc = 0x2516D0u;
            goto label_2516d0;
        }
    }
    ctx->pc = 0x250ED0u;
    // 0x250ed0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x250ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250ed4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x250ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x250ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250edc: 0x0  nop
    ctx->pc = 0x250edcu;
    // NOP
    // 0x250ee0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x250ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250ee4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x250EE4u;
    {
        const bool branch_taken_0x250ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250ee4) {
            ctx->pc = 0x250EFCu;
            goto label_250efc;
        }
    }
    ctx->pc = 0x250EECu;
    // 0x250eec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250eecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250ef0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x250ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x250ef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x250EF4u;
    {
        const bool branch_taken_0x250ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ef4) {
            ctx->pc = 0x250F10u;
            goto label_250f10;
        }
    }
    ctx->pc = 0x250EFCu;
label_250efc:
    // 0x250efc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x250efcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x250f00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250f04: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x250f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x250f08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x250f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x250f0c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x250f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_250f10:
    // 0x250f10: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x250f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250f14: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x250f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x250f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250f1c: 0x0  nop
    ctx->pc = 0x250f1cu;
    // NOP
    // 0x250f20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x250f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250f24: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x250F24u;
    {
        const bool branch_taken_0x250f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250f24) {
            ctx->pc = 0x250F3Cu;
            goto label_250f3c;
        }
    }
    ctx->pc = 0x250F2Cu;
    // 0x250f2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250f30: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x250f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x250f34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x250F34u;
    {
        const bool branch_taken_0x250f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250f34) {
            ctx->pc = 0x250F50u;
            goto label_250f50;
        }
    }
    ctx->pc = 0x250F3Cu;
label_250f3c:
    // 0x250f3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x250f3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x250f40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250f44: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x250f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x250f48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x250f4c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x250f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_250f50:
    // 0x250f50: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x250f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x250f54: 0xc092158  jal         func_248560
    ctx->pc = 0x250F54u;
    SET_GPR_U32(ctx, 31, 0x250F5Cu);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x250F54u, 0x250F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F5Cu;
label_250f5c:
    // 0x250f5c: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x250f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x250f60: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x250f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x250f64: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x250f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x250f68: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x250f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x250f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f70: 0xc090ae0  jal         func_242B80
    ctx->pc = 0x250F70u;
    SET_GPR_U32(ctx, 31, 0x250F78u);
    ctx->pc = 0x242B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242B80u, 0x250F70u, 0x250F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F78u;
label_250f78:
    // 0x250f78: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x250F78u;
    {
        const bool branch_taken_0x250f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250f78) {
            ctx->pc = 0x2516D0u;
            goto label_2516d0;
        }
    }
    ctx->pc = 0x250F80u;
label_250f80:
    // 0x250f80: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x250f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x250f84: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x250f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x250f88: 0xc091010  jal         func_244040
    ctx->pc = 0x250F88u;
    SET_GPR_U32(ctx, 31, 0x250F90u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x250F88u, 0x250F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F90u;
label_250f90:
    // 0x250f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250f94: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x250F94u;
    {
        const bool branch_taken_0x250f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250f94) {
            ctx->pc = 0x250FE8u;
            goto label_250fe8;
        }
    }
    ctx->pc = 0x250F9Cu;
    // 0x250f9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250fa0: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x250FA0u;
    {
        const bool branch_taken_0x250fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250fa0) {
            ctx->pc = 0x250FDCu;
            goto label_250fdc;
        }
    }
    ctx->pc = 0x250FA8u;
    // 0x250fa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x250fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250fac: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x250FACu;
    {
        const bool branch_taken_0x250fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x250fac) {
            ctx->pc = 0x250FD0u;
            goto label_250fd0;
        }
    }
    ctx->pc = 0x250FB4u;
    // 0x250fb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250FB4u;
    {
        const bool branch_taken_0x250fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fb4) {
            ctx->pc = 0x250FC4u;
            goto label_250fc4;
        }
    }
    ctx->pc = 0x250FBCu;
    // 0x250fbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x250FBCu;
    {
        const bool branch_taken_0x250fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fbc) {
            ctx->pc = 0x250FECu;
            goto label_250fec;
        }
    }
    ctx->pc = 0x250FC4u;
label_250fc4:
    // 0x250fc4: 0x36100100  ori         $s0, $s0, 0x100
    ctx->pc = 0x250fc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x250fc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x250FC8u;
    {
        const bool branch_taken_0x250fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fc8) {
            ctx->pc = 0x250FECu;
            goto label_250fec;
        }
    }
    ctx->pc = 0x250FD0u;
label_250fd0:
    // 0x250fd0: 0x36100200  ori         $s0, $s0, 0x200
    ctx->pc = 0x250fd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)512);
    // 0x250fd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x250FD4u;
    {
        const bool branch_taken_0x250fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fd4) {
            ctx->pc = 0x250FECu;
            goto label_250fec;
        }
    }
    ctx->pc = 0x250FDCu;
label_250fdc:
    // 0x250fdc: 0x36100400  ori         $s0, $s0, 0x400
    ctx->pc = 0x250fdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1024);
    // 0x250fe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x250FE0u;
    {
        const bool branch_taken_0x250fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fe0) {
            ctx->pc = 0x250FECu;
            goto label_250fec;
        }
    }
    ctx->pc = 0x250FE8u;
label_250fe8:
    // 0x250fe8: 0x36100800  ori         $s0, $s0, 0x800
    ctx->pc = 0x250fe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
label_250fec:
    // 0x250fec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x250fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ff0: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x250FF0u;
    {
        const bool branch_taken_0x250ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ff0) {
            ctx->pc = 0x251464u;
            goto label_251464;
        }
    }
    ctx->pc = 0x250FF8u;
label_250ff8:
    // 0x250ff8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x250ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ffc: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x250FFCu;
    {
        const bool branch_taken_0x250ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ffc) {
            ctx->pc = 0x251448u;
            goto label_251448;
        }
    }
    ctx->pc = 0x251004u;
label_251004:
    // 0x251004: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x251004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x251008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x251008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25100c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25100cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251010: 0xc094f5c  jal         func_253D70
    ctx->pc = 0x251010u;
    SET_GPR_U32(ctx, 31, 0x251018u);
    ctx->pc = 0x253D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253D70u, 0x251010u, 0x251018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251018u;
label_251018:
    // 0x251018: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x251018u;
    {
        const bool branch_taken_0x251018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251018) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251020u;
    // 0x251020: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x251020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251024: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25102c: 0x0  nop
    ctx->pc = 0x25102cu;
    // NOP
    // 0x251030: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251034: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251034u;
    {
        const bool branch_taken_0x251034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251034) {
            ctx->pc = 0x25104Cu;
            goto label_25104c;
        }
    }
    ctx->pc = 0x25103Cu;
    // 0x25103c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25103cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251040: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251044: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251044u;
    {
        const bool branch_taken_0x251044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251044) {
            ctx->pc = 0x251060u;
            goto label_251060;
        }
    }
    ctx->pc = 0x25104Cu;
label_25104c:
    // 0x25104c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25104cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251050: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251054: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251058: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x25105c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251060:
    // 0x251060: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x251060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x251064: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x251064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251068: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x25106c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25106cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251070: 0x0  nop
    ctx->pc = 0x251070u;
    // NOP
    // 0x251074: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251078: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251078u;
    {
        const bool branch_taken_0x251078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251078) {
            ctx->pc = 0x251090u;
            goto label_251090;
        }
    }
    ctx->pc = 0x251080u;
    // 0x251080: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251084: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251088: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251088u;
    {
        const bool branch_taken_0x251088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251088) {
            ctx->pc = 0x2510A4u;
            goto label_2510a4;
        }
    }
    ctx->pc = 0x251090u;
label_251090:
    // 0x251090: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251094: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251098: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25109c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2510a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2510a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2510a4:
    // 0x2510a4: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x2510a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2510a8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2510a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2510ac: 0xc092158  jal         func_248560
    ctx->pc = 0x2510ACu;
    SET_GPR_U32(ctx, 31, 0x2510B4u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2510ACu, 0x2510B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510B4u;
label_2510b4:
    // 0x2510b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2510b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2510b8: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x2510b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
    // 0x2510bc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2510bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2510c0: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x2510c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x2510c4: 0x32020300  andi        $v0, $s0, 0x300
    ctx->pc = 0x2510c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)768);
    // 0x2510c8: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2510C8u;
    {
        const bool branch_taken_0x2510c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510c8) {
            ctx->pc = 0x251288u;
            goto label_251288;
        }
    }
    ctx->pc = 0x2510D0u;
    // 0x2510d0: 0x16400034  bnez        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x2510D0u;
    {
        const bool branch_taken_0x2510d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2510d0) {
            ctx->pc = 0x2511A4u;
            goto label_2511a4;
        }
    }
    ctx->pc = 0x2510D8u;
    // 0x2510d8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2510d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2510dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2510dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2510e0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2510e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2510e4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2510e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2510e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2510e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2510ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2510ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2510f0: 0x0  nop
    ctx->pc = 0x2510f0u;
    // NOP
    // 0x2510f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2510f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2510f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2510F8u;
    {
        const bool branch_taken_0x2510f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2510f8) {
            ctx->pc = 0x251110u;
            goto label_251110;
        }
    }
    ctx->pc = 0x251100u;
    // 0x251100: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251104: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251108u;
    {
        const bool branch_taken_0x251108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251108) {
            ctx->pc = 0x251124u;
            goto label_251124;
        }
    }
    ctx->pc = 0x251110u;
label_251110:
    // 0x251110: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251110u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251118: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25111c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251120: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251124:
    // 0x251124: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x251124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x251128: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x251128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25112c: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x25112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251130: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251138: 0x0  nop
    ctx->pc = 0x251138u;
    // NOP
    // 0x25113c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25113cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251140: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251140u;
    {
        const bool branch_taken_0x251140 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251140) {
            ctx->pc = 0x251158u;
            goto label_251158;
        }
    }
    ctx->pc = 0x251148u;
    // 0x251148: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25114c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25114cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251150: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251150u;
    {
        const bool branch_taken_0x251150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251150) {
            ctx->pc = 0x25116Cu;
            goto label_25116c;
        }
    }
    ctx->pc = 0x251158u;
label_251158:
    // 0x251158: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25115c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25115cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251160: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251164: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251168: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25116c:
    // 0x25116c: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x25116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251170: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x251170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x251174: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x251174u;
    SET_GPR_U32(ctx, 31, 0x25117Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x251174u, 0x25117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25117Cu;
label_25117c:
    // 0x25117c: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x25117cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x251180: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x251180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x251184: 0x100200af  beq         $zero, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x251184u;
    {
        const bool branch_taken_0x251184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x251184) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x25118Cu;
    // 0x25118c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x25118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x251190: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x251190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x251194: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x251194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x251198: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x251198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25119c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x25119Cu;
    {
        const bool branch_taken_0x25119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25119c) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x2511A4u;
label_2511a4:
    // 0x2511a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2511a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2511a8: 0xc042214  jal         func_108850
    ctx->pc = 0x2511A8u;
    SET_GPR_U32(ctx, 31, 0x2511B0u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x2511A8u, 0x2511B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511B0u;
label_2511b0:
    // 0x2511b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2511b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2511b4: 0x164200a3  bne         $s2, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2511B4u;
    {
        const bool branch_taken_0x2511b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2511b4) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x2511BCu;
    // 0x2511bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2511bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2511c0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2511c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2511c4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2511c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2511c8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2511c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2511cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2511ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2511d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2511d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2511d4: 0x0  nop
    ctx->pc = 0x2511d4u;
    // NOP
    // 0x2511d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2511d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2511dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2511DCu;
    {
        const bool branch_taken_0x2511dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2511dc) {
            ctx->pc = 0x2511F4u;
            goto label_2511f4;
        }
    }
    ctx->pc = 0x2511E4u;
    // 0x2511e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2511e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2511e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2511e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2511ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2511ECu;
    {
        const bool branch_taken_0x2511ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2511ec) {
            ctx->pc = 0x251208u;
            goto label_251208;
        }
    }
    ctx->pc = 0x2511F4u;
label_2511f4:
    // 0x2511f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2511f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2511f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2511f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2511fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2511fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251200: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251204: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251208:
    // 0x251208: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x251208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25120c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x25120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251210: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x251210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251214: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25121c: 0x0  nop
    ctx->pc = 0x25121cu;
    // NOP
    // 0x251220: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251224: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251224u;
    {
        const bool branch_taken_0x251224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251224) {
            ctx->pc = 0x25123Cu;
            goto label_25123c;
        }
    }
    ctx->pc = 0x25122Cu;
    // 0x25122c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25122cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251230: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251234: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251234u;
    {
        const bool branch_taken_0x251234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251234) {
            ctx->pc = 0x251250u;
            goto label_251250;
        }
    }
    ctx->pc = 0x25123Cu;
label_25123c:
    // 0x25123c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25123cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251240: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251244: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251248: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x25124c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25124cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251250:
    // 0x251250: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x251250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251254: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x251254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x251258: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x251258u;
    SET_GPR_U32(ctx, 31, 0x251260u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x251258u, 0x251260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251260u;
label_251260:
    // 0x251260: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x251260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x251264: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x251264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x251268: 0x10020076  beq         $zero, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x251268u;
    {
        const bool branch_taken_0x251268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x251268) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251270u;
    // 0x251270: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x251270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x251274: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x251274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x251278: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x251278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x25127c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25127cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x251280: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x251280u;
    {
        const bool branch_taken_0x251280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251280) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251288u;
label_251288:
    // 0x251288: 0x32020c00  andi        $v0, $s0, 0xC00
    ctx->pc = 0x251288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3072);
    // 0x25128c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x25128Cu;
    {
        const bool branch_taken_0x25128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25128c) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251294u;
    // 0x251294: 0x16200034  bnez        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x251294u;
    {
        const bool branch_taken_0x251294 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x251294) {
            ctx->pc = 0x251368u;
            goto label_251368;
        }
    }
    ctx->pc = 0x25129Cu;
    // 0x25129c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x25129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2512a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2512a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2512a4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2512a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2512a8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2512a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2512acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2512b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2512b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2512b4: 0x0  nop
    ctx->pc = 0x2512b4u;
    // NOP
    // 0x2512b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2512b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2512bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2512BCu;
    {
        const bool branch_taken_0x2512bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2512bc) {
            ctx->pc = 0x2512D4u;
            goto label_2512d4;
        }
    }
    ctx->pc = 0x2512C4u;
    // 0x2512c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2512c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2512c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2512c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2512cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2512CCu;
    {
        const bool branch_taken_0x2512cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2512cc) {
            ctx->pc = 0x2512E8u;
            goto label_2512e8;
        }
    }
    ctx->pc = 0x2512D4u;
label_2512d4:
    // 0x2512d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2512d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2512d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2512d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2512dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2512dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2512e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2512e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2512e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2512e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2512e8:
    // 0x2512e8: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2512e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2512ec: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x2512ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2512f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2512f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2512f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2512f8: 0x0  nop
    ctx->pc = 0x2512f8u;
    // NOP
    // 0x2512fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2512fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251300: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251300u;
    {
        const bool branch_taken_0x251300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251300) {
            ctx->pc = 0x251318u;
            goto label_251318;
        }
    }
    ctx->pc = 0x251308u;
    // 0x251308: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25130c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25130cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251310u;
    {
        const bool branch_taken_0x251310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251310) {
            ctx->pc = 0x25132Cu;
            goto label_25132c;
        }
    }
    ctx->pc = 0x251318u;
label_251318:
    // 0x251318: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251318u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25131c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25131cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251320: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25132c:
    // 0x25132c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x25132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251330: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x251330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251334: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x251334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x251338: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x251338u;
    SET_GPR_U32(ctx, 31, 0x251340u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x251338u, 0x251340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251340u;
label_251340:
    // 0x251340: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x251340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x251344: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x251344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251348: 0x1002003e  beq         $zero, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x251348u;
    {
        const bool branch_taken_0x251348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x251348) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251350u;
    // 0x251350: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x251350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251354: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x251354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x251358: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x251358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x25135c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25135cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x251360: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x251360u;
    {
        const bool branch_taken_0x251360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251360) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251368u;
label_251368:
    // 0x251368: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x251368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25136c: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x25136Cu;
    SET_GPR_U32(ctx, 31, 0x251374u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x25136Cu, 0x251374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251374u;
label_251374:
    // 0x251374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x251374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251378: 0x16220032  bne         $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x251378u;
    {
        const bool branch_taken_0x251378 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x251378) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251380u;
    // 0x251380: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x251380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x251384: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x251384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x251388: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x251388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x25138c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x25138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251390: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251398: 0x0  nop
    ctx->pc = 0x251398u;
    // NOP
    // 0x25139c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25139cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2513a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2513A0u;
    {
        const bool branch_taken_0x2513a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2513a0) {
            ctx->pc = 0x2513B8u;
            goto label_2513b8;
        }
    }
    ctx->pc = 0x2513A8u;
    // 0x2513a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2513a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2513ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2513acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2513b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2513B0u;
    {
        const bool branch_taken_0x2513b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2513b0) {
            ctx->pc = 0x2513CCu;
            goto label_2513cc;
        }
    }
    ctx->pc = 0x2513B8u;
label_2513b8:
    // 0x2513b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2513b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2513bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2513bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2513c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2513c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2513c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2513c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2513c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2513c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2513cc:
    // 0x2513cc: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2513ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2513d0: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x2513d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2513d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2513d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2513d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2513dc: 0x0  nop
    ctx->pc = 0x2513dcu;
    // NOP
    // 0x2513e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2513e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2513e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2513E4u;
    {
        const bool branch_taken_0x2513e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2513e4) {
            ctx->pc = 0x2513FCu;
            goto label_2513fc;
        }
    }
    ctx->pc = 0x2513ECu;
    // 0x2513ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2513ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2513f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2513f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2513f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2513F4u;
    {
        const bool branch_taken_0x2513f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2513f4) {
            ctx->pc = 0x251410u;
            goto label_251410;
        }
    }
    ctx->pc = 0x2513FCu;
label_2513fc:
    // 0x2513fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2513fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251400: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251404: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251408: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x25140c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25140cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251410:
    // 0x251410: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x251410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251414: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x251414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251418: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x251418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25141c: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x25141Cu;
    SET_GPR_U32(ctx, 31, 0x251424u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x25141Cu, 0x251424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251424u;
label_251424:
    // 0x251424: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x251424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x251428: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x251428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x25142c: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25142Cu;
    {
        const bool branch_taken_0x25142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25142c) {
            ctx->pc = 0x251444u;
            goto label_251444;
        }
    }
    ctx->pc = 0x251434u;
    // 0x251434: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x251434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x251438: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x251438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25143c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x25143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x251440: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x251440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_251444:
    // 0x251444: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x251444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_251448:
    // 0x251448: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x251448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25144c: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x25144Cu;
    SET_GPR_U32(ctx, 31, 0x251454u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x25144Cu, 0x251454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251454u;
label_251454:
    // 0x251454: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x251454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251458: 0x1440feea  bnez        $v0, . + 4 + (-0x116 << 2)
    ctx->pc = 0x251458u;
    {
        const bool branch_taken_0x251458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251458) {
            ctx->pc = 0x251004u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251004;
        }
    }
    ctx->pc = 0x251460u;
    // 0x251460: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x251460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_251464:
    // 0x251464: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x251464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x251468: 0xc042214  jal         func_108850
    ctx->pc = 0x251468u;
    SET_GPR_U32(ctx, 31, 0x251470u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x251468u, 0x251470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251470u;
label_251470:
    // 0x251470: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x251470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251474: 0x1440fee0  bnez        $v0, . + 4 + (-0x120 << 2)
    ctx->pc = 0x251474u;
    {
        const bool branch_taken_0x251474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251474) {
            ctx->pc = 0x250FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250ff8;
        }
    }
    ctx->pc = 0x25147Cu;
    // 0x25147c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x25147Cu;
    {
        const bool branch_taken_0x25147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25147c) {
            ctx->pc = 0x2516D0u;
            goto label_2516d0;
        }
    }
    ctx->pc = 0x251484u;
label_251484:
    // 0x251484: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x251484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_251488:
    // 0x251488: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x251488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x25148c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x25148cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251490: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x251490u;
    {
        const bool branch_taken_0x251490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251490) {
            ctx->pc = 0x25158Cu;
            goto label_25158c;
        }
    }
    ctx->pc = 0x251498u;
label_251498:
    // 0x251498: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x251498u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25149c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25149Cu;
    {
        const bool branch_taken_0x25149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25149c) {
            ctx->pc = 0x251570u;
            goto label_251570;
        }
    }
    ctx->pc = 0x2514A4u;
label_2514a4:
    // 0x2514a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2514a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2514a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2514a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2514acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514b0: 0xc094f5c  jal         func_253D70
    ctx->pc = 0x2514B0u;
    SET_GPR_U32(ctx, 31, 0x2514B8u);
    ctx->pc = 0x253D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253D70u, 0x2514B0u, 0x2514B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514B8u;
label_2514b8:
    // 0x2514b8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2514B8u;
    {
        const bool branch_taken_0x2514b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2514b8) {
            ctx->pc = 0x25156Cu;
            goto label_25156c;
        }
    }
    ctx->pc = 0x2514C0u;
    // 0x2514c0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2514c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2514c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2514c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2514c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2514c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2514cc: 0x0  nop
    ctx->pc = 0x2514ccu;
    // NOP
    // 0x2514d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2514d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2514d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2514D4u;
    {
        const bool branch_taken_0x2514d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2514d4) {
            ctx->pc = 0x2514ECu;
            goto label_2514ec;
        }
    }
    ctx->pc = 0x2514DCu;
    // 0x2514dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2514dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2514e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2514e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2514e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2514E4u;
    {
        const bool branch_taken_0x2514e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2514e4) {
            ctx->pc = 0x251500u;
            goto label_251500;
        }
    }
    ctx->pc = 0x2514ECu;
label_2514ec:
    // 0x2514ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2514ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2514f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2514f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2514f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2514f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2514f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2514f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2514fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2514fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251500:
    // 0x251500: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x251500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x251504: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x251504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251508: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x25150c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25150cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251510: 0x0  nop
    ctx->pc = 0x251510u;
    // NOP
    // 0x251514: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251518: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251518u;
    {
        const bool branch_taken_0x251518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251518) {
            ctx->pc = 0x251530u;
            goto label_251530;
        }
    }
    ctx->pc = 0x251520u;
    // 0x251520: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251524: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251528: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251528u;
    {
        const bool branch_taken_0x251528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251528) {
            ctx->pc = 0x251544u;
            goto label_251544;
        }
    }
    ctx->pc = 0x251530u;
label_251530:
    // 0x251530: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251530u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251534: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251538: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25153c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25153cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251544:
    // 0x251544: 0x2c33021  addu        $a2, $s6, $v1
    ctx->pc = 0x251544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x251548: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x251548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25154c: 0xc092158  jal         func_248560
    ctx->pc = 0x25154Cu;
    SET_GPR_U32(ctx, 31, 0x251554u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x25154Cu, 0x251554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251554u;
label_251554:
    // 0x251554: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x251554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x251558: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x251558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25155c: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x25155cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x251560: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x251560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x251564: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x251564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x251568: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x251568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_25156c:
    // 0x25156c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25156cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_251570:
    // 0x251570: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x251570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x251574: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x251574u;
    SET_GPR_U32(ctx, 31, 0x25157Cu);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x251574u, 0x25157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25157Cu;
label_25157c:
    // 0x25157c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x25157cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251580: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x251580u;
    {
        const bool branch_taken_0x251580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251580) {
            ctx->pc = 0x2514A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2514a4;
        }
    }
    ctx->pc = 0x251588u;
    // 0x251588: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x251588u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_25158c:
    // 0x25158c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x251590: 0xc042214  jal         func_108850
    ctx->pc = 0x251590u;
    SET_GPR_U32(ctx, 31, 0x251598u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x251590u, 0x251598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251598u;
label_251598:
    // 0x251598: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x251598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25159c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x25159Cu;
    {
        const bool branch_taken_0x25159c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25159c) {
            ctx->pc = 0x251498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251498;
        }
    }
    ctx->pc = 0x2515A4u;
    // 0x2515a4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2515A4u;
    {
        const bool branch_taken_0x2515a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515a4) {
            ctx->pc = 0x2516D0u;
            goto label_2516d0;
        }
    }
    ctx->pc = 0x2515ACu;
label_2515ac:
    // 0x2515ac: 0x36100040  ori         $s0, $s0, 0x40
    ctx->pc = 0x2515acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x2515b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2515b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515b4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2515B4u;
    {
        const bool branch_taken_0x2515b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515b4) {
            ctx->pc = 0x2516B8u;
            goto label_2516b8;
        }
    }
    ctx->pc = 0x2515BCu;
label_2515bc:
    // 0x2515bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2515bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515c0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2515C0u;
    {
        const bool branch_taken_0x2515c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515c0) {
            ctx->pc = 0x25169Cu;
            goto label_25169c;
        }
    }
    ctx->pc = 0x2515C8u;
label_2515c8:
    // 0x2515c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2515c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2515cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2515ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2515d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515d4: 0xc094f5c  jal         func_253D70
    ctx->pc = 0x2515D4u;
    SET_GPR_U32(ctx, 31, 0x2515DCu);
    ctx->pc = 0x253D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253D70u, 0x2515D4u, 0x2515DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515DCu;
label_2515dc:
    // 0x2515dc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2515DCu;
    {
        const bool branch_taken_0x2515dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515dc) {
            ctx->pc = 0x251698u;
            goto label_251698;
        }
    }
    ctx->pc = 0x2515E4u;
    // 0x2515e4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2515e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2515e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2515e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2515ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2515ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2515f0: 0x0  nop
    ctx->pc = 0x2515f0u;
    // NOP
    // 0x2515f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2515f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2515f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2515F8u;
    {
        const bool branch_taken_0x2515f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2515f8) {
            ctx->pc = 0x251610u;
            goto label_251610;
        }
    }
    ctx->pc = 0x251600u;
    // 0x251600: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251600u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251604: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251608: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251608u;
    {
        const bool branch_taken_0x251608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251608) {
            ctx->pc = 0x251624u;
            goto label_251624;
        }
    }
    ctx->pc = 0x251610u;
label_251610:
    // 0x251610: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251614: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251618: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25161c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25161cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251624:
    // 0x251624: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x251624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x251628: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x251628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25162c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x25162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251634: 0x0  nop
    ctx->pc = 0x251634u;
    // NOP
    // 0x251638: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25163c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25163Cu;
    {
        const bool branch_taken_0x25163c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25163c) {
            ctx->pc = 0x251654u;
            goto label_251654;
        }
    }
    ctx->pc = 0x251644u;
    // 0x251644: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251648: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25164c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25164Cu;
    {
        const bool branch_taken_0x25164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25164c) {
            ctx->pc = 0x251668u;
            goto label_251668;
        }
    }
    ctx->pc = 0x251654u;
label_251654:
    // 0x251654: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251658: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25165c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25165cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251660: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251664: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251668:
    // 0x251668: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x251668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x25166c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x25166cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x251670: 0xc092158  jal         func_248560
    ctx->pc = 0x251670u;
    SET_GPR_U32(ctx, 31, 0x251678u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x251670u, 0x251678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251678u;
label_251678:
    // 0x251678: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x251678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x25167c: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x25167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x251680: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x251680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x251684: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x251684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x251688: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x251688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x25168c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x25168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x251690: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x251690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x251694: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x251694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_251698:
    // 0x251698: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x251698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_25169c:
    // 0x25169c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2516a0: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x2516A0u;
    SET_GPR_U32(ctx, 31, 0x2516A8u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x2516A0u, 0x2516A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2516A8u;
label_2516a8:
    // 0x2516a8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2516a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2516ac: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2516ACu;
    {
        const bool branch_taken_0x2516ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2516ac) {
            ctx->pc = 0x2515C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2515c8;
        }
    }
    ctx->pc = 0x2516B4u;
    // 0x2516b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2516b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2516b8:
    // 0x2516b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2516b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2516bc: 0xc042214  jal         func_108850
    ctx->pc = 0x2516BCu;
    SET_GPR_U32(ctx, 31, 0x2516C4u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x2516BCu, 0x2516C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2516C4u;
label_2516c4:
    // 0x2516c4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x2516c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2516c8: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2516C8u;
    {
        const bool branch_taken_0x2516c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2516c8) {
            ctx->pc = 0x2515BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2515bc;
        }
    }
    ctx->pc = 0x2516D0u;
label_2516d0:
    // 0x2516d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2516d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2516d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2516d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2516d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2516d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2516dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2516dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2516e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2516e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2516e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2516e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2516e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2516e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2516ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2516ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2516f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2516f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2516f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2516f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2516f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2516f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2516fc: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2516fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x251700: 0x3e00008  jr          $ra
    ctx->pc = 0x251700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251708u;
    // 0x251708: 0x0  nop
    ctx->pc = 0x251708u;
    // NOP
    // 0x25170c: 0x0  nop
    ctx->pc = 0x25170cu;
    // NOP
    ctx->pc = 0x251710u;
}
