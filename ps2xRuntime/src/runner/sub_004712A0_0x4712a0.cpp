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

// Function: sub_004712A0
// Address: 0x4712a0 - 0x4714f0
void sub_004712A0_0x4712a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004712A0_0x4712a0");
#endif

    switch (ctx->pc) {
        case 0x4712a0u: goto label_4712a0;
        case 0x4712a4u: goto label_4712a4;
        case 0x4712a8u: goto label_4712a8;
        case 0x4712acu: goto label_4712ac;
        case 0x4712b0u: goto label_4712b0;
        case 0x4712b4u: goto label_4712b4;
        case 0x4712b8u: goto label_4712b8;
        case 0x4712bcu: goto label_4712bc;
        case 0x4712c0u: goto label_4712c0;
        case 0x4712c4u: goto label_4712c4;
        case 0x4712c8u: goto label_4712c8;
        case 0x4712ccu: goto label_4712cc;
        case 0x4712d0u: goto label_4712d0;
        case 0x4712d4u: goto label_4712d4;
        case 0x4712d8u: goto label_4712d8;
        case 0x4712dcu: goto label_4712dc;
        case 0x4712e0u: goto label_4712e0;
        case 0x4712e4u: goto label_4712e4;
        case 0x4712e8u: goto label_4712e8;
        case 0x4712ecu: goto label_4712ec;
        case 0x4712f0u: goto label_4712f0;
        case 0x4712f4u: goto label_4712f4;
        case 0x4712f8u: goto label_4712f8;
        case 0x4712fcu: goto label_4712fc;
        case 0x471300u: goto label_471300;
        case 0x471304u: goto label_471304;
        case 0x471308u: goto label_471308;
        case 0x47130cu: goto label_47130c;
        case 0x471310u: goto label_471310;
        case 0x471314u: goto label_471314;
        case 0x471318u: goto label_471318;
        case 0x47131cu: goto label_47131c;
        case 0x471320u: goto label_471320;
        case 0x471324u: goto label_471324;
        case 0x471328u: goto label_471328;
        case 0x47132cu: goto label_47132c;
        case 0x471330u: goto label_471330;
        case 0x471334u: goto label_471334;
        case 0x471338u: goto label_471338;
        case 0x47133cu: goto label_47133c;
        case 0x471340u: goto label_471340;
        case 0x471344u: goto label_471344;
        case 0x471348u: goto label_471348;
        case 0x47134cu: goto label_47134c;
        case 0x471350u: goto label_471350;
        case 0x471354u: goto label_471354;
        case 0x471358u: goto label_471358;
        case 0x47135cu: goto label_47135c;
        case 0x471360u: goto label_471360;
        case 0x471364u: goto label_471364;
        case 0x471368u: goto label_471368;
        case 0x47136cu: goto label_47136c;
        case 0x471370u: goto label_471370;
        case 0x471374u: goto label_471374;
        case 0x471378u: goto label_471378;
        case 0x47137cu: goto label_47137c;
        case 0x471380u: goto label_471380;
        case 0x471384u: goto label_471384;
        case 0x471388u: goto label_471388;
        case 0x47138cu: goto label_47138c;
        case 0x471390u: goto label_471390;
        case 0x471394u: goto label_471394;
        case 0x471398u: goto label_471398;
        case 0x47139cu: goto label_47139c;
        case 0x4713a0u: goto label_4713a0;
        case 0x4713a4u: goto label_4713a4;
        case 0x4713a8u: goto label_4713a8;
        case 0x4713acu: goto label_4713ac;
        case 0x4713b0u: goto label_4713b0;
        case 0x4713b4u: goto label_4713b4;
        case 0x4713b8u: goto label_4713b8;
        case 0x4713bcu: goto label_4713bc;
        case 0x4713c0u: goto label_4713c0;
        case 0x4713c4u: goto label_4713c4;
        case 0x4713c8u: goto label_4713c8;
        case 0x4713ccu: goto label_4713cc;
        case 0x4713d0u: goto label_4713d0;
        case 0x4713d4u: goto label_4713d4;
        case 0x4713d8u: goto label_4713d8;
        case 0x4713dcu: goto label_4713dc;
        case 0x4713e0u: goto label_4713e0;
        case 0x4713e4u: goto label_4713e4;
        case 0x4713e8u: goto label_4713e8;
        case 0x4713ecu: goto label_4713ec;
        case 0x4713f0u: goto label_4713f0;
        case 0x4713f4u: goto label_4713f4;
        case 0x4713f8u: goto label_4713f8;
        case 0x4713fcu: goto label_4713fc;
        case 0x471400u: goto label_471400;
        case 0x471404u: goto label_471404;
        case 0x471408u: goto label_471408;
        case 0x47140cu: goto label_47140c;
        case 0x471410u: goto label_471410;
        case 0x471414u: goto label_471414;
        case 0x471418u: goto label_471418;
        case 0x47141cu: goto label_47141c;
        case 0x471420u: goto label_471420;
        case 0x471424u: goto label_471424;
        case 0x471428u: goto label_471428;
        case 0x47142cu: goto label_47142c;
        case 0x471430u: goto label_471430;
        case 0x471434u: goto label_471434;
        case 0x471438u: goto label_471438;
        case 0x47143cu: goto label_47143c;
        case 0x471440u: goto label_471440;
        case 0x471444u: goto label_471444;
        case 0x471448u: goto label_471448;
        case 0x47144cu: goto label_47144c;
        case 0x471450u: goto label_471450;
        case 0x471454u: goto label_471454;
        case 0x471458u: goto label_471458;
        case 0x47145cu: goto label_47145c;
        case 0x471460u: goto label_471460;
        case 0x471464u: goto label_471464;
        case 0x471468u: goto label_471468;
        case 0x47146cu: goto label_47146c;
        case 0x471470u: goto label_471470;
        case 0x471474u: goto label_471474;
        case 0x471478u: goto label_471478;
        case 0x47147cu: goto label_47147c;
        case 0x471480u: goto label_471480;
        case 0x471484u: goto label_471484;
        case 0x471488u: goto label_471488;
        case 0x47148cu: goto label_47148c;
        case 0x471490u: goto label_471490;
        case 0x471494u: goto label_471494;
        case 0x471498u: goto label_471498;
        case 0x47149cu: goto label_47149c;
        case 0x4714a0u: goto label_4714a0;
        case 0x4714a4u: goto label_4714a4;
        case 0x4714a8u: goto label_4714a8;
        case 0x4714acu: goto label_4714ac;
        case 0x4714b0u: goto label_4714b0;
        case 0x4714b4u: goto label_4714b4;
        case 0x4714b8u: goto label_4714b8;
        case 0x4714bcu: goto label_4714bc;
        case 0x4714c0u: goto label_4714c0;
        case 0x4714c4u: goto label_4714c4;
        case 0x4714c8u: goto label_4714c8;
        case 0x4714ccu: goto label_4714cc;
        case 0x4714d0u: goto label_4714d0;
        case 0x4714d4u: goto label_4714d4;
        case 0x4714d8u: goto label_4714d8;
        case 0x4714dcu: goto label_4714dc;
        case 0x4714e0u: goto label_4714e0;
        case 0x4714e4u: goto label_4714e4;
        case 0x4714e8u: goto label_4714e8;
        case 0x4714ecu: goto label_4714ec;
        default: break;
    }

    ctx->pc = 0x4712a0u;

label_4712a0:
    // 0x4712a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4712a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4712a4:
    // 0x4712a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4712a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4712a8:
    // 0x4712a8: 0xe7ac0110  swc1        $f12, 0x110($sp)
    ctx->pc = 0x4712a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4712ac:
    // 0x4712ac: 0xe7ad0120  swc1        $f13, 0x120($sp)
    ctx->pc = 0x4712acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4712b0:
    // 0x4712b0: 0xe7ae0130  swc1        $f14, 0x130($sp)
    ctx->pc = 0x4712b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4712b4:
    // 0x4712b4: 0xe7af0140  swc1        $f15, 0x140($sp)
    ctx->pc = 0x4712b4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4712b8:
    // 0x4712b8: 0xe7b00150  swc1        $f16, 0x150($sp)
    ctx->pc = 0x4712b8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_4712bc:
    // 0x4712bc: 0xe7b10160  swc1        $f17, 0x160($sp)
    ctx->pc = 0x4712bcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_4712c0:
    // 0x4712c0: 0xe7b20170  swc1        $f18, 0x170($sp)
    ctx->pc = 0x4712c0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4712c4:
    // 0x4712c4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x4712c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4712c8:
    // 0x4712c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x4712c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4712cc:
    // 0x4712cc: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x4712ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4712d0:
    // 0x4712d0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x4712d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4712d4:
    // 0x4712d4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x4712d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4712d8:
    // 0x4712d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x4712d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4712dc:
    // 0x4712dc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4712dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4712e0:
    // 0x4712e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4712e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4712e4:
    // 0x4712e4: 0x0  nop
    ctx->pc = 0x4712e4u;
    // NOP
label_4712e8:
    // 0x4712e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4712e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4712ec:
    // 0x4712ec: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4712ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4712f0:
    // 0x4712f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4712f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4712f4:
    // 0x4712f4: 0x0  nop
    ctx->pc = 0x4712f4u;
    // NOP
label_4712f8:
    // 0x4712f8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x4712f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4712fc:
    // 0x4712fc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471300:
    // 0x471300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471304:
    // 0x471304: 0x0  nop
    ctx->pc = 0x471304u;
    // NOP
label_471308:
    // 0x471308: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x471308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_47130c:
    // 0x47130c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x47130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471310:
    // 0x471310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471314:
    // 0x471314: 0x0  nop
    ctx->pc = 0x471314u;
    // NOP
label_471318:
    // 0x471318: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x471318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_47131c:
    // 0x47131c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x47131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471320:
    // 0x471320: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x471320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_471324:
    // 0x471324: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x471324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471328:
    // 0x471328: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x471328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_47132c:
    // 0x47132c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x47132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471330:
    // 0x471330: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x471330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_471334:
    // 0x471334: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x471334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471338:
    // 0x471338: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x471338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_47133c:
    // 0x47133c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x47133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471340:
    // 0x471340: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x471340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_471344:
    // 0x471344: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x471344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471348:
    // 0x471348: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x471348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_47134c:
    // 0x47134c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x47134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471350:
    // 0x471350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471354:
    // 0x471354: 0x0  nop
    ctx->pc = 0x471354u;
    // NOP
label_471358:
    // 0x471358: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x471358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_47135c:
    // 0x47135c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x47135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471360:
    // 0x471360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471364:
    // 0x471364: 0x0  nop
    ctx->pc = 0x471364u;
    // NOP
label_471368:
    // 0x471368: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x471368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_47136c:
    // 0x47136c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x47136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471370:
    // 0x471370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471374:
    // 0x471374: 0x0  nop
    ctx->pc = 0x471374u;
    // NOP
label_471378:
    // 0x471378: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x471378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_47137c:
    // 0x47137c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x47137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471380:
    // 0x471380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471384:
    // 0x471384: 0x0  nop
    ctx->pc = 0x471384u;
    // NOP
label_471388:
    // 0x471388: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x471388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_47138c:
    // 0x47138c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x47138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471390:
    // 0x471390: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x471390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_471394:
    // 0x471394: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x471394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471398:
    // 0x471398: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x471398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_47139c:
    // 0x47139c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4713a0:
    // 0x4713a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4713a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4713a4:
    // 0x4713a4: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x4713a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4713a8:
    // 0x4713a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4713a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4713ac:
    // 0x4713ac: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4713acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4713b0:
    // 0x4713b0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x4713b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4713b4:
    // 0x4713b4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4713b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4713b8:
    // 0x4713b8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x4713b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4713bc:
    // 0x4713bc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x4713bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4713c0:
    // 0x4713c0: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x4713c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4713c4:
    // 0x4713c4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4713c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4713c8:
    // 0x4713c8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4713c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4713cc:
    // 0x4713cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4713ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4713d0:
    // 0x4713d0: 0x0  nop
    ctx->pc = 0x4713d0u;
    // NOP
label_4713d4:
    // 0x4713d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x4713d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4713d8:
    // 0x4713d8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4713d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4713dc:
    // 0x4713dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4713dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4713e0:
    // 0x4713e0: 0x0  nop
    ctx->pc = 0x4713e0u;
    // NOP
label_4713e4:
    // 0x4713e4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x4713e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_4713e8:
    // 0x4713e8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4713e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4713ec:
    // 0x4713ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4713ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4713f0:
    // 0x4713f0: 0x0  nop
    ctx->pc = 0x4713f0u;
    // NOP
label_4713f4:
    // 0x4713f4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x4713f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4713f8:
    // 0x4713f8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4713f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4713fc:
    // 0x4713fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4713fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471400:
    // 0x471400: 0x0  nop
    ctx->pc = 0x471400u;
    // NOP
label_471404:
    // 0x471404: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x471404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_471408:
    // 0x471408: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x471408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47140c:
    // 0x47140c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x47140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_471410:
    // 0x471410: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x471410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_471414:
    // 0x471414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x471414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_471418:
    // 0x471418: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x471418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47141c:
    // 0x47141c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47141cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_471420:
    // 0x471420: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x471420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_471424:
    // 0x471424: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x471424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471428:
    // 0x471428: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x471428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_47142c:
    // 0x47142c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x47142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471430:
    // 0x471430: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x471430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_471434:
    // 0x471434: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x471434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471438:
    // 0x471438: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x471438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_47143c:
    // 0x47143c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x47143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471440:
    // 0x471440: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x471440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_471444:
    // 0x471444: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x471444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471448:
    // 0x471448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47144c:
    // 0x47144c: 0x0  nop
    ctx->pc = 0x47144cu;
    // NOP
label_471450:
    // 0x471450: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x471450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_471454:
    // 0x471454: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x471454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471458:
    // 0x471458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47145c:
    // 0x47145c: 0x0  nop
    ctx->pc = 0x47145cu;
    // NOP
label_471460:
    // 0x471460: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x471460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_471464:
    // 0x471464: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x471464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471468:
    // 0x471468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47146c:
    // 0x47146c: 0x0  nop
    ctx->pc = 0x47146cu;
    // NOP
label_471470:
    // 0x471470: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x471470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_471474:
    // 0x471474: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x471474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_471478:
    // 0x471478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47147c:
    // 0x47147c: 0x0  nop
    ctx->pc = 0x47147cu;
    // NOP
label_471480:
    // 0x471480: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x471480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_471484:
    // 0x471484: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x471484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471488:
    // 0x471488: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x471488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_47148c:
    // 0x47148c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_471490:
    // 0x471490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x471490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_471494:
    // 0x471494: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x471494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471498:
    // 0x471498: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x471498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47149c:
    // 0x47149c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x47149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4714a0:
    // 0x4714a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4714a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4714a4:
    // 0x4714a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4714a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4714a8:
    // 0x4714a8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x4714a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4714ac:
    // 0x4714ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4714acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4714b0:
    // 0x4714b0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x4714b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_4714b4:
    // 0x4714b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4714b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4714b8:
    // 0x4714b8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4714b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4714bc:
    // 0x4714bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4714bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4714c0:
    // 0x4714c0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4714c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4714c4:
    // 0x4714c4: 0x8c42e8b0  lw          $v0, -0x1750($v0)
    ctx->pc = 0x4714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961328)));
label_4714c8:
    // 0x4714c8: 0x40f809  jalr        $v0
label_4714cc:
    if (ctx->pc == 0x4714CCu) {
        ctx->pc = 0x4714D0u;
        goto label_4714d0;
    }
    ctx->pc = 0x4714C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4714D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4714C8u, 0x4714D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4714D0u;
label_4714d0:
    // 0x4714d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4714d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4714d4:
    // 0x4714d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4714d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4714d8:
    // 0x4714d8: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x4714d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4714dc:
    // 0x4714dc: 0x3e00008  jr          $ra
label_4714e0:
    if (ctx->pc == 0x4714E0u) {
        ctx->pc = 0x4714E4u;
        goto label_4714e4;
    }
    ctx->pc = 0x4714DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4714DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4714E4u;
label_4714e4:
    // 0x4714e4: 0x0  nop
    ctx->pc = 0x4714e4u;
    // NOP
label_4714e8:
    // 0x4714e8: 0x0  nop
    ctx->pc = 0x4714e8u;
    // NOP
label_4714ec:
    // 0x4714ec: 0x0  nop
    ctx->pc = 0x4714ecu;
    // NOP
    ctx->pc = 0x4714f0u;
}
