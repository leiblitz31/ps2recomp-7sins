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

// Function: sub_002DB080
// Address: 0x2db080 - 0x2dc3c0
void sub_002DB080_0x2db080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB080_0x2db080");
#endif

    switch (ctx->pc) {
        case 0x2db0c0u: goto label_2db0c0;
        case 0x2db150u: goto label_2db150;
        case 0x2db1b8u: goto label_2db1b8;
        case 0x2db21cu: goto label_2db21c;
        case 0x2db240u: goto label_2db240;
        case 0x2db258u: goto label_2db258;
        case 0x2db270u: goto label_2db270;
        case 0x2db288u: goto label_2db288;
        case 0x2db294u: goto label_2db294;
        case 0x2db2a4u: goto label_2db2a4;
        case 0x2db2b4u: goto label_2db2b4;
        case 0x2db2c8u: goto label_2db2c8;
        case 0x2db2d8u: goto label_2db2d8;
        case 0x2db2e8u: goto label_2db2e8;
        case 0x2db340u: goto label_2db340;
        case 0x2db378u: goto label_2db378;
        case 0x2db390u: goto label_2db390;
        case 0x2db3a8u: goto label_2db3a8;
        case 0x2db3b8u: goto label_2db3b8;
        case 0x2db3c4u: goto label_2db3c4;
        case 0x2db3d8u: goto label_2db3d8;
        case 0x2db408u: goto label_2db408;
        case 0x2db418u: goto label_2db418;
        case 0x2db42cu: goto label_2db42c;
        case 0x2db43cu: goto label_2db43c;
        case 0x2db44cu: goto label_2db44c;
        case 0x2db464u: goto label_2db464;
        case 0x2db48cu: goto label_2db48c;
        case 0x2db4a0u: goto label_2db4a0;
        case 0x2db4d8u: goto label_2db4d8;
        case 0x2db4ecu: goto label_2db4ec;
        case 0x2db4fcu: goto label_2db4fc;
        case 0x2db50cu: goto label_2db50c;
        case 0x2db51cu: goto label_2db51c;
        case 0x2db55cu: goto label_2db55c;
        case 0x2db578u: goto label_2db578;
        case 0x2db59cu: goto label_2db59c;
        case 0x2db5acu: goto label_2db5ac;
        case 0x2db5dcu: goto label_2db5dc;
        case 0x2db5fcu: goto label_2db5fc;
        case 0x2db620u: goto label_2db620;
        case 0x2db678u: goto label_2db678;
        case 0x2db6a0u: goto label_2db6a0;
        case 0x2db738u: goto label_2db738;
        case 0x2db74cu: goto label_2db74c;
        case 0x2db764u: goto label_2db764;
        case 0x2db78cu: goto label_2db78c;
        case 0x2db7b4u: goto label_2db7b4;
        case 0x2db7c8u: goto label_2db7c8;
        case 0x2db878u: goto label_2db878;
        case 0x2db888u: goto label_2db888;
        case 0x2db8a0u: goto label_2db8a0;
        case 0x2db8b0u: goto label_2db8b0;
        case 0x2db8c8u: goto label_2db8c8;
        case 0x2db8d8u: goto label_2db8d8;
        case 0x2db8f0u: goto label_2db8f0;
        case 0x2db900u: goto label_2db900;
        case 0x2db920u: goto label_2db920;
        case 0x2db930u: goto label_2db930;
        case 0x2db950u: goto label_2db950;
        case 0x2db960u: goto label_2db960;
        case 0x2db9acu: goto label_2db9ac;
        case 0x2db9ccu: goto label_2db9cc;
        case 0x2db9e8u: goto label_2db9e8;
        case 0x2dba04u: goto label_2dba04;
        case 0x2dba24u: goto label_2dba24;
        case 0x2dba40u: goto label_2dba40;
        case 0x2dba5cu: goto label_2dba5c;
        case 0x2dba7cu: goto label_2dba7c;
        case 0x2dba98u: goto label_2dba98;
        case 0x2dbab4u: goto label_2dbab4;
        case 0x2dbad4u: goto label_2dbad4;
        case 0x2dbaf4u: goto label_2dbaf4;
        case 0x2dbb00u: goto label_2dbb00;
        case 0x2dbb10u: goto label_2dbb10;
        case 0x2dbb28u: goto label_2dbb28;
        case 0x2dbb38u: goto label_2dbb38;
        case 0x2dbb50u: goto label_2dbb50;
        case 0x2dbb60u: goto label_2dbb60;
        case 0x2dbb78u: goto label_2dbb78;
        case 0x2dbb88u: goto label_2dbb88;
        case 0x2dbba8u: goto label_2dbba8;
        case 0x2dbbb8u: goto label_2dbbb8;
        case 0x2dbbd8u: goto label_2dbbd8;
        case 0x2dbbe8u: goto label_2dbbe8;
        case 0x2dbc08u: goto label_2dbc08;
        case 0x2dbc1cu: goto label_2dbc1c;
        case 0x2dbc2cu: goto label_2dbc2c;
        case 0x2dbc44u: goto label_2dbc44;
        case 0x2dbc54u: goto label_2dbc54;
        case 0x2dbc84u: goto label_2dbc84;
        case 0x2dbca4u: goto label_2dbca4;
        case 0x2dbcc4u: goto label_2dbcc4;
        case 0x2dbce0u: goto label_2dbce0;
        case 0x2dbd00u: goto label_2dbd00;
        case 0x2dbd1cu: goto label_2dbd1c;
        case 0x2dbd28u: goto label_2dbd28;
        case 0x2dbd38u: goto label_2dbd38;
        case 0x2dbd50u: goto label_2dbd50;
        case 0x2dbd60u: goto label_2dbd60;
        case 0x2dbdb8u: goto label_2dbdb8;
        case 0x2dbdc8u: goto label_2dbdc8;
        case 0x2dbddcu: goto label_2dbddc;
        case 0x2dbe10u: goto label_2dbe10;
        case 0x2dbe24u: goto label_2dbe24;
        case 0x2dbe3cu: goto label_2dbe3c;
        case 0x2dbe8cu: goto label_2dbe8c;
        case 0x2dbe9cu: goto label_2dbe9c;
        case 0x2dbeb8u: goto label_2dbeb8;
        case 0x2dbef0u: goto label_2dbef0;
        case 0x2dbf08u: goto label_2dbf08;
        case 0x2dbf24u: goto label_2dbf24;
        case 0x2dbfecu: goto label_2dbfec;
        case 0x2dc004u: goto label_2dc004;
        case 0x2dc030u: goto label_2dc030;
        case 0x2dc044u: goto label_2dc044;
        case 0x2dc108u: goto label_2dc108;
        case 0x2dc11cu: goto label_2dc11c;
        case 0x2dc148u: goto label_2dc148;
        case 0x2dc160u: goto label_2dc160;
        case 0x2dc17cu: goto label_2dc17c;
        case 0x2dc18cu: goto label_2dc18c;
        case 0x2dc1b0u: goto label_2dc1b0;
        case 0x2dc1d0u: goto label_2dc1d0;
        case 0x2dc1f4u: goto label_2dc1f4;
        case 0x2dc200u: goto label_2dc200;
        case 0x2dc214u: goto label_2dc214;
        case 0x2dc260u: goto label_2dc260;
        case 0x2dc274u: goto label_2dc274;
        case 0x2dc284u: goto label_2dc284;
        case 0x2dc2ccu: goto label_2dc2cc;
        case 0x2dc2f8u: goto label_2dc2f8;
        case 0x2dc328u: goto label_2dc328;
        case 0x2dc33cu: goto label_2dc33c;
        case 0x2dc350u: goto label_2dc350;
        case 0x2dc364u: goto label_2dc364;
        case 0x2dc384u: goto label_2dc384;
        default: break;
    }

    ctx->pc = 0x2db080u;

label_2db080:
    // 0x2db080: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2db080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2db084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2db088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db090: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2db090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2db094: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x2db094u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2db098: 0xe7ad0090  swc1        $f13, 0x90($sp)
    ctx->pc = 0x2db098u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2db09c: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x2db09cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2db0a0: 0xe7af00b0  swc1        $f15, 0xB0($sp)
    ctx->pc = 0x2db0a0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2db0a4: 0xe7b000c0  swc1        $f16, 0xC0($sp)
    ctx->pc = 0x2db0a4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2db0a8: 0xe7b100d0  swc1        $f17, 0xD0($sp)
    ctx->pc = 0x2db0a8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2db0ac: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db0b0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db0b4: 0x24a5e448  addiu       $a1, $a1, -0x1BB8
    ctx->pc = 0x2db0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960200));
    // 0x2db0b8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2DB0B8u;
    SET_GPR_U32(ctx, 31, 0x2DB0C0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2DB0B8u, 0x2DB0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0C0u;
label_2db0c0:
    // 0x2db0c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2db0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0c4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2db0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db0c8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2db0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db0cc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2db0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db0d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2db0d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2db0d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2db0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2db0d8: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2db0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db0dc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2db0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db0e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2db0e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2db0e4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2db0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2db0e8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2db0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db0ec: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2db0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db0f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2db0f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2db0f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2db0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2db0f8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2db0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db100: 0x0  nop
    ctx->pc = 0x2db100u;
    // NOP
    // 0x2db104: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db108: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x2DB108u;
    {
        const bool branch_taken_0x2db108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db108) {
            ctx->pc = 0x2DB15Cu;
            goto label_2db15c;
        }
    }
    ctx->pc = 0x2DB110u;
    // 0x2db110: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2db110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db114: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2db114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db11c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DB11Cu;
    {
        const bool branch_taken_0x2db11c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db11c) {
            ctx->pc = 0x2DB15Cu;
            goto label_2db15c;
        }
    }
    ctx->pc = 0x2DB124u;
    // 0x2db124: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2db124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db128: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2db128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db12c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db130: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2DB130u;
    {
        const bool branch_taken_0x2db130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db130) {
            ctx->pc = 0x2DB15Cu;
            goto label_2db15c;
        }
    }
    ctx->pc = 0x2DB138u;
    // 0x2db138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db13c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2db13cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db140: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db144: 0x2785a530  addiu       $a1, $gp, -0x5AD0
    ctx->pc = 0x2db144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x2db148: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2DB148u;
    SET_GPR_U32(ctx, 31, 0x2DB150u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2DB148u, 0x2DB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB150u;
label_2db150:
    // 0x2db150: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2db150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2db154: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2DB154u;
    {
        const bool branch_taken_0x2db154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db154) {
            ctx->pc = 0x2DB220u;
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB15Cu;
label_2db15c:
    // 0x2db15c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2db15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db164: 0x0  nop
    ctx->pc = 0x2db164u;
    // NOP
    // 0x2db168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db16c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB16Cu;
    {
        const bool branch_taken_0x2db16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db16c) {
            ctx->pc = 0x2DB1C4u;
            goto label_2db1c4;
        }
    }
    ctx->pc = 0x2DB174u;
    // 0x2db174: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2db174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db178: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2db178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db17c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db180: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2DB180u;
    {
        const bool branch_taken_0x2db180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db180) {
            ctx->pc = 0x2DB1C4u;
            goto label_2db1c4;
        }
    }
    ctx->pc = 0x2DB188u;
    // 0x2db188: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2db188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db18c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2db18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db190: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db194: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2DB194u;
    {
        const bool branch_taken_0x2db194 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db194) {
            ctx->pc = 0x2DB1C4u;
            goto label_2db1c4;
        }
    }
    ctx->pc = 0x2DB19Cu;
    // 0x2db19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db1a0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2db1a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db1a4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db1a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db1ac: 0x24a5e458  addiu       $a1, $a1, -0x1BA8
    ctx->pc = 0x2db1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960216));
    // 0x2db1b0: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2DB1B0u;
    SET_GPR_U32(ctx, 31, 0x2DB1B8u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2DB1B0u, 0x2DB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB1B8u;
label_2db1b8:
    // 0x2db1b8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2db1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2db1bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2DB1BCu;
    {
        const bool branch_taken_0x2db1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1bc) {
            ctx->pc = 0x2DB220u;
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB1C4u;
label_2db1c4:
    // 0x2db1c4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2db1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db1cc: 0x0  nop
    ctx->pc = 0x2db1ccu;
    // NOP
    // 0x2db1d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db1d4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB1D4u;
    {
        const bool branch_taken_0x2db1d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db1d4) {
            ctx->pc = 0x2DB220u;
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB1DCu;
    // 0x2db1dc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2db1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db1e0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2db1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db1e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db1e8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2DB1E8u;
    {
        const bool branch_taken_0x2db1e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db1e8) {
            ctx->pc = 0x2DB220u;
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB1F0u;
    // 0x2db1f0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2db1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db1f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2db1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db1f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db1fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB1FCu;
    {
        const bool branch_taken_0x2db1fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db1fc) {
            ctx->pc = 0x2DB220u;
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB204u;
    // 0x2db204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db208: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2db208u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db20c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db210: 0x2785a538  addiu       $a1, $gp, -0x5AC8
    ctx->pc = 0x2db210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944056));
    // 0x2db214: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2DB214u;
    SET_GPR_U32(ctx, 31, 0x2DB21Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2DB214u, 0x2DB21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB21Cu;
label_2db21c:
    // 0x2db21c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x2db21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2db220:
    // 0x2db220: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DB220u;
    {
        const bool branch_taken_0x2db220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db220) {
            ctx->pc = 0x2DB2D8u;
            goto label_2db2d8;
        }
    }
    ctx->pc = 0x2DB228u;
    // 0x2db228: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2db228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db22c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB22Cu;
    {
        const bool branch_taken_0x2db22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db22c) {
            ctx->pc = 0x2DB278u;
            goto label_2db278;
        }
    }
    ctx->pc = 0x2DB234u;
    // 0x2db234: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2db234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db238: 0xc096950  jal         func_25A540
    ctx->pc = 0x2DB238u;
    SET_GPR_U32(ctx, 31, 0x2DB240u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2DB238u, 0x2DB240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB240u;
label_2db240:
    // 0x2db240: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB240u;
    {
        const bool branch_taken_0x2db240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db240) {
            ctx->pc = 0x2DB260u;
            goto label_2db260;
        }
    }
    ctx->pc = 0x2DB248u;
    // 0x2db248: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db24c: 0x2785a53c  addiu       $a1, $gp, -0x5AC4
    ctx->pc = 0x2db24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944060));
    // 0x2db250: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2DB250u;
    SET_GPR_U32(ctx, 31, 0x2DB258u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2DB250u, 0x2DB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB258u;
label_2db258:
    // 0x2db258: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB258u;
    {
        const bool branch_taken_0x2db258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db258) {
            ctx->pc = 0x2DB288u;
            goto label_2db288;
        }
    }
    ctx->pc = 0x2DB260u;
label_2db260:
    // 0x2db260: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db264: 0x2785a540  addiu       $a1, $gp, -0x5AC0
    ctx->pc = 0x2db264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944064));
    // 0x2db268: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2DB268u;
    SET_GPR_U32(ctx, 31, 0x2DB270u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2DB268u, 0x2DB270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB270u;
label_2db270:
    // 0x2db270: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB270u;
    {
        const bool branch_taken_0x2db270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db270) {
            ctx->pc = 0x2DB288u;
            goto label_2db288;
        }
    }
    ctx->pc = 0x2DB278u;
label_2db278:
    // 0x2db278: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db27c: 0x2785a544  addiu       $a1, $gp, -0x5ABC
    ctx->pc = 0x2db27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944068));
    // 0x2db280: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2DB280u;
    SET_GPR_U32(ctx, 31, 0x2DB288u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2DB280u, 0x2DB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB288u;
label_2db288:
    // 0x2db288: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db28c: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2DB28Cu;
    SET_GPR_U32(ctx, 31, 0x2DB294u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2DB28Cu, 0x2DB294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB294u;
label_2db294:
    // 0x2db294: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x2db294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x2db298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db29c: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x2DB29Cu;
    SET_GPR_U32(ctx, 31, 0x2DB2A4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x2DB29Cu, 0x2DB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2A4u;
label_2db2a4:
    // 0x2db2a4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2db2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2db2a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db2ac: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x2DB2ACu;
    SET_GPR_U32(ctx, 31, 0x2DB2B4u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x2DB2ACu, 0x2DB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2B4u;
label_2db2b4:
    // 0x2db2b4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db2b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2db2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db2bc: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x2db2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2db2c0: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x2DB2C0u;
    SET_GPR_U32(ctx, 31, 0x2DB2C8u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x2DB2C0u, 0x2DB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2C8u;
label_2db2c8:
    // 0x2db2c8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2db2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2db2cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2db2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2db2d0: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x2DB2D0u;
    SET_GPR_U32(ctx, 31, 0x2DB2D8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x2DB2D0u, 0x2DB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2D8u;
label_2db2d8:
    // 0x2db2d8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2db2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db2dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2db2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2db2e0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2DB2E0u;
    SET_GPR_U32(ctx, 31, 0x2DB2E8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2DB2E0u, 0x2DB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2E8u;
label_2db2e8:
    // 0x2db2e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db2f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2db2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2db2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB300u;
    // 0x2db300: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2db300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2db304: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2db304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2db308: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2db308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2db30c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2db30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2db310: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2db310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2db314: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2db314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2db318: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2db318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2db31c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2db31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2db320: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2db320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2db324: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2db324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2db328: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2db328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2db32c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2db32cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2db330: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x2db330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    // 0x2db334: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2db334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db338: 0xc09d248  jal         func_274920
    ctx->pc = 0x2DB338u;
    SET_GPR_U32(ctx, 31, 0x2DB340u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2DB338u, 0x2DB340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB340u;
label_2db340:
    // 0x2db340: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2db340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db344: 0x10430409  beq         $v0, $v1, . + 4 + (0x409 << 2)
    ctx->pc = 0x2DB344u;
    {
        const bool branch_taken_0x2db344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db344) {
            ctx->pc = 0x2DC36Cu;
            goto label_2dc36c;
        }
    }
    ctx->pc = 0x2DB34Cu;
    // 0x2db34c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db350: 0x1044040c  beq         $v0, $a0, . + 4 + (0x40C << 2)
    ctx->pc = 0x2DB350u;
    {
        const bool branch_taken_0x2db350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2db350) {
            ctx->pc = 0x2DC384u;
            goto label_2dc384;
        }
    }
    ctx->pc = 0x2DB358u;
    // 0x2db358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db35c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB35Cu;
    {
        const bool branch_taken_0x2db35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db35c) {
            ctx->pc = 0x2DB36Cu;
            goto label_2db36c;
        }
    }
    ctx->pc = 0x2DB364u;
    // 0x2db364: 0x10000407  b           . + 4 + (0x407 << 2)
    ctx->pc = 0x2DB364u;
    {
        const bool branch_taken_0x2db364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db364) {
            ctx->pc = 0x2DC384u;
            goto label_2dc384;
        }
    }
    ctx->pc = 0x2DB36Cu;
label_2db36c:
    // 0x2db36c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2db36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db370: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x2DB370u;
    SET_GPR_U32(ctx, 31, 0x2DB378u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x2DB370u, 0x2DB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB378u;
label_2db378:
    // 0x2db378: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2db378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db37c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2db37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2db380: 0xa3a0016f  sb          $zero, 0x16F($sp)
    ctx->pc = 0x2db380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db384: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2db384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db388: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2DB388u;
    SET_GPR_U32(ctx, 31, 0x2DB390u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2DB388u, 0x2DB390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB390u;
label_2db390:
    // 0x2db390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db394: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db398: 0x24a5e470  addiu       $a1, $a1, -0x1B90
    ctx->pc = 0x2db398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960240));
    // 0x2db39c: 0x2786a548  addiu       $a2, $gp, -0x5AB8
    ctx->pc = 0x2db39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944072));
    // 0x2db3a0: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2DB3A0u;
    SET_GPR_U32(ctx, 31, 0x2DB3A8u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2DB3A0u, 0x2DB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3A8u;
label_2db3a8:
    // 0x2db3a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2db3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2db3ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3b0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2DB3B0u;
    SET_GPR_U32(ctx, 31, 0x2DB3B8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2DB3B0u, 0x2DB3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3B8u;
label_2db3b8:
    // 0x2db3b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2db3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2db3bc: 0xc050ee0  jal         func_143B80
    ctx->pc = 0x2DB3BCu;
    SET_GPR_U32(ctx, 31, 0x2DB3C4u);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x2DB3BCu, 0x2DB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3C4u;
label_2db3c4:
    // 0x2db3c4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB3C4u;
    {
        const bool branch_taken_0x2db3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db3c4) {
            ctx->pc = 0x2DB3F8u;
            goto label_2db3f8;
        }
    }
    ctx->pc = 0x2DB3CCu;
    // 0x2db3cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2db3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2db3d0: 0xc045768  jal         func_115DA0
    ctx->pc = 0x2DB3D0u;
    SET_GPR_U32(ctx, 31, 0x2DB3D8u);
    ctx->pc = 0x115DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA0u, 0x2DB3D0u, 0x2DB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3D8u;
label_2db3d8:
    // 0x2db3d8: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x2db3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x2db3dc: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2db3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2db3e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB3E0u;
    {
        const bool branch_taken_0x2db3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db3e0) {
            ctx->pc = 0x2DB3F8u;
            goto label_2db3f8;
        }
    }
    ctx->pc = 0x2DB3E8u;
    // 0x2db3e8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2db3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2db3ec: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2db3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2db3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db3f4: 0xa3a2016f  sb          $v0, 0x16F($sp)
    ctx->pc = 0x2db3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 2));
label_2db3f8:
    // 0x2db3f8: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2db3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2db3fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2db3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2db400: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DB400u;
    SET_GPR_U32(ctx, 31, 0x2DB408u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DB400u, 0x2DB408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB408u;
label_2db408:
    // 0x2db408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2db408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db40c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2db40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db410: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x2DB410u;
    SET_GPR_U32(ctx, 31, 0x2DB418u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x2DB410u, 0x2DB418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB418u;
label_2db418:
    // 0x2db418: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x2db418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db41c: 0xa3a3016e  sb          $v1, 0x16E($sp)
    ctx->pc = 0x2db41cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 366), (uint8_t)GPR_U32(ctx, 3));
    // 0x2db420: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2db420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db424: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x2DB424u;
    SET_GPR_U32(ctx, 31, 0x2DB42Cu);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x2DB424u, 0x2DB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB42Cu;
label_2db42c:
    // 0x2db42c: 0x8c5e0014  lw          $fp, 0x14($v0)
    ctx->pc = 0x2db42cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2db430: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2db430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db434: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2DB434u;
    SET_GPR_U32(ctx, 31, 0x2DB43Cu);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2DB434u, 0x2DB43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB43Cu;
label_2db43c:
    // 0x2db43c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2db43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2db440: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2db440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db444: 0xc048094  jal         func_120250
    ctx->pc = 0x2DB444u;
    SET_GPR_U32(ctx, 31, 0x2DB44Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2DB444u, 0x2DB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB44Cu;
label_2db44c:
    // 0x2db44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db450: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db454: 0x24a5e480  addiu       $a1, $a1, -0x1B80
    ctx->pc = 0x2db454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960256));
    // 0x2db458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db45c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DB45Cu;
    SET_GPR_U32(ctx, 31, 0x2DB464u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DB45Cu, 0x2DB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB464u;
label_2db464:
    // 0x2db464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db468: 0x0  nop
    ctx->pc = 0x2db468u;
    // NOP
    // 0x2db46c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2db46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2db470: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2db470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2db474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db478: 0x0  nop
    ctx->pc = 0x2db478u;
    // NOP
    // 0x2db47c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2db47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2db480: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2db480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db484: 0xc048094  jal         func_120250
    ctx->pc = 0x2DB484u;
    SET_GPR_U32(ctx, 31, 0x2DB48Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2DB484u, 0x2DB48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB48Cu;
label_2db48c:
    // 0x2db48c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db490: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x2db490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x2db494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db498: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2DB498u;
    SET_GPR_U32(ctx, 31, 0x2DB4A0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2DB498u, 0x2DB4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4A0u;
label_2db4a0:
    // 0x2db4a0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x2db4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x2db4a4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2db4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db4a8: 0x8c530040  lw          $s3, 0x40($v0)
    ctx->pc = 0x2db4a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2db4ac: 0x93a5016f  lbu         $a1, 0x16F($sp)
    ctx->pc = 0x2db4acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2db4b0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB4B0u;
    {
        const bool branch_taken_0x2db4b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4b0) {
            ctx->pc = 0x2DB4BCu;
            goto label_2db4bc;
        }
    }
    ctx->pc = 0x2DB4B8u;
    // 0x2db4b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2db4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db4bc:
    // 0x2db4bc: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x2db4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x2db4c0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB4C0u;
    {
        const bool branch_taken_0x2db4c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4c0) {
            ctx->pc = 0x2DB4DCu;
            goto label_2db4dc;
        }
    }
    ctx->pc = 0x2DB4C8u;
    // 0x2db4c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2db4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2db4d0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DB4D0u;
    SET_GPR_U32(ctx, 31, 0x2DB4D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DB4D0u, 0x2DB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4D8u;
label_2db4d8:
    // 0x2db4d8: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x2db4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_2db4dc:
    // 0x2db4dc: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2db4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2db4e0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2db4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2db4e4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DB4E4u;
    SET_GPR_U32(ctx, 31, 0x2DB4ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DB4E4u, 0x2DB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4ECu;
label_2db4ec:
    // 0x2db4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2db4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4f4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB4F4u;
    SET_GPR_U32(ctx, 31, 0x2DB4FCu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB4F4u, 0x2DB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4FCu;
label_2db4fc:
    // 0x2db4fc: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2db4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x2db500: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2db500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db504: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB504u;
    {
        const bool branch_taken_0x2db504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db504) {
            ctx->pc = 0x2DB534u;
            goto label_2db534;
        }
    }
    ctx->pc = 0x2DB50Cu;
label_2db50c:
    // 0x2db50c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2db50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2db510: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2db510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db514: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DB514u;
    SET_GPR_U32(ctx, 31, 0x2DB51Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DB514u, 0x2DB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB51Cu;
label_2db51c:
    // 0x2db51c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2db51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db520: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2db520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db524: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2db524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2db528: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2db528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2db52c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2db52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2db530: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2db530u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2db534:
    // 0x2db534: 0x2ea40007  sltiu       $a0, $s5, 0x7
    ctx->pc = 0x2db534u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2db538: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DB538u;
    {
        const bool branch_taken_0x2db538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db538) {
            ctx->pc = 0x2DB50Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db50c;
        }
    }
    ctx->pc = 0x2DB540u;
    // 0x2db540: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2db540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db544: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB544u;
    {
        const bool branch_taken_0x2db544 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db544) {
            ctx->pc = 0x2DB568u;
            goto label_2db568;
        }
    }
    ctx->pc = 0x2DB54Cu;
    // 0x2db54c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db550: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2db550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2db554: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DB554u;
    SET_GPR_U32(ctx, 31, 0x2DB55Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DB554u, 0x2DB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB55Cu;
label_2db55c:
    // 0x2db55c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2db55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB560u;
    {
        const bool branch_taken_0x2db560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db560) {
            ctx->pc = 0x2DB56Cu;
            goto label_2db56c;
        }
    }
    ctx->pc = 0x2DB568u;
label_2db568:
    // 0x2db568: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2db568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db56c:
    // 0x2db56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db570: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB570u;
    SET_GPR_U32(ctx, 31, 0x2DB578u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB570u, 0x2DB578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB578u;
label_2db578:
    // 0x2db578: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2db578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x2db57c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2db57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db580: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x2db580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2db584: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2db584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db588: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db58c: 0x24a5e490  addiu       $a1, $a1, -0x1B70
    ctx->pc = 0x2db58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
    // 0x2db590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db594: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DB594u;
    SET_GPR_U32(ctx, 31, 0x2DB59Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DB594u, 0x2DB59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB59Cu;
label_2db59c:
    // 0x2db59c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x2db59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x2db5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5a4: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2DB5A4u;
    SET_GPR_U32(ctx, 31, 0x2DB5ACu);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2DB5A4u, 0x2DB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5ACu;
label_2db5ac:
    // 0x2db5ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB5ACu;
    {
        const bool branch_taken_0x2db5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5ac) {
            ctx->pc = 0x2DB5C0u;
            goto label_2db5c0;
        }
    }
    ctx->pc = 0x2DB5B4u;
    // 0x2db5b4: 0xafb20140  sw          $s2, 0x140($sp)
    ctx->pc = 0x2db5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
    // 0x2db5b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB5B8u;
    {
        const bool branch_taken_0x2db5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5b8) {
            ctx->pc = 0x2DB5C4u;
            goto label_2db5c4;
        }
    }
    ctx->pc = 0x2DB5C0u;
label_2db5c0:
    // 0x2db5c0: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x2db5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
label_2db5c4:
    // 0x2db5c4: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x2db5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2db5c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2db5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2db5cc: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x2db5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2db5d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2db5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5d4: 0xc0984a4  jal         func_261290
    ctx->pc = 0x2DB5D4u;
    SET_GPR_U32(ctx, 31, 0x2DB5DCu);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x2DB5D4u, 0x2DB5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5DCu;
label_2db5dc:
    // 0x2db5dc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2db5dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2db5e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2db5e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2db5e4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2DB5E4u;
    {
        const bool branch_taken_0x2db5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5e4) {
            ctx->pc = 0x2DB620u;
            goto label_2db620;
        }
    }
    ctx->pc = 0x2DB5ECu;
    // 0x2db5ec: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2db5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2db5f0: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x2db5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2db5f4: 0xc098500  jal         func_261400
    ctx->pc = 0x2DB5F4u;
    SET_GPR_U32(ctx, 31, 0x2DB5FCu);
    ctx->pc = 0x261400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261400u, 0x2DB5F4u, 0x2DB5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5FCu;
label_2db5fc:
    // 0x2db5fc: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x2db5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2db600: 0x24a70011  addiu       $a3, $a1, 0x11
    ctx->pc = 0x2db600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 17));
    // 0x2db604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db608: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2db608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db60c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db614: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2db614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db618: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x2DB618u;
    SET_GPR_U32(ctx, 31, 0x2DB620u);
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x2DB618u, 0x2DB620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB620u;
label_2db620:
    // 0x2db620: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db628: 0x0  nop
    ctx->pc = 0x2db628u;
    // NOP
    // 0x2db62c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2db630: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DB630u;
    {
        const bool branch_taken_0x2db630 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db630) {
            ctx->pc = 0x2DB6FCu;
            goto label_2db6fc;
        }
    }
    ctx->pc = 0x2DB638u;
    // 0x2db638: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x2db638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2db63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db640: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB640u;
    {
        const bool branch_taken_0x2db640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2db640) {
            ctx->pc = 0x2DB668u;
            goto label_2db668;
        }
    }
    ctx->pc = 0x2DB648u;
    // 0x2db648: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2db648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2db64c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB64Cu;
    {
        const bool branch_taken_0x2db64c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2db64c) {
            ctx->pc = 0x2DB668u;
            goto label_2db668;
        }
    }
    ctx->pc = 0x2DB654u;
    // 0x2db654: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2db654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2db658: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB658u;
    {
        const bool branch_taken_0x2db658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2db658) {
            ctx->pc = 0x2DB668u;
            goto label_2db668;
        }
    }
    ctx->pc = 0x2DB660u;
    // 0x2db660: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DB660u;
    {
        const bool branch_taken_0x2db660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db660) {
            ctx->pc = 0x2DB6FCu;
            goto label_2db6fc;
        }
    }
    ctx->pc = 0x2DB668u;
label_2db668:
    // 0x2db668: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2db668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2db66c: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x2db66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db670: 0xc0b0614  jal         func_2C1850
    ctx->pc = 0x2DB670u;
    SET_GPR_U32(ctx, 31, 0x2DB678u);
    ctx->pc = 0x2C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1850u, 0x2DB670u, 0x2DB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB678u;
label_2db678:
    // 0x2db678: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2db678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2db67c: 0x93a5016e  lbu         $a1, 0x16E($sp)
    ctx->pc = 0x2db67cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 366)));
    // 0x2db680: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DB680u;
    {
        const bool branch_taken_0x2db680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db680) {
            ctx->pc = 0x2DB6FCu;
            goto label_2db6fc;
        }
    }
    ctx->pc = 0x2DB688u;
    // 0x2db688: 0x8f87bcb0  lw          $a3, -0x4350($gp)
    ctx->pc = 0x2db688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2db68c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2db68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db694: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x2db694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2db698: 0xc0b06b0  jal         func_2C1AC0
    ctx->pc = 0x2DB698u;
    SET_GPR_U32(ctx, 31, 0x2DB6A0u);
    ctx->pc = 0x2C1AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1AC0u, 0x2DB698u, 0x2DB6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6A0u;
label_2db6a0:
    // 0x2db6a0: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2db6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db6a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2db6a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2db6a8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2db6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2db6ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db6b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db6b4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2db6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db6b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2db6b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db6bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB6BCu;
    {
        const bool branch_taken_0x2db6bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db6bc) {
            ctx->pc = 0x2DB6D4u;
            goto label_2db6d4;
        }
    }
    ctx->pc = 0x2DB6C4u;
    // 0x2db6c4: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x2db6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db6c8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2db6cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB6CCu;
    {
        const bool branch_taken_0x2db6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db6cc) {
            ctx->pc = 0x2DB6FCu;
            goto label_2db6fc;
        }
    }
    ctx->pc = 0x2DB6D4u;
label_2db6d4:
    // 0x2db6d4: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x2db6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db6e0: 0x0  nop
    ctx->pc = 0x2db6e0u;
    // NOP
    // 0x2db6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db6e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB6E8u;
    {
        const bool branch_taken_0x2db6e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db6e8) {
            ctx->pc = 0x2DB6FCu;
            goto label_2db6fc;
        }
    }
    ctx->pc = 0x2DB6F0u;
    // 0x2db6f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db6f4: 0x0  nop
    ctx->pc = 0x2db6f4u;
    // NOP
    // 0x2db6f8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_2db6fc:
    // 0x2db6fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db704: 0x0  nop
    ctx->pc = 0x2db704u;
    // NOP
    // 0x2db708: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2db708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2db70c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2db70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2db710: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2db710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db714: 0x0  nop
    ctx->pc = 0x2db714u;
    // NOP
    // 0x2db718: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2db718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2db71c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2db71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2db720: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2db720u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db724: 0x0  nop
    ctx->pc = 0x2db724u;
    // NOP
    // 0x2db728: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2db728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2db72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db730: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2DB730u;
    SET_GPR_U32(ctx, 31, 0x2DB738u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2DB730u, 0x2DB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB738u;
label_2db738:
    // 0x2db738: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2DB738u;
    {
        const bool branch_taken_0x2db738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db738) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB740u;
    // 0x2db740: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2db740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db744: 0xc048094  jal         func_120250
    ctx->pc = 0x2DB744u;
    SET_GPR_U32(ctx, 31, 0x2DB74Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2DB744u, 0x2DB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB74Cu;
label_2db74c:
    // 0x2db74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db750: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db754: 0x24a5e4a8  addiu       $a1, $a1, -0x1B58
    ctx->pc = 0x2db754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960296));
    // 0x2db758: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2db758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2db75c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DB75Cu;
    SET_GPR_U32(ctx, 31, 0x2DB764u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DB75Cu, 0x2DB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB764u;
label_2db764:
    // 0x2db764: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2db764u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db768: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2db768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2db76c: 0x12e2003f  beq         $s7, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2DB76Cu;
    {
        const bool branch_taken_0x2db76c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2db76c) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB774u;
    // 0x2db774: 0x1250003d  beq         $s2, $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2DB774u;
    {
        const bool branch_taken_0x2db774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x2db774) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB77Cu;
    // 0x2db77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db780: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2db780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db784: 0xc098098  jal         func_260260
    ctx->pc = 0x2DB784u;
    SET_GPR_U32(ctx, 31, 0x2DB78Cu);
    ctx->pc = 0x260260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260260u, 0x2DB784u, 0x2DB78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB78Cu;
label_2db78c:
    // 0x2db78c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2db78cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db790: 0x93a5016e  lbu         $a1, 0x16E($sp)
    ctx->pc = 0x2db790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 366)));
    // 0x2db794: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DB794u;
    {
        const bool branch_taken_0x2db794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db794) {
            ctx->pc = 0x2DB828u;
            goto label_2db828;
        }
    }
    ctx->pc = 0x2DB79Cu;
    // 0x2db79c: 0x1ac00033  blez        $s6, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB79Cu;
    {
        const bool branch_taken_0x2db79c = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2db79c) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB7A4u;
    // 0x2db7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2db7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7ac: 0xc098090  jal         func_260240
    ctx->pc = 0x2DB7ACu;
    SET_GPR_U32(ctx, 31, 0x2DB7B4u);
    ctx->pc = 0x260240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260240u, 0x2DB7ACu, 0x2DB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7B4u;
label_2db7b4:
    // 0x2db7b4: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x2db7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x2db7b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2db7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7c0: 0xc098090  jal         func_260240
    ctx->pc = 0x2DB7C0u;
    SET_GPR_U32(ctx, 31, 0x2DB7C8u);
    ctx->pc = 0x260240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260240u, 0x2DB7C0u, 0x2DB7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7C8u;
label_2db7c8:
    // 0x2db7c8: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2db7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x2db7cc: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x2db7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2db7d0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2db7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2db7d4: 0xa2a023  subu        $s4, $a1, $v0
    ctx->pc = 0x2db7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2db7d8: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB7D8u;
    {
        const bool branch_taken_0x2db7d8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2db7d8) {
            ctx->pc = 0x2DB7E4u;
            goto label_2db7e4;
        }
    }
    ctx->pc = 0x2DB7E0u;
    // 0x2db7e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2db7e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db7e4:
    // 0x2db7e4: 0x296a021  addu        $s4, $s4, $s6
    ctx->pc = 0x2db7e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x2db7e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2db7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2db7ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2db7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2db7f0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2db7f0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db7f4: 0x0  nop
    ctx->pc = 0x2db7f4u;
    // NOP
    // 0x2db7f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2db7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2db7fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db808: 0x0  nop
    ctx->pc = 0x2db808u;
    // NOP
    // 0x2db80c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2db80cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2db810: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2db810u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2db814: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db818: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2db818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db81c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2db820: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB820u;
    {
        const bool branch_taken_0x2db820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db820) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB828u;
label_2db828:
    // 0x2db828: 0x6c10010  bgez        $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DB828u;
    {
        const bool branch_taken_0x2db828 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x2db828) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB830u;
    // 0x2db830: 0x161023  negu        $v0, $s6
    ctx->pc = 0x2db830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x2db834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db838: 0x0  nop
    ctx->pc = 0x2db838u;
    // NOP
    // 0x2db83c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2db83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2db840: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2db840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2db844: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2db844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db848: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db84c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db854: 0x0  nop
    ctx->pc = 0x2db854u;
    // NOP
    // 0x2db858: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2db858u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2db85c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2db85cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2db860: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db864: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2db864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db868: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_2db86c:
    // 0x2db86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db870: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB870u;
    SET_GPR_U32(ctx, 31, 0x2DB878u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB870u, 0x2DB878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB878u;
label_2db878:
    // 0x2db878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2db87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db880: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DB880u;
    SET_GPR_U32(ctx, 31, 0x2DB888u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DB880u, 0x2DB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB888u;
label_2db888:
    // 0x2db888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2db888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db88c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2db88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db890: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2db890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2db894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db898: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB898u;
    SET_GPR_U32(ctx, 31, 0x2DB8A0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB898u, 0x2DB8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8A0u;
label_2db8a0:
    // 0x2db8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2db8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db8a8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DB8A8u;
    SET_GPR_U32(ctx, 31, 0x2DB8B0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DB8A8u, 0x2DB8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8B0u;
label_2db8b0:
    // 0x2db8b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2db8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db8b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2db8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db8b8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2db8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2db8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8c0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB8C0u;
    SET_GPR_U32(ctx, 31, 0x2DB8C8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB8C0u, 0x2DB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8C8u;
label_2db8c8:
    // 0x2db8c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2db8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db8d0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DB8D0u;
    SET_GPR_U32(ctx, 31, 0x2DB8D8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DB8D0u, 0x2DB8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8D8u;
label_2db8d8:
    // 0x2db8d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2db8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db8dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2db8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db8e0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2db8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2db8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8e8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB8E8u;
    SET_GPR_U32(ctx, 31, 0x2DB8F0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB8E8u, 0x2DB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8F0u;
label_2db8f0:
    // 0x2db8f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2db8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8f8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DB8F8u;
    SET_GPR_U32(ctx, 31, 0x2DB900u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DB8F8u, 0x2DB900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB900u;
label_2db900:
    // 0x2db900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2db900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db904: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2db904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db908: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2db908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db90c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2db90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2db910: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2db910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2db914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db918: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB918u;
    SET_GPR_U32(ctx, 31, 0x2DB920u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB918u, 0x2DB920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB920u;
label_2db920:
    // 0x2db920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2db924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db928: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DB928u;
    SET_GPR_U32(ctx, 31, 0x2DB930u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DB928u, 0x2DB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB930u;
label_2db930:
    // 0x2db930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2db930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db934: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2db934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db938: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2db938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db93c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2db93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2db940: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2db940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2db944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db948: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DB948u;
    SET_GPR_U32(ctx, 31, 0x2DB950u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DB948u, 0x2DB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB950u;
label_2db950:
    // 0x2db950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db954: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2db954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db958: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DB958u;
    SET_GPR_U32(ctx, 31, 0x2DB960u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DB958u, 0x2DB960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB960u;
label_2db960:
    // 0x2db960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2db960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db964: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2db964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db968: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2db968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db96c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2db96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2db970: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2db970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2db974: 0x93a2016e  lbu         $v0, 0x16E($sp)
    ctx->pc = 0x2db974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 366)));
    // 0x2db978: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB978u;
    {
        const bool branch_taken_0x2db978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db978) {
            ctx->pc = 0x2DB990u;
            goto label_2db990;
        }
    }
    ctx->pc = 0x2DB980u;
    // 0x2db980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db988: 0x0  nop
    ctx->pc = 0x2db988u;
    // NOP
    // 0x2db98c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_2db990:
    // 0x2db990: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db994: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2db994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db998: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2db998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2db99c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db9a0: 0x24a5e4b8  addiu       $a1, $a1, -0x1B48
    ctx->pc = 0x2db9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960312));
    // 0x2db9a4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2DB9A4u;
    SET_GPR_U32(ctx, 31, 0x2DB9ACu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2DB9A4u, 0x2DB9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9ACu;
label_2db9ac:
    // 0x2db9ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db9acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2db9b0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db9b4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2db9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2db9b8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db9bc: 0x24a5e4d0  addiu       $a1, $a1, -0x1B30
    ctx->pc = 0x2db9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960336));
    // 0x2db9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9c4: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DB9C4u;
    SET_GPR_U32(ctx, 31, 0x2DB9CCu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DB9C4u, 0x2DB9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9CCu;
label_2db9cc:
    // 0x2db9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2db9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db9d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2db9d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2db9d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9dc: 0xc7ad0134  lwc1        $f13, 0x134($sp)
    ctx->pc = 0x2db9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2db9e0: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DB9E0u;
    SET_GPR_U32(ctx, 31, 0x2DB9E8u);
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DB9E0u, 0x2DB9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9E8u;
label_2db9e8:
    // 0x2db9e8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2db9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2db9ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2db9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db9f0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2db9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2db9f4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2db9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2db9f8: 0x24a5e4f0  addiu       $a1, $a1, -0x1B10
    ctx->pc = 0x2db9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960368));
    // 0x2db9fc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2DB9FCu;
    SET_GPR_U32(ctx, 31, 0x2DBA04u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2DB9FCu, 0x2DBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA04u;
label_2dba04:
    // 0x2dba04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dba04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dba08: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dba0c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dba10: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dba10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dba14: 0x24a5e510  addiu       $a1, $a1, -0x1AF0
    ctx->pc = 0x2dba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960400));
    // 0x2dba18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba1c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DBA1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBA24u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DBA1Cu, 0x2DBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA24u;
label_2dba24:
    // 0x2dba24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dba2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dba2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dba30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dba30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba34: 0xc7ad0130  lwc1        $f13, 0x130($sp)
    ctx->pc = 0x2dba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dba38: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DBA38u;
    SET_GPR_U32(ctx, 31, 0x2DBA40u);
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DBA38u, 0x2DBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA40u;
label_2dba40:
    // 0x2dba40: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dba44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dba44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dba48: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dba4c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dba50: 0x24a5e528  addiu       $a1, $a1, -0x1AD8
    ctx->pc = 0x2dba50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960424));
    // 0x2dba54: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2DBA54u;
    SET_GPR_U32(ctx, 31, 0x2DBA5Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2DBA54u, 0x2DBA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA5Cu;
label_2dba5c:
    // 0x2dba5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dba5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dba60: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dba64: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dba68: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dba68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dba6c: 0x24a5e540  addiu       $a1, $a1, -0x1AC0
    ctx->pc = 0x2dba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960448));
    // 0x2dba70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dba70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba74: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DBA74u;
    SET_GPR_U32(ctx, 31, 0x2DBA7Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DBA74u, 0x2DBA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA7Cu;
label_2dba7c:
    // 0x2dba7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dba80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dba84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dba88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dba88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba8c: 0xc7ad012c  lwc1        $f13, 0x12C($sp)
    ctx->pc = 0x2dba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dba90: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DBA90u;
    SET_GPR_U32(ctx, 31, 0x2DBA98u);
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DBA90u, 0x2DBA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA98u;
label_2dba98:
    // 0x2dba98: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dba9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dba9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dbaa0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dbaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dbaa4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dbaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dbaa8: 0x24a5e560  addiu       $a1, $a1, -0x1AA0
    ctx->pc = 0x2dbaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960480));
    // 0x2dbaac: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2DBAACu;
    SET_GPR_U32(ctx, 31, 0x2DBAB4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2DBAACu, 0x2DBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBAB4u;
label_2dbab4:
    // 0x2dbab4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dbab4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dbab8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dbabc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dbabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dbac0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dbac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dbac4: 0x24a5e570  addiu       $a1, $a1, -0x1A90
    ctx->pc = 0x2dbac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960496));
    // 0x2dbac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dbac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbacc: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DBACCu;
    SET_GPR_U32(ctx, 31, 0x2DBAD4u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DBACCu, 0x2DBAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBAD4u;
label_2dbad4:
    // 0x2dbad4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dbad8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2dbad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dbadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbae0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2dbae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dbae4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dbae4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dbae8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbaec: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DBAECu;
    SET_GPR_U32(ctx, 31, 0x2DBAF4u);
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DBAECu, 0x2DBAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBAF4u;
label_2dbaf4:
    // 0x2dbaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbaf8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBAF8u;
    SET_GPR_U32(ctx, 31, 0x2DBB00u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBAF8u, 0x2DBB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB00u;
label_2dbb00:
    // 0x2dbb00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb08: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBB08u;
    SET_GPR_U32(ctx, 31, 0x2DBB10u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBB08u, 0x2DBB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB10u;
label_2dbb10:
    // 0x2dbb10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbb14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dbb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbb18: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2dbb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2dbb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb20: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBB20u;
    SET_GPR_U32(ctx, 31, 0x2DBB28u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBB20u, 0x2DBB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB28u;
label_2dbb28:
    // 0x2dbb28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dbb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbb30: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBB30u;
    SET_GPR_U32(ctx, 31, 0x2DBB38u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBB30u, 0x2DBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB38u;
label_2dbb38:
    // 0x2dbb38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbb3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dbb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbb40: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2dbb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2dbb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb48: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBB48u;
    SET_GPR_U32(ctx, 31, 0x2DBB50u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBB48u, 0x2DBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB50u;
label_2dbb50:
    // 0x2dbb50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dbb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dbb58: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBB58u;
    SET_GPR_U32(ctx, 31, 0x2DBB60u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBB58u, 0x2DBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB60u;
label_2dbb60:
    // 0x2dbb60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbb64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dbb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbb68: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2dbb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2dbb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb70: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBB70u;
    SET_GPR_U32(ctx, 31, 0x2DBB78u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBB70u, 0x2DBB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB78u;
label_2dbb78:
    // 0x2dbb78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb80: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBB80u;
    SET_GPR_U32(ctx, 31, 0x2DBB88u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBB80u, 0x2DBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB88u;
label_2dbb88:
    // 0x2dbb88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbb8c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x2dbb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbb90: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dbb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbb94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dbb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dbb98: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2dbb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2dbb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbba0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBBA0u;
    SET_GPR_U32(ctx, 31, 0x2DBBA8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBBA0u, 0x2DBBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBA8u;
label_2dbba8:
    // 0x2dbba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dbbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbbb0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBBB0u;
    SET_GPR_U32(ctx, 31, 0x2DBBB8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBBB0u, 0x2DBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBB8u;
label_2dbbb8:
    // 0x2dbbb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbbbc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2dbbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbbc0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dbbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbbc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dbbc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dbbc8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2dbbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2dbbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbd0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBBD0u;
    SET_GPR_U32(ctx, 31, 0x2DBBD8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBBD0u, 0x2DBBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBD8u;
label_2dbbd8:
    // 0x2dbbd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dbbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dbbe0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBBE0u;
    SET_GPR_U32(ctx, 31, 0x2DBBE8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBBE0u, 0x2DBBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBE8u;
label_2dbbe8:
    // 0x2dbbe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbbec: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2dbbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbbf0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dbbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbbf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dbbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dbbf8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2dbbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2dbbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dbbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc00: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2DBC00u;
    SET_GPR_U32(ctx, 31, 0x2DBC08u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2DBC00u, 0x2DBC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC08u;
label_2dbc08:
    // 0x2dbc08: 0x14400159  bnez        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x2DBC08u;
    {
        const bool branch_taken_0x2dbc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc08) {
            ctx->pc = 0x2DC170u;
            goto label_2dc170;
        }
    }
    ctx->pc = 0x2DBC10u;
    // 0x2dbc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc14: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBC14u;
    SET_GPR_U32(ctx, 31, 0x2DBC1Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBC14u, 0x2DBC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC1Cu;
label_2dbc1c:
    // 0x2dbc1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dbc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbc24: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBC24u;
    SET_GPR_U32(ctx, 31, 0x2DBC2Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBC24u, 0x2DBC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC2Cu;
label_2dbc2c:
    // 0x2dbc2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbc30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbc34: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2dbc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2dbc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc3c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBC3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC44u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBC3Cu, 0x2DBC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC44u;
label_2dbc44:
    // 0x2dbc44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dbc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbc4c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBC4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC54u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBC4Cu, 0x2DBC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC54u;
label_2dbc54:
    // 0x2dbc54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbc58: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2dbc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbc5c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dbc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbc60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dbc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dbc64: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2dbc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2dbc68: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dbc6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dbc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dbc70: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dbc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dbc74: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dbc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dbc78: 0x24a5e588  addiu       $a1, $a1, -0x1A78
    ctx->pc = 0x2dbc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960520));
    // 0x2dbc7c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2DBC7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC84u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2DBC7Cu, 0x2DBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC84u;
label_2dbc84:
    // 0x2dbc84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dbc84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dbc88: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dbc8c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dbc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dbc90: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dbc94: 0x24a5e5a0  addiu       $a1, $a1, -0x1A60
    ctx->pc = 0x2dbc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960544));
    // 0x2dbc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dbc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc9c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DBC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DBCA4u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DBC9Cu, 0x2DBCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCA4u;
label_2dbca4:
    // 0x2dbca4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dbca8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2dbca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dbcac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dbcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dbcb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dbcb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dbcb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbcb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcbc: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DBCBCu;
    SET_GPR_U32(ctx, 31, 0x2DBCC4u);
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DBCBCu, 0x2DBCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCC4u;
label_2dbcc4:
    // 0x2dbcc4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dbcc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dbcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dbccc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dbcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dbcd0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dbcd4: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40
    ctx->pc = 0x2dbcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
    // 0x2dbcd8: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2DBCD8u;
    SET_GPR_U32(ctx, 31, 0x2DBCE0u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2DBCD8u, 0x2DBCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCE0u;
label_2dbce0:
    // 0x2dbce0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dbce0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dbce4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dbce8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dbce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dbcec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dbcecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dbcf0: 0x24a5e5e0  addiu       $a1, $a1, -0x1A20
    ctx->pc = 0x2dbcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960608));
    // 0x2dbcf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dbcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcf8: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2DBCF8u;
    SET_GPR_U32(ctx, 31, 0x2DBD00u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2DBCF8u, 0x2DBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD00u;
label_2dbd00:
    // 0x2dbd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbd08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dbd08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dbd0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd10: 0xc7ad013c  lwc1        $f13, 0x13C($sp)
    ctx->pc = 0x2dbd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dbd14: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DBD14u;
    SET_GPR_U32(ctx, 31, 0x2DBD1Cu);
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DBD14u, 0x2DBD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD1Cu;
label_2dbd1c:
    // 0x2dbd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd20: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBD20u;
    SET_GPR_U32(ctx, 31, 0x2DBD28u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBD20u, 0x2DBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD28u;
label_2dbd28:
    // 0x2dbd28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dbd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbd30: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBD30u;
    SET_GPR_U32(ctx, 31, 0x2DBD38u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBD30u, 0x2DBD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD38u;
label_2dbd38:
    // 0x2dbd38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbd3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dbd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbd40: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2dbd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2dbd44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd48: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBD48u;
    SET_GPR_U32(ctx, 31, 0x2DBD50u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBD48u, 0x2DBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD50u;
label_2dbd50:
    // 0x2dbd50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbd58: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBD58u;
    SET_GPR_U32(ctx, 31, 0x2DBD60u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBD58u, 0x2DBD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD60u;
label_2dbd60:
    // 0x2dbd60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbd64: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2dbd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbd68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dbd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbd6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dbd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dbd70: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2dbd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2dbd74: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2dbd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2dbd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbd7c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DBD7Cu;
    {
        const bool branch_taken_0x2dbd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbd7c) {
            ctx->pc = 0x2DBE48u;
            goto label_2dbe48;
        }
    }
    ctx->pc = 0x2DBD84u;
    // 0x2dbd84: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2dbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbd88: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2dbd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbd8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dbd8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dbd90: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2dbd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2dbd94: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2dbd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbd98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dbd98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbd9c: 0x0  nop
    ctx->pc = 0x2dbd9cu;
    // NOP
    // 0x2dbda0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbda0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbda4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2DBDA4u;
    {
        const bool branch_taken_0x2dbda4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbda4) {
            ctx->pc = 0x2DBDDCu;
            goto label_2dbddc;
        }
    }
    ctx->pc = 0x2DBDACu;
    // 0x2dbdac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdb0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBDB0u;
    SET_GPR_U32(ctx, 31, 0x2DBDB8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBDB0u, 0x2DBDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDB8u;
label_2dbdb8:
    // 0x2dbdb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dbdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbdc0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBDC0u;
    SET_GPR_U32(ctx, 31, 0x2DBDC8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBDC0u, 0x2DBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDC8u;
label_2dbdc8:
    // 0x2dbdc8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2dbdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbdcc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2dbdccu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2dbdd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbdd4: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x2DBDD4u;
    SET_GPR_U32(ctx, 31, 0x2DBDDCu);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x2DBDD4u, 0x2DBDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDDCu;
label_2dbddc:
    // 0x2dbddc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2dbddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbde0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2dbde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbde4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dbde4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dbde8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2dbde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2dbdec: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x2dbdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbdf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dbdf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbdf4: 0x0  nop
    ctx->pc = 0x2dbdf4u;
    // NOP
    // 0x2dbdf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbdf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbdfc: 0x4501004a  bc1t        . + 4 + (0x4A << 2)
    ctx->pc = 0x2DBDFCu;
    {
        const bool branch_taken_0x2dbdfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbdfc) {
            ctx->pc = 0x2DBF28u;
            goto label_2dbf28;
        }
    }
    ctx->pc = 0x2DBE04u;
    // 0x2dbe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe08: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBE08u;
    SET_GPR_U32(ctx, 31, 0x2DBE10u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBE08u, 0x2DBE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE10u;
label_2dbe10:
    // 0x2dbe10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbe18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe1c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE24u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBE1Cu, 0x2DBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE24u;
label_2dbe24:
    // 0x2dbe24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dbe24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe28: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x2dbe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbe2c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2dbe2cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2dbe30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbe34: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x2DBE34u;
    SET_GPR_U32(ctx, 31, 0x2DBE3Cu);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x2DBE34u, 0x2DBE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE3Cu;
label_2dbe3c:
    // 0x2dbe3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dbe3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe40: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2DBE40u;
    {
        const bool branch_taken_0x2dbe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe40) {
            ctx->pc = 0x2DBF28u;
            goto label_2dbf28;
        }
    }
    ctx->pc = 0x2DBE48u;
label_2dbe48:
    // 0x2dbe48: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2dbe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2dbe4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dbe50: 0x14820035  bne         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DBE50u;
    {
        const bool branch_taken_0x2dbe50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbe50) {
            ctx->pc = 0x2DBF28u;
            goto label_2dbf28;
        }
    }
    ctx->pc = 0x2DBE58u;
    // 0x2dbe58: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2dbe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbe5c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2dbe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbe60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dbe60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dbe64: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2dbe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2dbe68: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2dbe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbe6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dbe6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbe70: 0x0  nop
    ctx->pc = 0x2dbe70u;
    // NOP
    // 0x2dbe74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbe74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbe78: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBE78u;
    {
        const bool branch_taken_0x2dbe78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbe78) {
            ctx->pc = 0x2DBEBCu;
            goto label_2dbebc;
        }
    }
    ctx->pc = 0x2DBE80u;
    // 0x2dbe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe84: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBE84u;
    SET_GPR_U32(ctx, 31, 0x2DBE8Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBE84u, 0x2DBE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE8Cu;
label_2dbe8c:
    // 0x2dbe8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe94: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBE94u;
    SET_GPR_U32(ctx, 31, 0x2DBE9Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBE94u, 0x2DBE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE9Cu;
label_2dbe9c:
    // 0x2dbe9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbea0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2dbea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbea4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2dbea4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2dbea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbeac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbeb0: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x2DBEB0u;
    SET_GPR_U32(ctx, 31, 0x2DBEB8u);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x2DBEB0u, 0x2DBEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEB8u;
label_2dbeb8:
    // 0x2dbeb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbebc:
    // 0x2dbebc: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x2dbebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbec0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2dbec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbec4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dbec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dbec8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2dbec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2dbecc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2dbeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dbed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbed4: 0x0  nop
    ctx->pc = 0x2dbed4u;
    // NOP
    // 0x2dbed8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbedc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2DBEDCu;
    {
        const bool branch_taken_0x2dbedc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbedc) {
            ctx->pc = 0x2DBF28u;
            goto label_2dbf28;
        }
    }
    ctx->pc = 0x2DBEE4u;
    // 0x2dbee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbee8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBEE8u;
    SET_GPR_U32(ctx, 31, 0x2DBEF0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBEE8u, 0x2DBEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEF0u;
label_2dbef0:
    // 0x2dbef0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbef4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2dbef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbef8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbefc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf00: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBF00u;
    SET_GPR_U32(ctx, 31, 0x2DBF08u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBF00u, 0x2DBF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF08u;
label_2dbf08:
    // 0x2dbf08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf0c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2dbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbf10: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2dbf10u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2dbf14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dbf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbf18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf1c: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x2DBF1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF24u);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x2DBF1Cu, 0x2DBF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF24u;
label_2dbf24:
    // 0x2dbf24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbf28:
    // 0x2dbf28: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dbf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbf2c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2dbf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbf30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbf30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbf34: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x2DBF34u;
    {
        const bool branch_taken_0x2dbf34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbf34) {
            ctx->pc = 0x2DC058u;
            goto label_2dc058;
        }
    }
    ctx->pc = 0x2DBF3Cu;
    // 0x2dbf3c: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dbf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbf40: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2dbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2dbf44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dbf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbf48: 0x0  nop
    ctx->pc = 0x2dbf48u;
    // NOP
    // 0x2dbf4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbf4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbf50: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2DBF50u;
    {
        const bool branch_taken_0x2dbf50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbf50) {
            ctx->pc = 0x2DBF84u;
            goto label_2dbf84;
        }
    }
    ctx->pc = 0x2DBF58u;
    // 0x2dbf58: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2dbf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbf5c: 0x3c044204  lui         $a0, 0x4204
    ctx->pc = 0x2dbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16900 << 16));
    // 0x2dbf60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dbf60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbf64: 0x0  nop
    ctx->pc = 0x2dbf64u;
    // NOP
    // 0x2dbf68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbf68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbf6c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBF6Cu;
    {
        const bool branch_taken_0x2dbf6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbf6c) {
            ctx->pc = 0x2DBF84u;
            goto label_2dbf84;
        }
    }
    ctx->pc = 0x2DBF74u;
    // 0x2dbf74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbf78: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2dbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2dbf7c: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2DBF7Cu;
    {
        const bool branch_taken_0x2dbf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf7c) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DBF84u;
label_2dbf84:
    // 0x2dbf84: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dbf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbf88: 0x3c024284  lui         $v0, 0x4284
    ctx->pc = 0x2dbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17028 << 16));
    // 0x2dbf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dbf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbf90: 0x0  nop
    ctx->pc = 0x2dbf90u;
    // NOP
    // 0x2dbf94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbf94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbf98: 0x450100e8  bc1t        . + 4 + (0xE8 << 2)
    ctx->pc = 0x2DBF98u;
    {
        const bool branch_taken_0x2dbf98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbf98) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DBFA0u;
    // 0x2dbfa0: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2dbfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbfa4: 0x3c024284  lui         $v0, 0x4284
    ctx->pc = 0x2dbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17028 << 16));
    // 0x2dbfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dbfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbfac: 0x0  nop
    ctx->pc = 0x2dbfacu;
    // NOP
    // 0x2dbfb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbfb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbfb4: 0x450000e1  bc1f        . + 4 + (0xE1 << 2)
    ctx->pc = 0x2DBFB4u;
    {
        const bool branch_taken_0x2dbfb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbfb4) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DBFBCu;
    // 0x2dbfbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dbfc0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2dbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2dbfc4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2dbfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbfc8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2dbfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2dbfcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dbfccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbfd0: 0x0  nop
    ctx->pc = 0x2dbfd0u;
    // NOP
    // 0x2dbfd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dbfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbfd8: 0x450100d8  bc1t        . + 4 + (0xD8 << 2)
    ctx->pc = 0x2DBFD8u;
    {
        const bool branch_taken_0x2dbfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbfd8) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DBFE0u;
    // 0x2dbfe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbfe4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DBFE4u;
    SET_GPR_U32(ctx, 31, 0x2DBFECu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DBFE4u, 0x2DBFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFECu;
label_2dbfec:
    // 0x2dbfec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbff0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2dbff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbff4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbffc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DBFFCu;
    SET_GPR_U32(ctx, 31, 0x2DC004u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DBFFCu, 0x2DC004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC004u;
label_2dc004:
    // 0x2dc004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc00c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2dc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2dc010: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc014: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dc014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc018: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2dc018u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2dc01c: 0x0  nop
    ctx->pc = 0x2dc01cu;
    // NOP
    // 0x2dc020: 0x0  nop
    ctx->pc = 0x2dc020u;
    // NOP
    // 0x2dc024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc028: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DC028u;
    SET_GPR_U32(ctx, 31, 0x2DC030u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DC028u, 0x2DC030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC030u;
label_2dc030:
    // 0x2dc030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc034: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dc034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dc038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc03c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DC03Cu;
    SET_GPR_U32(ctx, 31, 0x2DC044u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DC03Cu, 0x2DC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC044u;
label_2dc044:
    // 0x2dc044: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2dc044u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc048: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2dc048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2dc04c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2dc04cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2dc050: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2DC050u;
    {
        const bool branch_taken_0x2dc050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc050) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DC058u;
label_2dc058:
    // 0x2dc058: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x2dc058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc05c: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2dc05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2dc060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc064: 0x0  nop
    ctx->pc = 0x2dc064u;
    // NOP
    // 0x2dc068: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc06c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2DC06Cu;
    {
        const bool branch_taken_0x2dc06c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc06c) {
            ctx->pc = 0x2DC0A0u;
            goto label_2dc0a0;
        }
    }
    ctx->pc = 0x2DC074u;
    // 0x2dc074: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2dc074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc078: 0x3c054204  lui         $a1, 0x4204
    ctx->pc = 0x2dc078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16900 << 16));
    // 0x2dc07c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dc07cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc080: 0x0  nop
    ctx->pc = 0x2dc080u;
    // NOP
    // 0x2dc084: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc088: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC088u;
    {
        const bool branch_taken_0x2dc088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc088) {
            ctx->pc = 0x2DC0A0u;
            goto label_2dc0a0;
        }
    }
    ctx->pc = 0x2DC090u;
    // 0x2dc090: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dc090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc094: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2dc094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2dc098: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2DC098u;
    {
        const bool branch_taken_0x2dc098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc098) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DC0A0u;
label_2dc0a0:
    // 0x2dc0a0: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x2dc0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc0a4: 0x3c024284  lui         $v0, 0x4284
    ctx->pc = 0x2dc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17028 << 16));
    // 0x2dc0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc0ac: 0x0  nop
    ctx->pc = 0x2dc0acu;
    // NOP
    // 0x2dc0b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc0b4: 0x450100a1  bc1t        . + 4 + (0xA1 << 2)
    ctx->pc = 0x2DC0B4u;
    {
        const bool branch_taken_0x2dc0b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc0b4) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DC0BCu;
    // 0x2dc0bc: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2dc0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc0c0: 0x3c054284  lui         $a1, 0x4284
    ctx->pc = 0x2dc0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17028 << 16));
    // 0x2dc0c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dc0c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc0c8: 0x0  nop
    ctx->pc = 0x2dc0c8u;
    // NOP
    // 0x2dc0cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc0d0: 0x4500009a  bc1f        . + 4 + (0x9A << 2)
    ctx->pc = 0x2DC0D0u;
    {
        const bool branch_taken_0x2dc0d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc0d0) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DC0D8u;
    // 0x2dc0d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dc0dc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2dc0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2dc0e0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2dc0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc0e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2dc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2dc0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc0ec: 0x0  nop
    ctx->pc = 0x2dc0ecu;
    // NOP
    // 0x2dc0f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc0f4: 0x45010091  bc1t        . + 4 + (0x91 << 2)
    ctx->pc = 0x2DC0F4u;
    {
        const bool branch_taken_0x2dc0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc0f4) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DC0FCu;
    // 0x2dc0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc100: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DC100u;
    SET_GPR_U32(ctx, 31, 0x2DC108u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DC100u, 0x2DC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC108u;
label_2dc108:
    // 0x2dc108: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dc108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc10c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dc10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc110: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dc110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dc114: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DC114u;
    SET_GPR_U32(ctx, 31, 0x2DC11Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DC114u, 0x2DC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC11Cu;
label_2dc11c:
    // 0x2dc11c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc120: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2dc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc124: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2dc124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2dc128: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dc128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc12c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dc12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc130: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2dc130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2dc134: 0x0  nop
    ctx->pc = 0x2dc134u;
    // NOP
    // 0x2dc138: 0x0  nop
    ctx->pc = 0x2dc138u;
    // NOP
    // 0x2dc13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc140: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DC140u;
    SET_GPR_U32(ctx, 31, 0x2DC148u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DC140u, 0x2DC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC148u;
label_2dc148:
    // 0x2dc148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc14c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2dc14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc150: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dc150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dc154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc158: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DC158u;
    SET_GPR_U32(ctx, 31, 0x2DC160u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DC158u, 0x2DC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC160u;
label_2dc160:
    // 0x2dc160: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dc160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc164: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x2dc164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2dc168: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2DC168u;
    {
        const bool branch_taken_0x2dc168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc168) {
            ctx->pc = 0x2DC33Cu;
            goto label_2dc33c;
        }
    }
    ctx->pc = 0x2DC170u;
label_2dc170:
    // 0x2dc170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc174: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DC174u;
    SET_GPR_U32(ctx, 31, 0x2DC17Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DC174u, 0x2DC17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC17Cu;
label_2dc17c:
    // 0x2dc17c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc180: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2dc180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dc184: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DC184u;
    SET_GPR_U32(ctx, 31, 0x2DC18Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DC184u, 0x2DC18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC18Cu;
label_2dc18c:
    // 0x2dc18c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dc18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc190: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dc190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc194: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2dc194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2dc198: 0x8fb50170  lw          $s5, 0x170($sp)
    ctx->pc = 0x2dc198u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc19c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dc19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dc1a0: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2dc1a4: 0x24050499  addiu       $a1, $zero, 0x499
    ctx->pc = 0x2dc1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
    // 0x2dc1a8: 0xc042090  jal         func_108240
    ctx->pc = 0x2DC1A8u;
    SET_GPR_U32(ctx, 31, 0x2DC1B0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2DC1A8u, 0x2DC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1B0u;
label_2dc1b0:
    // 0x2dc1b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dc1b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dc1b4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc1b8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2dc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dc1bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1c0: 0x24050498  addiu       $a1, $zero, 0x498
    ctx->pc = 0x2dc1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1176));
    // 0x2dc1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dc1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1c8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2DC1C8u;
    SET_GPR_U32(ctx, 31, 0x2DC1D0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2DC1C8u, 0x2DC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1D0u;
label_2dc1d0:
    // 0x2dc1d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dc1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc1d8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2dc1d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dc1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2dc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dc1e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dc1e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dc1ec: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DC1ECu;
    SET_GPR_U32(ctx, 31, 0x2DC1F4u);
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DC1ECu, 0x2DC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1F4u;
label_2dc1f4:
    // 0x2dc1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1f8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DC1F8u;
    SET_GPR_U32(ctx, 31, 0x2DC200u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DC1F8u, 0x2DC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC200u;
label_2dc200:
    // 0x2dc200: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2dc200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2dc204: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2dc204u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dc208: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2dc208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dc20c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DC20Cu;
    SET_GPR_U32(ctx, 31, 0x2DC214u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DC20Cu, 0x2DC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC214u;
label_2dc214:
    // 0x2dc214: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dc214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc218: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2dc218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc21c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2dc21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc220: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2dc220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dc224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc228: 0x0  nop
    ctx->pc = 0x2dc228u;
    // NOP
    // 0x2dc22c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc22cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc230: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2DC230u;
    {
        const bool branch_taken_0x2dc230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc230) {
            ctx->pc = 0x2DC268u;
            goto label_2dc268;
        }
    }
    ctx->pc = 0x2DC238u;
    // 0x2dc238: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2dc238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc23c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2dc23cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dc240: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x2dc240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2dc244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc248: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dc248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dc24c: 0x24a5e5f8  addiu       $a1, $a1, -0x1A08
    ctx->pc = 0x2dc24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960632));
    // 0x2dc250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dc250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc254: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2dc254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc258: 0xc08f558  jal         func_23D560
    ctx->pc = 0x2DC258u;
    SET_GPR_U32(ctx, 31, 0x2DC260u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2DC258u, 0x2DC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC260u;
label_2dc260:
    // 0x2dc260: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2DC260u;
    {
        const bool branch_taken_0x2dc260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc260) {
            ctx->pc = 0x2DC2D0u;
            goto label_2dc2d0;
        }
    }
    ctx->pc = 0x2DC268u;
label_2dc268:
    // 0x2dc268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc26c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DC26Cu;
    SET_GPR_U32(ctx, 31, 0x2DC274u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DC26Cu, 0x2DC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC274u;
label_2dc274:
    // 0x2dc274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc278: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2dc278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dc27c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DC27Cu;
    SET_GPR_U32(ctx, 31, 0x2DC284u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DC27Cu, 0x2DC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC284u;
label_2dc284:
    // 0x2dc284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dc284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc288: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2dc288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc28c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2dc28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc290: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2dc290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dc294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc298: 0x0  nop
    ctx->pc = 0x2dc298u;
    // NOP
    // 0x2dc29c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc2a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2DC2A0u;
    {
        const bool branch_taken_0x2dc2a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc2a0) {
            ctx->pc = 0x2DC2D0u;
            goto label_2dc2d0;
        }
    }
    ctx->pc = 0x2DC2A8u;
    // 0x2dc2a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc2ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dc2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dc2b0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2dc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2dc2b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dc2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dc2b8: 0x24a5e608  addiu       $a1, $a1, -0x19F8
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960648));
    // 0x2dc2bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dc2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2dc2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc2c4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x2DC2C4u;
    SET_GPR_U32(ctx, 31, 0x2DC2CCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2DC2C4u, 0x2DC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2CCu;
label_2dc2cc:
    // 0x2dc2cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dc2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2d0:
    // 0x2dc2d0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2dc2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2dc2d4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc2d8: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2dc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2dc2dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC2DCu;
    {
        const bool branch_taken_0x2dc2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2dc) {
            ctx->pc = 0x2DC2FCu;
            goto label_2dc2fc;
        }
    }
    ctx->pc = 0x2DC2E4u;
    // 0x2dc2e4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc2e8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2dc2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2dc2ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2dc2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2dc2f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DC2F0u;
    SET_GPR_U32(ctx, 31, 0x2DC2F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DC2F0u, 0x2DC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2F8u;
label_2dc2f8:
    // 0x2dc2f8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2dc2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_2dc2fc:
    // 0x2dc2fc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc304: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2dc308: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x2dc308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc30c: 0xc7ad010c  lwc1        $f13, 0x10C($sp)
    ctx->pc = 0x2dc30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc310: 0xc7ae00fc  lwc1        $f14, 0xFC($sp)
    ctx->pc = 0x2dc310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dc314: 0xc7af0114  lwc1        $f15, 0x114($sp)
    ctx->pc = 0x2dc314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dc318: 0xc7b000f8  lwc1        $f16, 0xF8($sp)
    ctx->pc = 0x2dc318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2dc31c: 0xc7b10110  lwc1        $f17, 0x110($sp)
    ctx->pc = 0x2dc31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2dc320: 0xc0b6c20  jal         func_2DB080
    ctx->pc = 0x2DC320u;
    SET_GPR_U32(ctx, 31, 0x2DC328u);
    ctx->pc = 0x2DB080u;
    goto label_2db080;
    ctx->pc = 0x2DC328u;
label_2dc328:
    // 0x2dc328: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dc328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc32c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc334: 0xc0b6be8  jal         func_2DAFA0
    ctx->pc = 0x2DC334u;
    SET_GPR_U32(ctx, 31, 0x2DC33Cu);
    ctx->pc = 0x2DAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAFA0u, 0x2DC334u, 0x2DC33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC33Cu;
label_2dc33c:
    // 0x2dc33c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2dc33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc344: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dc344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc348: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DC348u;
    SET_GPR_U32(ctx, 31, 0x2DC350u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DC348u, 0x2DC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC350u;
label_2dc350:
    // 0x2dc350: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2dc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dc354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc358: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dc358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc35c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2DC35Cu;
    SET_GPR_U32(ctx, 31, 0x2DC364u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2DC35Cu, 0x2DC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC364u;
label_2dc364:
    // 0x2dc364: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC364u;
    {
        const bool branch_taken_0x2dc364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc364) {
            ctx->pc = 0x2DC384u;
            goto label_2dc384;
        }
    }
    ctx->pc = 0x2DC36Cu;
label_2dc36c:
    // 0x2dc36c: 0x8fb40170  lw          $s4, 0x170($sp)
    ctx->pc = 0x2dc36cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dc370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc374: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x2dc374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dc378: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dc378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc37c: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DC37Cu;
    SET_GPR_U32(ctx, 31, 0x2DC384u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DC37Cu, 0x2DC384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC384u;
label_2dc384:
    // 0x2dc384: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2dc384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc388: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2dc388u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dc38c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2dc38cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dc390: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2dc390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dc394: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2dc394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc398: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2dc398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc39c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2dc39cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc3a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dc3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc3a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dc3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc3a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc3ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dc3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc3b0: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x2dc3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2dc3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC3BCu;
    // 0x2dc3bc: 0x0  nop
    ctx->pc = 0x2dc3bcu;
    // NOP
    ctx->pc = 0x2dc3c0u;
}
