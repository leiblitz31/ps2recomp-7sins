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

// Function: sub_001BB210
// Address: 0x1bb210 - 0x1bb550
void sub_001BB210_0x1bb210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB210_0x1bb210");
#endif

    ctx->pc = 0x1bb210u;

    // 0x1bb210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb214: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1bb214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1bb218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb21c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb220: 0xe460be68  swc1        $f0, -0x4198($v1)
    ctx->pc = 0x1bb220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE68u, _value); } while (0); }
    // 0x1bb224: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1bb224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bb228: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1bb228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bb22c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB22Cu;
    {
        const bool branch_taken_0x1bb22c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1bb22c) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB234u;
    // 0x1bb234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb238: 0x0  nop
    ctx->pc = 0x1bb238u;
    // NOP
    // 0x1bb23c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb240: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB240u;
    {
        const bool branch_taken_0x1bb240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb240) {
            ctx->pc = 0x1BB264u;
            goto label_1bb264;
        }
    }
    ctx->pc = 0x1BB248u;
label_1bb248:
    // 0x1bb248: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1bb248u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bb24c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bb24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bb250: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bb250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bb254: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bb254u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb258: 0x0  nop
    ctx->pc = 0x1bb258u;
    // NOP
    // 0x1bb25c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb260: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bb260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bb264:
    // 0x1bb264: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1bb264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1bb268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb26c: 0x0  nop
    ctx->pc = 0x1bb26cu;
    // NOP
    // 0x1bb270: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bb270u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bb274: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb278: 0xc460be68  lwc1        $f0, -0x4198($v1)
    ctx->pc = 0x1bb278u;
    { uint32_t bits = FAST_READ32(0x60BE68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb27c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb27cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb280: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb284: 0xe460be68  swc1        $f0, -0x4198($v1)
    ctx->pc = 0x1bb284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE68u, _value); } while (0); }
    // 0x1bb288: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1bb288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1bb28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb290: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb294: 0xe460be6c  swc1        $f0, -0x4194($v1)
    ctx->pc = 0x1bb294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE6Cu, _value); } while (0); }
    // 0x1bb298: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1bb298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bb29c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1bb29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bb2a0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB2A0u;
    {
        const bool branch_taken_0x1bb2a0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1bb2a0) {
            ctx->pc = 0x1BB2BCu;
            goto label_1bb2bc;
        }
    }
    ctx->pc = 0x1BB2A8u;
    // 0x1bb2a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb2ac: 0x0  nop
    ctx->pc = 0x1bb2acu;
    // NOP
    // 0x1bb2b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb2b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB2B4u;
    {
        const bool branch_taken_0x1bb2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2b4) {
            ctx->pc = 0x1BB2D8u;
            goto label_1bb2d8;
        }
    }
    ctx->pc = 0x1BB2BCu;
label_1bb2bc:
    // 0x1bb2bc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1bb2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bb2c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bb2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bb2c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bb2c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bb2c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bb2c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb2cc: 0x0  nop
    ctx->pc = 0x1bb2ccu;
    // NOP
    // 0x1bb2d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb2d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb2d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bb2d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bb2d8:
    // 0x1bb2d8: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1bb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1bb2dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb2e0: 0x0  nop
    ctx->pc = 0x1bb2e0u;
    // NOP
    // 0x1bb2e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bb2e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bb2e8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb2ec: 0xc460be6c  lwc1        $f0, -0x4194($v1)
    ctx->pc = 0x1bb2ecu;
    { uint32_t bits = FAST_READ32(0x60BE6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb2f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb2f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb2f8: 0xe460be6c  swc1        $f0, -0x4194($v1)
    ctx->pc = 0x1bb2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE6Cu, _value); } while (0); }
    // 0x1bb2fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bb2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb300: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb304: 0xac64be58  sw          $a0, -0x41A8($v1)
    ctx->pc = 0x1bb304u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE58u, _value); } while (0);
    // 0x1bb308: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1bb308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bb30c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb310: 0xac64be5c  sw          $a0, -0x41A4($v1)
    ctx->pc = 0x1bb310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BE5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE5Cu, _value); } while (0);
    // 0x1bb314: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bb314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb31c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb320: 0xe460be70  swc1        $f0, -0x4190($v1)
    ctx->pc = 0x1bb320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE70u, _value); } while (0); }
    // 0x1bb324: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1bb324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1bb328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb32c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb330: 0xe460be50  swc1        $f0, -0x41B0($v1)
    ctx->pc = 0x1bb330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE50u, _value); } while (0); }
    // 0x1bb334: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1bb334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bb338: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb33c: 0xac64be74  sw          $a0, -0x418C($v1)
    ctx->pc = 0x1bb33cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BE74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE74u, _value); } while (0);
    // 0x1bb340: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1bb340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bb344: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb348: 0xac64be78  sw          $a0, -0x4188($v1)
    ctx->pc = 0x1bb348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BE78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE78u, _value); } while (0);
    // 0x1bb34c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bb34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb350: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb354: 0xac64bea8  sw          $a0, -0x4158($v1)
    ctx->pc = 0x1bb354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEA8u, _value); } while (0);
    // 0x1bb358: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb35c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb360: 0xac64beac  sw          $a0, -0x4154($v1)
    ctx->pc = 0x1bb360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEACu, _value); } while (0);
    // 0x1bb364: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1bb364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bb368: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb36c: 0xac64beb0  sw          $a0, -0x4150($v1)
    ctx->pc = 0x1bb36cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEB0u, _value); } while (0);
    // 0x1bb370: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb374: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb378: 0xac64beb4  sw          $a0, -0x414C($v1)
    ctx->pc = 0x1bb378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEB4u, _value); } while (0);
    // 0x1bb37c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bb37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb380: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb384: 0xac64beb8  sw          $a0, -0x4148($v1)
    ctx->pc = 0x1bb384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEB8u, _value); } while (0);
    // 0x1bb388: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bb388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb38c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb390: 0xac64bebc  sw          $a0, -0x4144($v1)
    ctx->pc = 0x1bb390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEBCu, _value); } while (0);
    // 0x1bb394: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bb394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bb398: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb39c: 0xac64bec0  sw          $a0, -0x4140($v1)
    ctx->pc = 0x1bb39cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEC0u, _value); } while (0);
    // 0x1bb3a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bb3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb3a4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3a8: 0xac64bec4  sw          $a0, -0x413C($v1)
    ctx->pc = 0x1bb3a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEC4u, _value); } while (0);
    // 0x1bb3ac: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3b0: 0xac60bec8  sw          $zero, -0x4138($v1)
    ctx->pc = 0x1bb3b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60BEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEC8u, _value); } while (0);
    // 0x1bb3b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bb3b8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3bc: 0xac64becc  sw          $a0, -0x4134($v1)
    ctx->pc = 0x1bb3bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BECCu, _value); } while (0);
    // 0x1bb3c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb3c4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3c8: 0xac64bed0  sw          $a0, -0x4130($v1)
    ctx->pc = 0x1bb3c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BED0u, _value); } while (0);
    // 0x1bb3cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb3d0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3d4: 0xac64bed4  sw          $a0, -0x412C($v1)
    ctx->pc = 0x1bb3d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BED4u, _value); } while (0);
    // 0x1bb3d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb3dc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3e0: 0xac64bed8  sw          $a0, -0x4128($v1)
    ctx->pc = 0x1bb3e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BED8u, _value); } while (0);
    // 0x1bb3e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bb3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb3e8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3ec: 0xac64bedc  sw          $a0, -0x4124($v1)
    ctx->pc = 0x1bb3ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEDCu, _value); } while (0);
    // 0x1bb3f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bb3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb3f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb3f8: 0xac64bee0  sw          $a0, -0x4120($v1)
    ctx->pc = 0x1bb3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEE0u, _value); } while (0);
    // 0x1bb3fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bb3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bb400: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb404: 0xac64bee4  sw          $a0, -0x411C($v1)
    ctx->pc = 0x1bb404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEE4u, _value); } while (0);
    // 0x1bb408: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bb408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb40c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb410: 0xac64bee8  sw          $a0, -0x4118($v1)
    ctx->pc = 0x1bb410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEE8u, _value); } while (0);
    // 0x1bb414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb418: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb41c: 0xac64beec  sw          $a0, -0x4114($v1)
    ctx->pc = 0x1bb41cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEECu, _value); } while (0);
    // 0x1bb420: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bb420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb424: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb428: 0xac64befc  sw          $a0, -0x4104($v1)
    ctx->pc = 0x1bb428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEFCu, _value); } while (0);
    // 0x1bb42c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bb42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb430: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb434: 0xac64bef4  sw          $a0, -0x410C($v1)
    ctx->pc = 0x1bb434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEF4u, _value); } while (0);
    // 0x1bb438: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bb438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb43c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb440: 0xac64bef8  sw          $a0, -0x4108($v1)
    ctx->pc = 0x1bb440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEF8u, _value); } while (0);
    // 0x1bb444: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bb444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb448: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb44c: 0xac64bef0  sw          $a0, -0x4110($v1)
    ctx->pc = 0x1bb44cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60BEF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEF0u, _value); } while (0);
    // 0x1bb450: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x1bb450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
    // 0x1bb454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb458: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb45c: 0xe460be60  swc1        $f0, -0x41A0($v1)
    ctx->pc = 0x1bb45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE60u, _value); } while (0); }
    // 0x1bb460: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bb464: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1bb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bb468: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB468u;
    {
        const bool branch_taken_0x1bb468 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1bb468) {
            ctx->pc = 0x1BB484u;
            goto label_1bb484;
        }
    }
    ctx->pc = 0x1BB470u;
    // 0x1bb470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb474: 0x0  nop
    ctx->pc = 0x1bb474u;
    // NOP
    // 0x1bb478: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb47c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB47Cu;
    {
        const bool branch_taken_0x1bb47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb47c) {
            ctx->pc = 0x1BB4A0u;
            goto label_1bb4a0;
        }
    }
    ctx->pc = 0x1BB484u;
label_1bb484:
    // 0x1bb484: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bb488: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bb488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bb48c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bb48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bb490: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bb490u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb494: 0x0  nop
    ctx->pc = 0x1bb494u;
    // NOP
    // 0x1bb498: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb49c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bb49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bb4a0:
    // 0x1bb4a0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1bb4a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb4a8: 0x0  nop
    ctx->pc = 0x1bb4a8u;
    // NOP
    // 0x1bb4ac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bb4acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bb4b0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb4b4: 0xc460be60  lwc1        $f0, -0x41A0($v1)
    ctx->pc = 0x1bb4b4u;
    { uint32_t bits = FAST_READ32(0x60BE60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb4b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb4bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb4c0: 0xe460be60  swc1        $f0, -0x41A0($v1)
    ctx->pc = 0x1bb4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE60u, _value); } while (0); }
    // 0x1bb4c4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1bb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1bb4c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb4c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb4cc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb4d0: 0xe460be64  swc1        $f0, -0x419C($v1)
    ctx->pc = 0x1bb4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE64u, _value); } while (0); }
    // 0x1bb4d4: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1bb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bb4d8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1bb4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bb4dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB4DCu;
    {
        const bool branch_taken_0x1bb4dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1bb4dc) {
            ctx->pc = 0x1BB4F8u;
            goto label_1bb4f8;
        }
    }
    ctx->pc = 0x1BB4E4u;
    // 0x1bb4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb4e8: 0x0  nop
    ctx->pc = 0x1bb4e8u;
    // NOP
    // 0x1bb4ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb4f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB4F0u;
    {
        const bool branch_taken_0x1bb4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb4f0) {
            ctx->pc = 0x1BB514u;
            goto label_1bb514;
        }
    }
    ctx->pc = 0x1BB4F8u;
label_1bb4f8:
    // 0x1bb4f8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1bb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bb4fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bb4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bb500: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bb500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bb504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bb504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb508: 0x0  nop
    ctx->pc = 0x1bb508u;
    // NOP
    // 0x1bb50c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb510: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bb510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bb514:
    // 0x1bb514: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1bb514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1bb518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb51c: 0x0  nop
    ctx->pc = 0x1bb51cu;
    // NOP
    // 0x1bb520: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bb520u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bb524: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb528: 0xc460be64  lwc1        $f0, -0x419C($v1)
    ctx->pc = 0x1bb528u;
    { uint32_t bits = FAST_READ32(0x60BE64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb52c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb530: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb534: 0xe460be64  swc1        $f0, -0x419C($v1)
    ctx->pc = 0x1bb534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE64u, _value); } while (0); }
    // 0x1bb538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1bb538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bb53c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB544u;
    // 0x1bb544: 0x0  nop
    ctx->pc = 0x1bb544u;
    // NOP
    // 0x1bb548: 0x0  nop
    ctx->pc = 0x1bb548u;
    // NOP
    // 0x1bb54c: 0x0  nop
    ctx->pc = 0x1bb54cu;
    // NOP
    ctx->pc = 0x1bb550u;
}
