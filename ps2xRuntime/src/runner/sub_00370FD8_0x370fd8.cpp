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

// Function: sub_00370FD8
// Address: 0x370fd8 - 0x3712b0
void sub_00370FD8_0x370fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370FD8_0x370fd8");
#endif

    switch (ctx->pc) {
        case 0x370fd8u: goto label_370fd8;
        case 0x370fdcu: goto label_370fdc;
        case 0x370fe0u: goto label_370fe0;
        case 0x370fe4u: goto label_370fe4;
        case 0x370fe8u: goto label_370fe8;
        case 0x370fecu: goto label_370fec;
        case 0x370ff0u: goto label_370ff0;
        case 0x370ff4u: goto label_370ff4;
        case 0x370ff8u: goto label_370ff8;
        case 0x370ffcu: goto label_370ffc;
        case 0x371000u: goto label_371000;
        case 0x371004u: goto label_371004;
        case 0x371008u: goto label_371008;
        case 0x37100cu: goto label_37100c;
        case 0x371010u: goto label_371010;
        case 0x371014u: goto label_371014;
        case 0x371018u: goto label_371018;
        case 0x37101cu: goto label_37101c;
        case 0x371020u: goto label_371020;
        case 0x371024u: goto label_371024;
        case 0x371028u: goto label_371028;
        case 0x37102cu: goto label_37102c;
        case 0x371030u: goto label_371030;
        case 0x371034u: goto label_371034;
        case 0x371038u: goto label_371038;
        case 0x37103cu: goto label_37103c;
        case 0x371040u: goto label_371040;
        case 0x371044u: goto label_371044;
        case 0x371048u: goto label_371048;
        case 0x37104cu: goto label_37104c;
        case 0x371050u: goto label_371050;
        case 0x371054u: goto label_371054;
        case 0x371058u: goto label_371058;
        case 0x37105cu: goto label_37105c;
        case 0x371060u: goto label_371060;
        case 0x371064u: goto label_371064;
        case 0x371068u: goto label_371068;
        case 0x37106cu: goto label_37106c;
        case 0x371070u: goto label_371070;
        case 0x371074u: goto label_371074;
        case 0x371078u: goto label_371078;
        case 0x37107cu: goto label_37107c;
        case 0x371080u: goto label_371080;
        case 0x371084u: goto label_371084;
        case 0x371088u: goto label_371088;
        case 0x37108cu: goto label_37108c;
        case 0x371090u: goto label_371090;
        case 0x371094u: goto label_371094;
        case 0x371098u: goto label_371098;
        case 0x37109cu: goto label_37109c;
        case 0x3710a0u: goto label_3710a0;
        case 0x3710a4u: goto label_3710a4;
        case 0x3710a8u: goto label_3710a8;
        case 0x3710acu: goto label_3710ac;
        case 0x3710b0u: goto label_3710b0;
        case 0x3710b4u: goto label_3710b4;
        case 0x3710b8u: goto label_3710b8;
        case 0x3710bcu: goto label_3710bc;
        case 0x3710c0u: goto label_3710c0;
        case 0x3710c4u: goto label_3710c4;
        case 0x3710c8u: goto label_3710c8;
        case 0x3710ccu: goto label_3710cc;
        case 0x3710d0u: goto label_3710d0;
        case 0x3710d4u: goto label_3710d4;
        case 0x3710d8u: goto label_3710d8;
        case 0x3710dcu: goto label_3710dc;
        case 0x3710e0u: goto label_3710e0;
        case 0x3710e4u: goto label_3710e4;
        case 0x3710e8u: goto label_3710e8;
        case 0x3710ecu: goto label_3710ec;
        case 0x3710f0u: goto label_3710f0;
        case 0x3710f4u: goto label_3710f4;
        case 0x3710f8u: goto label_3710f8;
        case 0x3710fcu: goto label_3710fc;
        case 0x371100u: goto label_371100;
        case 0x371104u: goto label_371104;
        case 0x371108u: goto label_371108;
        case 0x37110cu: goto label_37110c;
        case 0x371110u: goto label_371110;
        case 0x371114u: goto label_371114;
        case 0x371118u: goto label_371118;
        case 0x37111cu: goto label_37111c;
        case 0x371120u: goto label_371120;
        case 0x371124u: goto label_371124;
        case 0x371128u: goto label_371128;
        case 0x37112cu: goto label_37112c;
        case 0x371130u: goto label_371130;
        case 0x371134u: goto label_371134;
        case 0x371138u: goto label_371138;
        case 0x37113cu: goto label_37113c;
        case 0x371140u: goto label_371140;
        case 0x371144u: goto label_371144;
        case 0x371148u: goto label_371148;
        case 0x37114cu: goto label_37114c;
        case 0x371150u: goto label_371150;
        case 0x371154u: goto label_371154;
        case 0x371158u: goto label_371158;
        case 0x37115cu: goto label_37115c;
        case 0x371160u: goto label_371160;
        case 0x371164u: goto label_371164;
        case 0x371168u: goto label_371168;
        case 0x37116cu: goto label_37116c;
        case 0x371170u: goto label_371170;
        case 0x371174u: goto label_371174;
        case 0x371178u: goto label_371178;
        case 0x37117cu: goto label_37117c;
        case 0x371180u: goto label_371180;
        case 0x371184u: goto label_371184;
        case 0x371188u: goto label_371188;
        case 0x37118cu: goto label_37118c;
        case 0x371190u: goto label_371190;
        case 0x371194u: goto label_371194;
        case 0x371198u: goto label_371198;
        case 0x37119cu: goto label_37119c;
        case 0x3711a0u: goto label_3711a0;
        case 0x3711a4u: goto label_3711a4;
        case 0x3711a8u: goto label_3711a8;
        case 0x3711acu: goto label_3711ac;
        case 0x3711b0u: goto label_3711b0;
        case 0x3711b4u: goto label_3711b4;
        case 0x3711b8u: goto label_3711b8;
        case 0x3711bcu: goto label_3711bc;
        case 0x3711c0u: goto label_3711c0;
        case 0x3711c4u: goto label_3711c4;
        case 0x3711c8u: goto label_3711c8;
        case 0x3711ccu: goto label_3711cc;
        case 0x3711d0u: goto label_3711d0;
        case 0x3711d4u: goto label_3711d4;
        case 0x3711d8u: goto label_3711d8;
        case 0x3711dcu: goto label_3711dc;
        case 0x3711e0u: goto label_3711e0;
        case 0x3711e4u: goto label_3711e4;
        case 0x3711e8u: goto label_3711e8;
        case 0x3711ecu: goto label_3711ec;
        case 0x3711f0u: goto label_3711f0;
        case 0x3711f4u: goto label_3711f4;
        case 0x3711f8u: goto label_3711f8;
        case 0x3711fcu: goto label_3711fc;
        case 0x371200u: goto label_371200;
        case 0x371204u: goto label_371204;
        case 0x371208u: goto label_371208;
        case 0x37120cu: goto label_37120c;
        case 0x371210u: goto label_371210;
        case 0x371214u: goto label_371214;
        case 0x371218u: goto label_371218;
        case 0x37121cu: goto label_37121c;
        case 0x371220u: goto label_371220;
        case 0x371224u: goto label_371224;
        case 0x371228u: goto label_371228;
        case 0x37122cu: goto label_37122c;
        case 0x371230u: goto label_371230;
        case 0x371234u: goto label_371234;
        case 0x371238u: goto label_371238;
        case 0x37123cu: goto label_37123c;
        case 0x371240u: goto label_371240;
        case 0x371244u: goto label_371244;
        case 0x371248u: goto label_371248;
        case 0x37124cu: goto label_37124c;
        case 0x371250u: goto label_371250;
        case 0x371254u: goto label_371254;
        case 0x371258u: goto label_371258;
        case 0x37125cu: goto label_37125c;
        case 0x371260u: goto label_371260;
        case 0x371264u: goto label_371264;
        case 0x371268u: goto label_371268;
        case 0x37126cu: goto label_37126c;
        case 0x371270u: goto label_371270;
        case 0x371274u: goto label_371274;
        case 0x371278u: goto label_371278;
        case 0x37127cu: goto label_37127c;
        case 0x371280u: goto label_371280;
        case 0x371284u: goto label_371284;
        case 0x371288u: goto label_371288;
        case 0x37128cu: goto label_37128c;
        case 0x371290u: goto label_371290;
        case 0x371294u: goto label_371294;
        case 0x371298u: goto label_371298;
        case 0x37129cu: goto label_37129c;
        case 0x3712a0u: goto label_3712a0;
        case 0x3712a4u: goto label_3712a4;
        case 0x3712a8u: goto label_3712a8;
        case 0x3712acu: goto label_3712ac;
        default: break;
    }

    ctx->pc = 0x370fd8u;

label_370fd8:
    // 0x370fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_370fdc:
    // 0x370fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x370fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_370fe0:
    // 0x370fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_370fe4:
    // 0x370fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_370fe8:
    // 0x370fe8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x370fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_370fec:
    // 0x370fec: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
label_370ff0:
    if (ctx->pc == 0x370FF0u) {
        ctx->pc = 0x370FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FECu;
        // 0x370ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370FF4u;
        goto label_370ff4;
    }
    ctx->pc = 0x370FECu;
    {
        const bool branch_taken_0x370fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x370FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FECu;
        // 0x370ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fec) {
            ctx->pc = 0x371094u;
            goto label_371094;
        }
    }
    ctx->pc = 0x370FF4u;
label_370ff4:
    // 0x370ff4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x370ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_370ff8:
    // 0x370ff8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x370ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_370ffc:
    // 0x370ffc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x370ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_371000:
    // 0x371000: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x371000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371004:
    // 0x371004: 0xc4440044  lwc1        $f4, 0x44($v0)
    ctx->pc = 0x371004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_371008:
    // 0x371008: 0xc4470038  lwc1        $f7, 0x38($v0)
    ctx->pc = 0x371008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37100c:
    // 0x37100c: 0xc446003c  lwc1        $f6, 0x3C($v0)
    ctx->pc = 0x37100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_371010:
    // 0x371010: 0xc4450040  lwc1        $f5, 0x40($v0)
    ctx->pc = 0x371010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_371014:
    // 0x371014: 0x0  nop
    ctx->pc = 0x371014u;
    // NOP
label_371018:
    // 0x371018: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x371018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37101c:
    // 0x37101c: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x37101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_371020:
    // 0x371020: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x371020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_371024:
    // 0x371024: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x371024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_371028:
    // 0x371028: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x371028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_37102c:
    // 0x37102c: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x37102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_371030:
    // 0x371030: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x371030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_371034:
    // 0x371034: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x371034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_371038:
    // 0x371038: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x371038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37103c:
    // 0x37103c: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x37103cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_371040:
    // 0x371040: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x371040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_371044:
    // 0x371044: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x371044u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_371048:
    // 0x371048: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x371048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37104c:
    // 0x37104c: 0x0  nop
    ctx->pc = 0x37104cu;
    // NOP
label_371050:
    // 0x371050: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_371054:
    if (ctx->pc == 0x371054u) {
        ctx->pc = 0x371054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371050u;
        // 0x371054: 0xac89002c  sw          $t1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371058u;
        goto label_371058;
    }
    ctx->pc = 0x371050u;
    {
        const bool branch_taken_0x371050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371050) {
            ctx->pc = 0x371054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371050u;
            // 0x371054: 0xac89002c  sw          $t1, 0x2C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371070u;
            goto label_371070;
        }
    }
    ctx->pc = 0x371058u;
label_371058:
    // 0x371058: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x371058u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_37105c:
    // 0x37105c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x37105cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_371060:
    // 0x371060: 0x0  nop
    ctx->pc = 0x371060u;
    // NOP
label_371064:
    // 0x371064: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_371068:
    if (ctx->pc == 0x371068u) {
        ctx->pc = 0x371068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371064u;
        // 0x371068: 0xac8a002c  sw          $t2, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37106Cu;
        goto label_37106c;
    }
    ctx->pc = 0x371064u;
    {
        const bool branch_taken_0x371064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371064) {
            ctx->pc = 0x371068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371064u;
            // 0x371068: 0xac8a002c  sw          $t2, 0x2C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371070u;
            goto label_371070;
        }
    }
    ctx->pc = 0x37106Cu;
label_37106c:
    // 0x37106c: 0xac88002c  sw          $t0, 0x2C($a0)
    ctx->pc = 0x37106cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 8));
label_371070:
    // 0x371070: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x371070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_371074:
    // 0x371074: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x371074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371078:
    // 0x371078: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_37107c:
    if (ctx->pc == 0x37107Cu) {
        ctx->pc = 0x37107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371078u;
        // 0x37107c: 0x38620003  xori        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x371080u;
        goto label_371080;
    }
    ctx->pc = 0x371078u;
    {
        const bool branch_taken_0x371078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x37107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371078u;
        // 0x37107c: 0x38620003  xori        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x371078) {
            ctx->pc = 0x371088u;
            goto label_371088;
        }
    }
    ctx->pc = 0x371080u;
label_371080:
    // 0x371080: 0x10000086  b           . + 4 + (0x86 << 2)
label_371084:
    if (ctx->pc == 0x371084u) {
        ctx->pc = 0x371084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371080u;
        // 0x371084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371088u;
        goto label_371088;
    }
    ctx->pc = 0x371080u;
    {
        const bool branch_taken_0x371080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371080u;
        // 0x371084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371080) {
            ctx->pc = 0x37129Cu;
            goto label_37129c;
        }
    }
    ctx->pc = 0x371088u;
label_371088:
    // 0x371088: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x371088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_37108c:
    // 0x37108c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
label_371090:
    if (ctx->pc == 0x371090u) {
        ctx->pc = 0x371090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37108Cu;
        // 0x371090: 0xc2380a  movz        $a3, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371094u;
        goto label_371094;
    }
    ctx->pc = 0x37108Cu;
    {
        const bool branch_taken_0x37108c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x371090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37108Cu;
        // 0x371090: 0xc2380a  movz        $a3, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37108c) {
            ctx->pc = 0x371018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371018;
        }
    }
    ctx->pc = 0x371094u;
label_371094:
    // 0x371094: 0x10e00075  beqz        $a3, . + 4 + (0x75 << 2)
label_371098:
    if (ctx->pc == 0x371098u) {
        ctx->pc = 0x371098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371094u;
        // 0x371098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37109Cu;
        goto label_37109c;
    }
    ctx->pc = 0x371094u;
    {
        const bool branch_taken_0x371094 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x371098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371094u;
        // 0x371098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371094) {
            ctx->pc = 0x37126Cu;
            goto label_37126c;
        }
    }
    ctx->pc = 0x37109Cu;
label_37109c:
    // 0x37109c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x37109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_3710a0:
    // 0x3710a0: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_3710a4:
    if (ctx->pc == 0x3710A4u) {
        ctx->pc = 0x3710A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710A0u;
        // 0x3710a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3710A8u;
        goto label_3710a8;
    }
    ctx->pc = 0x3710A0u;
    {
        const bool branch_taken_0x3710a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3710A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710A0u;
        // 0x3710a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3710a0) {
            ctx->pc = 0x371168u;
            goto label_371168;
        }
    }
    ctx->pc = 0x3710A8u;
label_3710a8:
    // 0x3710a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3710a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3710ac:
    // 0x3710ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3710acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3710b0:
    // 0x3710b0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3710b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3710b4:
    // 0x3710b4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_3710b8:
    if (ctx->pc == 0x3710B8u) {
        ctx->pc = 0x3710B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710B4u;
        // 0x3710b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3710BCu;
        goto label_3710bc;
    }
    ctx->pc = 0x3710B4u;
    {
        const bool branch_taken_0x3710b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3710B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710B4u;
        // 0x3710b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3710b4) {
            ctx->pc = 0x371144u;
            goto label_371144;
        }
    }
    ctx->pc = 0x3710BCu;
label_3710bc:
    // 0x3710bc: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x3710bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3710c0:
    // 0x3710c0: 0xc4a50014  lwc1        $f5, 0x14($a1)
    ctx->pc = 0x3710c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3710c4:
    // 0x3710c4: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x3710c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3710c8:
    // 0x3710c8: 0xc4a3001c  lwc1        $f3, 0x1C($a1)
    ctx->pc = 0x3710c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3710cc:
    // 0x3710cc: 0xc4a70020  lwc1        $f7, 0x20($a1)
    ctx->pc = 0x3710ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3710d0:
    // 0x3710d0: 0xc7898110  lwc1        $f9, -0x7EF0($gp)
    ctx->pc = 0x3710d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3710d4:
    // 0x3710d4: 0xc7888114  lwc1        $f8, -0x7EEC($gp)
    ctx->pc = 0x3710d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3710d8:
    // 0x3710d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3710d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3710dc:
    // 0x3710dc: 0x0  nop
    ctx->pc = 0x3710dcu;
    // NOP
label_3710e0:
    // 0x3710e0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3710e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3710e4:
    // 0x3710e4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3710e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_3710e8:
    // 0x3710e8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3710e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3710ec:
    // 0x3710ec: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3710ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3710f0:
    // 0x3710f0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3710f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3710f4:
    // 0x3710f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3710f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3710f8:
    // 0x3710f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3710f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3710fc:
    // 0x3710fc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3710fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_371100:
    // 0x371100: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x371100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_371104:
    // 0x371104: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x371104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_371108:
    // 0x371108: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_37110c:
    if (ctx->pc == 0x37110Cu) {
        ctx->pc = 0x371110u;
        goto label_371110;
    }
    ctx->pc = 0x371108u;
    {
        const bool branch_taken_0x371108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x371108) {
            ctx->pc = 0x371118u;
            goto label_371118;
        }
    }
    ctx->pc = 0x371110u;
label_371110:
    // 0x371110: 0x10000005  b           . + 4 + (0x5 << 2)
label_371114:
    if (ctx->pc == 0x371114u) {
        ctx->pc = 0x371114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371110u;
        // 0x371114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371118u;
        goto label_371118;
    }
    ctx->pc = 0x371110u;
    {
        const bool branch_taken_0x371110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371110u;
        // 0x371114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371110) {
            ctx->pc = 0x371128u;
            goto label_371128;
        }
    }
    ctx->pc = 0x371118u;
label_371118:
    // 0x371118: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x371118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37111c:
    // 0x37111c: 0x0  nop
    ctx->pc = 0x37111cu;
    // NOP
label_371120:
    // 0x371120: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_371124:
    if (ctx->pc == 0x371124u) {
        ctx->pc = 0x371124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371120u;
        // 0x371124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371128u;
        goto label_371128;
    }
    ctx->pc = 0x371120u;
    {
        const bool branch_taken_0x371120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371120) {
            ctx->pc = 0x371124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371120u;
            // 0x371124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371128u;
            goto label_371128;
        }
    }
    ctx->pc = 0x371128u;
label_371128:
    // 0x371128: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_37112c:
    if (ctx->pc == 0x37112Cu) {
        ctx->pc = 0x37112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371128u;
        // 0x37112c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371130u;
        goto label_371130;
    }
    ctx->pc = 0x371128u;
    {
        const bool branch_taken_0x371128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371128) {
            ctx->pc = 0x37112Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371128u;
            // 0x37112c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37113Cu;
            goto label_37113c;
        }
    }
    ctx->pc = 0x371130u;
label_371130:
    // 0x371130: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_371134:
    if (ctx->pc == 0x371134u) {
        ctx->pc = 0x371138u;
        goto label_371138;
    }
    ctx->pc = 0x371130u;
    {
        const bool branch_taken_0x371130 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x371130) {
            ctx->pc = 0x37114Cu;
            goto label_37114c;
        }
    }
    ctx->pc = 0x371138u;
label_371138:
    // 0x371138: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x371138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_37113c:
    // 0x37113c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
label_371140:
    if (ctx->pc == 0x371140u) {
        ctx->pc = 0x371140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37113Cu;
        // 0x371140: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x371144u;
        goto label_371144;
    }
    ctx->pc = 0x37113Cu;
    {
        const bool branch_taken_0x37113c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37113c) {
            ctx->pc = 0x371140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37113Cu;
            // 0x371140: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3710E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3710e0;
        }
    }
    ctx->pc = 0x371144u;
label_371144:
    // 0x371144: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_371148:
    if (ctx->pc == 0x371148u) {
        ctx->pc = 0x37114Cu;
        goto label_37114c;
    }
    ctx->pc = 0x371144u;
    {
        const bool branch_taken_0x371144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x371144) {
            ctx->pc = 0x371154u;
            goto label_371154;
        }
    }
    ctx->pc = 0x37114Cu;
label_37114c:
    // 0x37114c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_371150:
    if (ctx->pc == 0x371150u) {
        ctx->pc = 0x371150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37114Cu;
        // 0x371150: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371154u;
        goto label_371154;
    }
    ctx->pc = 0x37114Cu;
    {
        const bool branch_taken_0x37114c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x371150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37114Cu;
        // 0x371150: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37114c) {
            ctx->pc = 0x371168u;
            goto label_371168;
        }
    }
    ctx->pc = 0x371154u;
label_371154:
    // 0x371154: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_371158:
    if (ctx->pc == 0x371158u) {
        ctx->pc = 0x371158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371154u;
        // 0x371158: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37115Cu;
        goto label_37115c;
    }
    ctx->pc = 0x371154u;
    {
        const bool branch_taken_0x371154 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x371158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371154u;
        // 0x371158: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371154) {
            ctx->pc = 0x371168u;
            goto label_371168;
        }
    }
    ctx->pc = 0x37115Cu;
label_37115c:
    // 0x37115c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_371160:
    // 0x371160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371164:
    // 0x371164: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x371164u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_371168:
    // 0x371168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37116c:
    // 0x37116c: 0x5062004c  beql        $v1, $v0, . + 4 + (0x4C << 2)
label_371170:
    if (ctx->pc == 0x371170u) {
        ctx->pc = 0x371170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37116Cu;
        // 0x371170: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371174u;
        goto label_371174;
    }
    ctx->pc = 0x37116Cu;
    {
        const bool branch_taken_0x37116c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37116c) {
            ctx->pc = 0x371170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37116Cu;
            // 0x371170: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3712A0u;
            goto label_3712a0;
        }
    }
    ctx->pc = 0x371174u;
label_371174:
    // 0x371174: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x371174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_371178:
    // 0x371178: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
label_37117c:
    if (ctx->pc == 0x37117Cu) {
        ctx->pc = 0x371180u;
        goto label_371180;
    }
    ctx->pc = 0x371178u;
    {
        const bool branch_taken_0x371178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371178) {
            ctx->pc = 0x371264u;
            goto label_371264;
        }
    }
    ctx->pc = 0x371180u;
label_371180:
    // 0x371180: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x371180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_371184:
    // 0x371184: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x371184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371188:
    // 0x371188: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x371188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_37118c:
    // 0x37118c: 0x1449002f  bne         $v0, $t1, . + 4 + (0x2F << 2)
label_371190:
    if (ctx->pc == 0x371190u) {
        ctx->pc = 0x371190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37118Cu;
        // 0x371190: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371194u;
        goto label_371194;
    }
    ctx->pc = 0x37118Cu;
    {
        const bool branch_taken_0x37118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x371190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37118Cu;
        // 0x371190: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37118c) {
            ctx->pc = 0x37124Cu;
            goto label_37124c;
        }
    }
    ctx->pc = 0x371194u;
label_371194:
    // 0x371194: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x371194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371198:
    // 0x371198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37119c:
    // 0x37119c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x37119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3711a0:
    // 0x3711a0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3711a4:
    if (ctx->pc == 0x3711A4u) {
        ctx->pc = 0x3711A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711A0u;
        // 0x3711a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3711A8u;
        goto label_3711a8;
    }
    ctx->pc = 0x3711A0u;
    {
        const bool branch_taken_0x3711a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3711A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711A0u;
        // 0x3711a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3711a0) {
            ctx->pc = 0x37122Cu;
            goto label_37122c;
        }
    }
    ctx->pc = 0x3711A8u;
label_3711a8:
    // 0x3711a8: 0xc4860018  lwc1        $f6, 0x18($a0)
    ctx->pc = 0x3711a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3711ac:
    // 0x3711ac: 0xc485001c  lwc1        $f5, 0x1C($a0)
    ctx->pc = 0x3711acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3711b0:
    // 0x3711b0: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x3711b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3711b4:
    // 0x3711b4: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x3711b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3711b8:
    // 0x3711b8: 0xc4870028  lwc1        $f7, 0x28($a0)
    ctx->pc = 0x3711b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3711bc:
    // 0x3711bc: 0xc7898110  lwc1        $f9, -0x7EF0($gp)
    ctx->pc = 0x3711bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3711c0:
    // 0x3711c0: 0xc7888114  lwc1        $f8, -0x7EEC($gp)
    ctx->pc = 0x3711c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3711c4:
    // 0x3711c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3711c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3711c8:
    // 0x3711c8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3711c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3711cc:
    // 0x3711cc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3711ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_3711d0:
    // 0x3711d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3711d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3711d4:
    // 0x3711d4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3711d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3711d8:
    // 0x3711d8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3711d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3711dc:
    // 0x3711dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3711dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3711e0:
    // 0x3711e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3711e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3711e4:
    // 0x3711e4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3711e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3711e8:
    // 0x3711e8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3711e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_3711ec:
    // 0x3711ec: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x3711ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3711f0:
    // 0x3711f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3711f4:
    if (ctx->pc == 0x3711F4u) {
        ctx->pc = 0x3711F8u;
        goto label_3711f8;
    }
    ctx->pc = 0x3711F0u;
    {
        const bool branch_taken_0x3711f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3711f0) {
            ctx->pc = 0x371200u;
            goto label_371200;
        }
    }
    ctx->pc = 0x3711F8u;
label_3711f8:
    // 0x3711f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3711fc:
    if (ctx->pc == 0x3711FCu) {
        ctx->pc = 0x3711FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711F8u;
        // 0x3711fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371200u;
        goto label_371200;
    }
    ctx->pc = 0x3711F8u;
    {
        const bool branch_taken_0x3711f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3711FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711F8u;
        // 0x3711fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3711f8) {
            ctx->pc = 0x371210u;
            goto label_371210;
        }
    }
    ctx->pc = 0x371200u;
label_371200:
    // 0x371200: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x371200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_371204:
    // 0x371204: 0x0  nop
    ctx->pc = 0x371204u;
    // NOP
label_371208:
    // 0x371208: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_37120c:
    if (ctx->pc == 0x37120Cu) {
        ctx->pc = 0x37120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371208u;
        // 0x37120c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371210u;
        goto label_371210;
    }
    ctx->pc = 0x371208u;
    {
        const bool branch_taken_0x371208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371208) {
            ctx->pc = 0x37120Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371208u;
            // 0x37120c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371210u;
            goto label_371210;
        }
    }
    ctx->pc = 0x371210u;
label_371210:
    // 0x371210: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_371214:
    if (ctx->pc == 0x371214u) {
        ctx->pc = 0x371214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371210u;
        // 0x371214: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371218u;
        goto label_371218;
    }
    ctx->pc = 0x371210u;
    {
        const bool branch_taken_0x371210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x371210) {
            ctx->pc = 0x371214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371210u;
            // 0x371214: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371224u;
            goto label_371224;
        }
    }
    ctx->pc = 0x371218u;
label_371218:
    // 0x371218: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_37121c:
    if (ctx->pc == 0x37121Cu) {
        ctx->pc = 0x371220u;
        goto label_371220;
    }
    ctx->pc = 0x371218u;
    {
        const bool branch_taken_0x371218 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x371218) {
            ctx->pc = 0x371234u;
            goto label_371234;
        }
    }
    ctx->pc = 0x371220u;
label_371220:
    // 0x371220: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x371220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_371224:
    // 0x371224: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
label_371228:
    if (ctx->pc == 0x371228u) {
        ctx->pc = 0x371228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371224u;
        // 0x371228: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37122Cu;
        goto label_37122c;
    }
    ctx->pc = 0x371224u;
    {
        const bool branch_taken_0x371224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x371224) {
            ctx->pc = 0x371228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371224u;
            // 0x371228: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3711C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3711c8;
        }
    }
    ctx->pc = 0x37122Cu;
label_37122c:
    // 0x37122c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_371230:
    if (ctx->pc == 0x371230u) {
        ctx->pc = 0x371234u;
        goto label_371234;
    }
    ctx->pc = 0x37122Cu;
    {
        const bool branch_taken_0x37122c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37122c) {
            ctx->pc = 0x37123Cu;
            goto label_37123c;
        }
    }
    ctx->pc = 0x371234u;
label_371234:
    // 0x371234: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_371238:
    if (ctx->pc == 0x371238u) {
        ctx->pc = 0x371238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371234u;
        // 0x371238: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37123Cu;
        goto label_37123c;
    }
    ctx->pc = 0x371234u;
    {
        const bool branch_taken_0x371234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x371238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371234u;
        // 0x371238: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371234) {
            ctx->pc = 0x37124Cu;
            goto label_37124c;
        }
    }
    ctx->pc = 0x37123Cu;
label_37123c:
    // 0x37123c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_371240:
    if (ctx->pc == 0x371240u) {
        ctx->pc = 0x371240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37123Cu;
        // 0x371240: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371244u;
        goto label_371244;
    }
    ctx->pc = 0x37123Cu;
    {
        const bool branch_taken_0x37123c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x371240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37123Cu;
        // 0x371240: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37123c) {
            ctx->pc = 0x37124Cu;
            goto label_37124c;
        }
    }
    ctx->pc = 0x371244u;
label_371244:
    // 0x371244: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x371244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_371248:
    // 0x371248: 0x106180b  movn        $v1, $t0, $a2
    ctx->pc = 0x371248u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
label_37124c:
    // 0x37124c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371250:
    // 0x371250: 0x1065ff8b  beq         $v1, $a1, . + 4 + (-0x75 << 2)
label_371254:
    if (ctx->pc == 0x371254u) {
        ctx->pc = 0x371254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371250u;
        // 0x371254: 0x38620003  xori        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x371258u;
        goto label_371258;
    }
    ctx->pc = 0x371250u;
    {
        const bool branch_taken_0x371250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x371254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371250u;
        // 0x371254: 0x38620003  xori        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x371250) {
            ctx->pc = 0x371080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371080;
        }
    }
    ctx->pc = 0x371258u;
label_371258:
    // 0x371258: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x371258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_37125c:
    // 0x37125c: 0x1480ffca  bnez        $a0, . + 4 + (-0x36 << 2)
label_371260:
    if (ctx->pc == 0x371260u) {
        ctx->pc = 0x371260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37125Cu;
        // 0x371260: 0xa2380a  movz        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371264u;
        goto label_371264;
    }
    ctx->pc = 0x37125Cu;
    {
        const bool branch_taken_0x37125c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x371260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37125Cu;
        // 0x371260: 0xa2380a  movz        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37125c) {
            ctx->pc = 0x371188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371188;
        }
    }
    ctx->pc = 0x371264u;
label_371264:
    // 0x371264: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
label_371268:
    if (ctx->pc == 0x371268u) {
        ctx->pc = 0x371268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371264u;
        // 0x371268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37126Cu;
        goto label_37126c;
    }
    ctx->pc = 0x371264u;
    {
        const bool branch_taken_0x371264 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x371268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371264u;
        // 0x371268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371264) {
            ctx->pc = 0x37129Cu;
            goto label_37129c;
        }
    }
    ctx->pc = 0x37126Cu;
label_37126c:
    // 0x37126c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x37126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371270:
    // 0x371270: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x371270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_371274:
    // 0x371274: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_371278:
    if (ctx->pc == 0x371278u) {
        ctx->pc = 0x371278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371274u;
        // 0x371278: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37127Cu;
        goto label_37127c;
    }
    ctx->pc = 0x371274u;
    {
        const bool branch_taken_0x371274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371274u;
        // 0x371278: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371274) {
            ctx->pc = 0x371288u;
            goto label_371288;
        }
    }
    ctx->pc = 0x37127Cu;
label_37127c:
    // 0x37127c: 0xc0ddfae  jal         func_377EB8
label_371280:
    if (ctx->pc == 0x371280u) {
        ctx->pc = 0x371280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37127Cu;
        // 0x371280: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371284u;
        goto label_371284;
    }
    ctx->pc = 0x37127Cu;
    SET_GPR_U32(ctx, 31, 0x371284u);
    ctx->pc = 0x371280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37127Cu;
    // 0x371280: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x37127Cu, 0x371284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371284u;
label_371284:
    // 0x371284: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x371284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_371288:
    // 0x371288: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x371288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_37128c:
    // 0x37128c: 0x40f809  jalr        $v0
label_371290:
    if (ctx->pc == 0x371290u) {
        ctx->pc = 0x371290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37128Cu;
        // 0x371290: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371294u;
        goto label_371294;
    }
    ctx->pc = 0x37128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x371294u);
        ctx->pc = 0x371290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37128Cu;
        // 0x371290: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37128Cu, 0x371294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x371294u;
label_371294:
    // 0x371294: 0x1000ff7a  b           . + 4 + (-0x86 << 2)
label_371298:
    if (ctx->pc == 0x371298u) {
        ctx->pc = 0x371298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371294u;
        // 0x371298: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37129Cu;
        goto label_37129c;
    }
    ctx->pc = 0x371294u;
    {
        const bool branch_taken_0x371294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371294u;
        // 0x371298: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371294) {
            ctx->pc = 0x371080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371080;
        }
    }
    ctx->pc = 0x37129Cu;
label_37129c:
    // 0x37129c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37129cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3712a0:
    // 0x3712a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3712a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3712a4:
    // 0x3712a4: 0x3e00008  jr          $ra
label_3712a8:
    if (ctx->pc == 0x3712A8u) {
        ctx->pc = 0x3712A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712A4u;
        // 0x3712a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3712ACu;
        goto label_3712ac;
    }
    ctx->pc = 0x3712A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3712A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712A4u;
        // 0x3712a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3712A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3712ACu;
label_3712ac:
    // 0x3712ac: 0x0  nop
    ctx->pc = 0x3712acu;
    // NOP
    ctx->pc = 0x3712b0u;
}
