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

// Function: sub_002B60D0
// Address: 0x2b60d0 - 0x2b62b0
void sub_002B60D0_0x2b60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B60D0_0x2b60d0");
#endif

    switch (ctx->pc) {
        case 0x2b60d0u: goto label_2b60d0;
        case 0x2b60d4u: goto label_2b60d4;
        case 0x2b60d8u: goto label_2b60d8;
        case 0x2b60dcu: goto label_2b60dc;
        case 0x2b60e0u: goto label_2b60e0;
        case 0x2b60e4u: goto label_2b60e4;
        case 0x2b60e8u: goto label_2b60e8;
        case 0x2b60ecu: goto label_2b60ec;
        case 0x2b60f0u: goto label_2b60f0;
        case 0x2b60f4u: goto label_2b60f4;
        case 0x2b60f8u: goto label_2b60f8;
        case 0x2b60fcu: goto label_2b60fc;
        case 0x2b6100u: goto label_2b6100;
        case 0x2b6104u: goto label_2b6104;
        case 0x2b6108u: goto label_2b6108;
        case 0x2b610cu: goto label_2b610c;
        case 0x2b6110u: goto label_2b6110;
        case 0x2b6114u: goto label_2b6114;
        case 0x2b6118u: goto label_2b6118;
        case 0x2b611cu: goto label_2b611c;
        case 0x2b6120u: goto label_2b6120;
        case 0x2b6124u: goto label_2b6124;
        case 0x2b6128u: goto label_2b6128;
        case 0x2b612cu: goto label_2b612c;
        case 0x2b6130u: goto label_2b6130;
        case 0x2b6134u: goto label_2b6134;
        case 0x2b6138u: goto label_2b6138;
        case 0x2b613cu: goto label_2b613c;
        case 0x2b6140u: goto label_2b6140;
        case 0x2b6144u: goto label_2b6144;
        case 0x2b6148u: goto label_2b6148;
        case 0x2b614cu: goto label_2b614c;
        case 0x2b6150u: goto label_2b6150;
        case 0x2b6154u: goto label_2b6154;
        case 0x2b6158u: goto label_2b6158;
        case 0x2b615cu: goto label_2b615c;
        case 0x2b6160u: goto label_2b6160;
        case 0x2b6164u: goto label_2b6164;
        case 0x2b6168u: goto label_2b6168;
        case 0x2b616cu: goto label_2b616c;
        case 0x2b6170u: goto label_2b6170;
        case 0x2b6174u: goto label_2b6174;
        case 0x2b6178u: goto label_2b6178;
        case 0x2b617cu: goto label_2b617c;
        case 0x2b6180u: goto label_2b6180;
        case 0x2b6184u: goto label_2b6184;
        case 0x2b6188u: goto label_2b6188;
        case 0x2b618cu: goto label_2b618c;
        case 0x2b6190u: goto label_2b6190;
        case 0x2b6194u: goto label_2b6194;
        case 0x2b6198u: goto label_2b6198;
        case 0x2b619cu: goto label_2b619c;
        case 0x2b61a0u: goto label_2b61a0;
        case 0x2b61a4u: goto label_2b61a4;
        case 0x2b61a8u: goto label_2b61a8;
        case 0x2b61acu: goto label_2b61ac;
        case 0x2b61b0u: goto label_2b61b0;
        case 0x2b61b4u: goto label_2b61b4;
        case 0x2b61b8u: goto label_2b61b8;
        case 0x2b61bcu: goto label_2b61bc;
        case 0x2b61c0u: goto label_2b61c0;
        case 0x2b61c4u: goto label_2b61c4;
        case 0x2b61c8u: goto label_2b61c8;
        case 0x2b61ccu: goto label_2b61cc;
        case 0x2b61d0u: goto label_2b61d0;
        case 0x2b61d4u: goto label_2b61d4;
        case 0x2b61d8u: goto label_2b61d8;
        case 0x2b61dcu: goto label_2b61dc;
        case 0x2b61e0u: goto label_2b61e0;
        case 0x2b61e4u: goto label_2b61e4;
        case 0x2b61e8u: goto label_2b61e8;
        case 0x2b61ecu: goto label_2b61ec;
        case 0x2b61f0u: goto label_2b61f0;
        case 0x2b61f4u: goto label_2b61f4;
        case 0x2b61f8u: goto label_2b61f8;
        case 0x2b61fcu: goto label_2b61fc;
        case 0x2b6200u: goto label_2b6200;
        case 0x2b6204u: goto label_2b6204;
        case 0x2b6208u: goto label_2b6208;
        case 0x2b620cu: goto label_2b620c;
        case 0x2b6210u: goto label_2b6210;
        case 0x2b6214u: goto label_2b6214;
        case 0x2b6218u: goto label_2b6218;
        case 0x2b621cu: goto label_2b621c;
        case 0x2b6220u: goto label_2b6220;
        case 0x2b6224u: goto label_2b6224;
        case 0x2b6228u: goto label_2b6228;
        case 0x2b622cu: goto label_2b622c;
        case 0x2b6230u: goto label_2b6230;
        case 0x2b6234u: goto label_2b6234;
        case 0x2b6238u: goto label_2b6238;
        case 0x2b623cu: goto label_2b623c;
        case 0x2b6240u: goto label_2b6240;
        case 0x2b6244u: goto label_2b6244;
        case 0x2b6248u: goto label_2b6248;
        case 0x2b624cu: goto label_2b624c;
        case 0x2b6250u: goto label_2b6250;
        case 0x2b6254u: goto label_2b6254;
        case 0x2b6258u: goto label_2b6258;
        case 0x2b625cu: goto label_2b625c;
        case 0x2b6260u: goto label_2b6260;
        case 0x2b6264u: goto label_2b6264;
        case 0x2b6268u: goto label_2b6268;
        case 0x2b626cu: goto label_2b626c;
        case 0x2b6270u: goto label_2b6270;
        case 0x2b6274u: goto label_2b6274;
        case 0x2b6278u: goto label_2b6278;
        case 0x2b627cu: goto label_2b627c;
        case 0x2b6280u: goto label_2b6280;
        case 0x2b6284u: goto label_2b6284;
        case 0x2b6288u: goto label_2b6288;
        case 0x2b628cu: goto label_2b628c;
        case 0x2b6290u: goto label_2b6290;
        case 0x2b6294u: goto label_2b6294;
        case 0x2b6298u: goto label_2b6298;
        case 0x2b629cu: goto label_2b629c;
        case 0x2b62a0u: goto label_2b62a0;
        case 0x2b62a4u: goto label_2b62a4;
        case 0x2b62a8u: goto label_2b62a8;
        case 0x2b62acu: goto label_2b62ac;
        default: break;
    }

    ctx->pc = 0x2b60d0u;

label_2b60d0:
    // 0x2b60d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b60d4:
    // 0x2b60d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b60d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b60d8:
    // 0x2b60d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b60d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b60dc:
    // 0x2b60dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b60e0:
    // 0x2b60e0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2b60e4:
    // 0x2b60e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b60e8:
    // 0x2b60e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b60ec:
    // 0x2b60ec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b60ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b60f0:
    // 0x2b60f0: 0x320f809  jalr        $t9
label_2b60f4:
    if (ctx->pc == 0x2B60F4u) {
        ctx->pc = 0x2B60F8u;
        goto label_2b60f8;
    }
    ctx->pc = 0x2B60F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B60F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60F0u, 0x2B60F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B60F8u;
label_2b60f8:
    // 0x2b60f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b60f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b60fc:
    // 0x2b60fc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2b60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2b6100:
    // 0x2b6100: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b6100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b6104:
    // 0x2b6104: 0xc089a88  jal         func_226A20
label_2b6108:
    if (ctx->pc == 0x2B6108u) {
        ctx->pc = 0x2B610Cu;
        goto label_2b610c;
    }
    ctx->pc = 0x2B6104u;
    SET_GPR_U32(ctx, 31, 0x2B610Cu);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x2B6104u, 0x2B610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B610Cu;
label_2b610c:
    // 0x2b610c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b610cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6110:
    // 0x2b6110: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2b6110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2b6114:
    // 0x2b6114: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x2b6114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b6118:
    // 0x2b6118: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b6118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b611c:
    // 0x2b611c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b6120:
    // 0x2b6120: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b6120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6124:
    // 0x2b6124: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b6124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b6128:
    // 0x2b6128: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b6128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2b612c:
    // 0x2b612c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b6130:
    // 0x2b6130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b6130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6134:
    // 0x2b6134: 0x0  nop
    ctx->pc = 0x2b6134u;
    // NOP
label_2b6138:
    // 0x2b6138: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b6138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b613c:
    // 0x2b613c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2b613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b6140:
    // 0x2b6140: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b6140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b6144:
    // 0x2b6144: 0xc104cf2  jal         func_4133C8
label_2b6148:
    if (ctx->pc == 0x2B6148u) {
        ctx->pc = 0x2B614Cu;
        goto label_2b614c;
    }
    ctx->pc = 0x2B6144u;
    SET_GPR_U32(ctx, 31, 0x2B614Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B6144u, 0x2B614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B614Cu;
label_2b614c:
    // 0x2b614c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6150:
    // 0x2b6150: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b6150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b6154:
    // 0x2b6154: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6158:
    if (ctx->pc == 0x2B6158u) {
        ctx->pc = 0x2B615Cu;
        goto label_2b615c;
    }
    ctx->pc = 0x2B6154u;
    {
        const bool branch_taken_0x2b6154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6154) {
            ctx->pc = 0x2B6174u;
            goto label_2b6174;
        }
    }
    ctx->pc = 0x2B615Cu;
label_2b615c:
    // 0x2b615c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b6160:
    // 0x2b6160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6164:
    // 0x2b6164: 0x0  nop
    ctx->pc = 0x2b6164u;
    // NOP
label_2b6168:
    // 0x2b6168: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b6168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b616c:
    // 0x2b616c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b6170:
    if (ctx->pc == 0x2B6170u) {
        ctx->pc = 0x2B6174u;
        goto label_2b6174;
    }
    ctx->pc = 0x2B616Cu;
    {
        const bool branch_taken_0x2b616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b616c) {
            ctx->pc = 0x2B6184u;
            goto label_2b6184;
        }
    }
    ctx->pc = 0x2B6174u;
label_2b6174:
    // 0x2b6174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b6178:
    // 0x2b6178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b617c:
    // 0x2b617c: 0x0  nop
    ctx->pc = 0x2b617cu;
    // NOP
label_2b6180:
    // 0x2b6180: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b6180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b6184:
    // 0x2b6184: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2b6184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b6188:
    // 0x2b6188: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b6188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b618c:
    // 0x2b618c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2b618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b6190:
    // 0x2b6190: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b6190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6194:
    // 0x2b6194: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b6198:
    // 0x2b6198: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b6198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b619c:
    // 0x2b619c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b619cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b61a0:
    // 0x2b61a0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b61a4:
    // 0x2b61a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b61a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b61a8:
    // 0x2b61a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2b61a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2b61ac:
    // 0x2b61ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b61acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b61b0:
    // 0x2b61b0: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b61b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b61b4:
    // 0x2b61b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b61b8:
    if (ctx->pc == 0x2B61B8u) {
        ctx->pc = 0x2B61BCu;
        goto label_2b61bc;
    }
    ctx->pc = 0x2B61B4u;
    {
        const bool branch_taken_0x2b61b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b61b4) {
            ctx->pc = 0x2B61D4u;
            goto label_2b61d4;
        }
    }
    ctx->pc = 0x2B61BCu;
label_2b61bc:
    // 0x2b61bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b61c0:
    // 0x2b61c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b61c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b61c4:
    // 0x2b61c4: 0x0  nop
    ctx->pc = 0x2b61c4u;
    // NOP
label_2b61c8:
    // 0x2b61c8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b61c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b61cc:
    // 0x2b61cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b61d0:
    if (ctx->pc == 0x2B61D0u) {
        ctx->pc = 0x2B61D4u;
        goto label_2b61d4;
    }
    ctx->pc = 0x2B61CCu;
    {
        const bool branch_taken_0x2b61cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b61cc) {
            ctx->pc = 0x2B61E4u;
            goto label_2b61e4;
        }
    }
    ctx->pc = 0x2B61D4u;
label_2b61d4:
    // 0x2b61d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b61d8:
    // 0x2b61d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b61d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b61dc:
    // 0x2b61dc: 0x0  nop
    ctx->pc = 0x2b61dcu;
    // NOP
label_2b61e0:
    // 0x2b61e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b61e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b61e4:
    // 0x2b61e4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2b61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b61e8:
    // 0x2b61e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b61ec:
    // 0x2b61ec: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2b61ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b61f0:
    // 0x2b61f0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b61f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b61f4:
    // 0x2b61f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b61f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b61f8:
    // 0x2b61f8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b61f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b61fc:
    // 0x2b61fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b61fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6200:
    // 0x2b6200: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6204:
    // 0x2b6204: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b6204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6208:
    // 0x2b6208: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b6208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b620c:
    // 0x2b620c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6210:
    // 0x2b6210: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b6210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b6214:
    // 0x2b6214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6218:
    if (ctx->pc == 0x2B6218u) {
        ctx->pc = 0x2B621Cu;
        goto label_2b621c;
    }
    ctx->pc = 0x2B6214u;
    {
        const bool branch_taken_0x2b6214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6214) {
            ctx->pc = 0x2B6234u;
            goto label_2b6234;
        }
    }
    ctx->pc = 0x2B621Cu;
label_2b621c:
    // 0x2b621c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b6220:
    // 0x2b6220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6224:
    // 0x2b6224: 0x0  nop
    ctx->pc = 0x2b6224u;
    // NOP
label_2b6228:
    // 0x2b6228: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b622c:
    // 0x2b622c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b6230:
    if (ctx->pc == 0x2B6230u) {
        ctx->pc = 0x2B6234u;
        goto label_2b6234;
    }
    ctx->pc = 0x2B622Cu;
    {
        const bool branch_taken_0x2b622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b622c) {
            ctx->pc = 0x2B6244u;
            goto label_2b6244;
        }
    }
    ctx->pc = 0x2B6234u;
label_2b6234:
    // 0x2b6234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b6234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b6238:
    // 0x2b6238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b623c:
    // 0x2b623c: 0x0  nop
    ctx->pc = 0x2b623cu;
    // NOP
label_2b6240:
    // 0x2b6240: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b6244:
    // 0x2b6244: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2b6244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b6248:
    // 0x2b6248: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b6248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b624c:
    // 0x2b624c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2b624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b6250:
    // 0x2b6250: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6254:
    // 0x2b6254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b6258:
    // 0x2b6258: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b625c:
    // 0x2b625c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b625cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6260:
    // 0x2b6260: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6264:
    // 0x2b6264: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b6264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6268:
    // 0x2b6268: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b6268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2b626c:
    // 0x2b626c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6270:
    // 0x2b6270: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b6270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b6274:
    // 0x2b6274: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b6274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b6278:
    // 0x2b6278: 0xc106598  jal         func_419660
label_2b627c:
    if (ctx->pc == 0x2B627Cu) {
        ctx->pc = 0x2B6280u;
        goto label_2b6280;
    }
    ctx->pc = 0x2B6278u;
    SET_GPR_U32(ctx, 31, 0x2B6280u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x2B6278u, 0x2B6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6280u;
label_2b6280:
    // 0x2b6280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6284:
    // 0x2b6284: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b6284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6288:
    // 0x2b6288: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b6288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
label_2b628c:
    // 0x2b628c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6290:
    // 0x2b6290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6294:
    // 0x2b6294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6298:
    // 0x2b6298: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b6298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b629c:
    // 0x2b629c: 0x3e00008  jr          $ra
label_2b62a0:
    if (ctx->pc == 0x2B62A0u) {
        ctx->pc = 0x2B62A4u;
        goto label_2b62a4;
    }
    ctx->pc = 0x2B629Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B629Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B62A4u;
label_2b62a4:
    // 0x2b62a4: 0x0  nop
    ctx->pc = 0x2b62a4u;
    // NOP
label_2b62a8:
    // 0x2b62a8: 0x0  nop
    ctx->pc = 0x2b62a8u;
    // NOP
label_2b62ac:
    // 0x2b62ac: 0x0  nop
    ctx->pc = 0x2b62acu;
    // NOP
    ctx->pc = 0x2b62b0u;
}
