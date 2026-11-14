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

// Function: sub_001822F0
// Address: 0x1822f0 - 0x1824e0
void sub_001822F0_0x1822f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001822F0_0x1822f0");
#endif

    switch (ctx->pc) {
        case 0x1824c0u: goto label_1824c0;
        default: break;
    }

    ctx->pc = 0x1822f0u;

    // 0x1822f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1822f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1822f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1822f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1822f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1822f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1822fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1822fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x182300: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182308: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18230c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182310: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182314: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182318: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18231c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182320: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x182320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x182324: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x182324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x182328: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18232c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182330: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182334: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182338: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18233c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182340: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x182340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x182344: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x182344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x182348: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18234c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182350: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182354: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182358: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18235c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182360: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x182364: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x182364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x182368: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18236c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182370: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182374: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182378: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x182378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18237c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x18237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182384: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x182384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x182388: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18238c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182390: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x182390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x182394: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x182398: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18239c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1823a0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1823a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1823a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1823a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1823a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1823a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1823ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1823acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1823b0: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x1823b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x1823b4: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1823b8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1823b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1823bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1823bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1823c0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1823c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1823c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1823c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1823c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1823cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1823ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1823d0: 0x24630034  addiu       $v1, $v1, 0x34
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x1823d4: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x1823d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1823d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1823d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1823dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1823dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1823e0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1823e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1823e4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1823e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1823e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1823e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1823ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1823ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1823f0: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1823f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1823f4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1823f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1823f8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1823f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1823fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1823fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182400: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182404: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182408: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18240c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182410: 0x24630044  addiu       $v1, $v1, 0x44
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x182414: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x182414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x182418: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18241c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182420: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182424: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182428: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18242c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182430: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x182430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x182434: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x182434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x182438: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18243c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182440: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182444: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182448: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18244c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182450: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x182450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x182454: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x182454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x182458: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18245c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182460: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x182460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182464: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x182464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182468: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x182468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18246c: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x18246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182474: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x182474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x182478: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18247c: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x18247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182484: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x182484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x182488: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x182488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18248c: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x18248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182494: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x182494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x182498: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x182498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18249c: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x18249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1824a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1824a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1824a4: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x1824a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x1824a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1824a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1824ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1824b0: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x1824b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x1824b4: 0x2445006c  addiu       $a1, $v0, 0x6C
    ctx->pc = 0x1824b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1824b8: 0xc060938  jal         func_1824E0
    ctx->pc = 0x1824B8u;
    SET_GPR_U32(ctx, 31, 0x1824C0u);
    ctx->pc = 0x1824E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1824E0u, 0x1824B8u, 0x1824C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824C0u;
label_1824c0:
    // 0x1824c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1824c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1824c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1824c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1824c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1824c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1824cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1824CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1824CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1824D4u;
    // 0x1824d4: 0x0  nop
    ctx->pc = 0x1824d4u;
    // NOP
    // 0x1824d8: 0x0  nop
    ctx->pc = 0x1824d8u;
    // NOP
    // 0x1824dc: 0x0  nop
    ctx->pc = 0x1824dcu;
    // NOP
    ctx->pc = 0x1824e0u;
}
