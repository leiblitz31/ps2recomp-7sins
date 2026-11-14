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

// Function: sub_0031AB30
// Address: 0x31ab30 - 0x31ae50
void sub_0031AB30_0x31ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AB30_0x31ab30");
#endif

    switch (ctx->pc) {
        case 0x31ab30u: goto label_31ab30;
        case 0x31ab34u: goto label_31ab34;
        case 0x31ab38u: goto label_31ab38;
        case 0x31ab3cu: goto label_31ab3c;
        case 0x31ab40u: goto label_31ab40;
        case 0x31ab44u: goto label_31ab44;
        case 0x31ab48u: goto label_31ab48;
        case 0x31ab4cu: goto label_31ab4c;
        case 0x31ab50u: goto label_31ab50;
        case 0x31ab54u: goto label_31ab54;
        case 0x31ab58u: goto label_31ab58;
        case 0x31ab5cu: goto label_31ab5c;
        case 0x31ab60u: goto label_31ab60;
        case 0x31ab64u: goto label_31ab64;
        case 0x31ab68u: goto label_31ab68;
        case 0x31ab6cu: goto label_31ab6c;
        case 0x31ab70u: goto label_31ab70;
        case 0x31ab74u: goto label_31ab74;
        case 0x31ab78u: goto label_31ab78;
        case 0x31ab7cu: goto label_31ab7c;
        case 0x31ab80u: goto label_31ab80;
        case 0x31ab84u: goto label_31ab84;
        case 0x31ab88u: goto label_31ab88;
        case 0x31ab8cu: goto label_31ab8c;
        case 0x31ab90u: goto label_31ab90;
        case 0x31ab94u: goto label_31ab94;
        case 0x31ab98u: goto label_31ab98;
        case 0x31ab9cu: goto label_31ab9c;
        case 0x31aba0u: goto label_31aba0;
        case 0x31aba4u: goto label_31aba4;
        case 0x31aba8u: goto label_31aba8;
        case 0x31abacu: goto label_31abac;
        case 0x31abb0u: goto label_31abb0;
        case 0x31abb4u: goto label_31abb4;
        case 0x31abb8u: goto label_31abb8;
        case 0x31abbcu: goto label_31abbc;
        case 0x31abc0u: goto label_31abc0;
        case 0x31abc4u: goto label_31abc4;
        case 0x31abc8u: goto label_31abc8;
        case 0x31abccu: goto label_31abcc;
        case 0x31abd0u: goto label_31abd0;
        case 0x31abd4u: goto label_31abd4;
        case 0x31abd8u: goto label_31abd8;
        case 0x31abdcu: goto label_31abdc;
        case 0x31abe0u: goto label_31abe0;
        case 0x31abe4u: goto label_31abe4;
        case 0x31abe8u: goto label_31abe8;
        case 0x31abecu: goto label_31abec;
        case 0x31abf0u: goto label_31abf0;
        case 0x31abf4u: goto label_31abf4;
        case 0x31abf8u: goto label_31abf8;
        case 0x31abfcu: goto label_31abfc;
        case 0x31ac00u: goto label_31ac00;
        case 0x31ac04u: goto label_31ac04;
        case 0x31ac08u: goto label_31ac08;
        case 0x31ac0cu: goto label_31ac0c;
        case 0x31ac10u: goto label_31ac10;
        case 0x31ac14u: goto label_31ac14;
        case 0x31ac18u: goto label_31ac18;
        case 0x31ac1cu: goto label_31ac1c;
        case 0x31ac20u: goto label_31ac20;
        case 0x31ac24u: goto label_31ac24;
        case 0x31ac28u: goto label_31ac28;
        case 0x31ac2cu: goto label_31ac2c;
        case 0x31ac30u: goto label_31ac30;
        case 0x31ac34u: goto label_31ac34;
        case 0x31ac38u: goto label_31ac38;
        case 0x31ac3cu: goto label_31ac3c;
        case 0x31ac40u: goto label_31ac40;
        case 0x31ac44u: goto label_31ac44;
        case 0x31ac48u: goto label_31ac48;
        case 0x31ac4cu: goto label_31ac4c;
        case 0x31ac50u: goto label_31ac50;
        case 0x31ac54u: goto label_31ac54;
        case 0x31ac58u: goto label_31ac58;
        case 0x31ac5cu: goto label_31ac5c;
        case 0x31ac60u: goto label_31ac60;
        case 0x31ac64u: goto label_31ac64;
        case 0x31ac68u: goto label_31ac68;
        case 0x31ac6cu: goto label_31ac6c;
        case 0x31ac70u: goto label_31ac70;
        case 0x31ac74u: goto label_31ac74;
        case 0x31ac78u: goto label_31ac78;
        case 0x31ac7cu: goto label_31ac7c;
        case 0x31ac80u: goto label_31ac80;
        case 0x31ac84u: goto label_31ac84;
        case 0x31ac88u: goto label_31ac88;
        case 0x31ac8cu: goto label_31ac8c;
        case 0x31ac90u: goto label_31ac90;
        case 0x31ac94u: goto label_31ac94;
        case 0x31ac98u: goto label_31ac98;
        case 0x31ac9cu: goto label_31ac9c;
        case 0x31aca0u: goto label_31aca0;
        case 0x31aca4u: goto label_31aca4;
        case 0x31aca8u: goto label_31aca8;
        case 0x31acacu: goto label_31acac;
        case 0x31acb0u: goto label_31acb0;
        case 0x31acb4u: goto label_31acb4;
        case 0x31acb8u: goto label_31acb8;
        case 0x31acbcu: goto label_31acbc;
        case 0x31acc0u: goto label_31acc0;
        case 0x31acc4u: goto label_31acc4;
        case 0x31acc8u: goto label_31acc8;
        case 0x31acccu: goto label_31accc;
        case 0x31acd0u: goto label_31acd0;
        case 0x31acd4u: goto label_31acd4;
        case 0x31acd8u: goto label_31acd8;
        case 0x31acdcu: goto label_31acdc;
        case 0x31ace0u: goto label_31ace0;
        case 0x31ace4u: goto label_31ace4;
        case 0x31ace8u: goto label_31ace8;
        case 0x31acecu: goto label_31acec;
        case 0x31acf0u: goto label_31acf0;
        case 0x31acf4u: goto label_31acf4;
        case 0x31acf8u: goto label_31acf8;
        case 0x31acfcu: goto label_31acfc;
        case 0x31ad00u: goto label_31ad00;
        case 0x31ad04u: goto label_31ad04;
        case 0x31ad08u: goto label_31ad08;
        case 0x31ad0cu: goto label_31ad0c;
        case 0x31ad10u: goto label_31ad10;
        case 0x31ad14u: goto label_31ad14;
        case 0x31ad18u: goto label_31ad18;
        case 0x31ad1cu: goto label_31ad1c;
        case 0x31ad20u: goto label_31ad20;
        case 0x31ad24u: goto label_31ad24;
        case 0x31ad28u: goto label_31ad28;
        case 0x31ad2cu: goto label_31ad2c;
        case 0x31ad30u: goto label_31ad30;
        case 0x31ad34u: goto label_31ad34;
        case 0x31ad38u: goto label_31ad38;
        case 0x31ad3cu: goto label_31ad3c;
        case 0x31ad40u: goto label_31ad40;
        case 0x31ad44u: goto label_31ad44;
        case 0x31ad48u: goto label_31ad48;
        case 0x31ad4cu: goto label_31ad4c;
        case 0x31ad50u: goto label_31ad50;
        case 0x31ad54u: goto label_31ad54;
        case 0x31ad58u: goto label_31ad58;
        case 0x31ad5cu: goto label_31ad5c;
        case 0x31ad60u: goto label_31ad60;
        case 0x31ad64u: goto label_31ad64;
        case 0x31ad68u: goto label_31ad68;
        case 0x31ad6cu: goto label_31ad6c;
        case 0x31ad70u: goto label_31ad70;
        case 0x31ad74u: goto label_31ad74;
        case 0x31ad78u: goto label_31ad78;
        case 0x31ad7cu: goto label_31ad7c;
        case 0x31ad80u: goto label_31ad80;
        case 0x31ad84u: goto label_31ad84;
        case 0x31ad88u: goto label_31ad88;
        case 0x31ad8cu: goto label_31ad8c;
        case 0x31ad90u: goto label_31ad90;
        case 0x31ad94u: goto label_31ad94;
        case 0x31ad98u: goto label_31ad98;
        case 0x31ad9cu: goto label_31ad9c;
        case 0x31ada0u: goto label_31ada0;
        case 0x31ada4u: goto label_31ada4;
        case 0x31ada8u: goto label_31ada8;
        case 0x31adacu: goto label_31adac;
        case 0x31adb0u: goto label_31adb0;
        case 0x31adb4u: goto label_31adb4;
        case 0x31adb8u: goto label_31adb8;
        case 0x31adbcu: goto label_31adbc;
        case 0x31adc0u: goto label_31adc0;
        case 0x31adc4u: goto label_31adc4;
        case 0x31adc8u: goto label_31adc8;
        case 0x31adccu: goto label_31adcc;
        case 0x31add0u: goto label_31add0;
        case 0x31add4u: goto label_31add4;
        case 0x31add8u: goto label_31add8;
        case 0x31addcu: goto label_31addc;
        case 0x31ade0u: goto label_31ade0;
        case 0x31ade4u: goto label_31ade4;
        case 0x31ade8u: goto label_31ade8;
        case 0x31adecu: goto label_31adec;
        case 0x31adf0u: goto label_31adf0;
        case 0x31adf4u: goto label_31adf4;
        case 0x31adf8u: goto label_31adf8;
        case 0x31adfcu: goto label_31adfc;
        case 0x31ae00u: goto label_31ae00;
        case 0x31ae04u: goto label_31ae04;
        case 0x31ae08u: goto label_31ae08;
        case 0x31ae0cu: goto label_31ae0c;
        case 0x31ae10u: goto label_31ae10;
        case 0x31ae14u: goto label_31ae14;
        case 0x31ae18u: goto label_31ae18;
        case 0x31ae1cu: goto label_31ae1c;
        case 0x31ae20u: goto label_31ae20;
        case 0x31ae24u: goto label_31ae24;
        case 0x31ae28u: goto label_31ae28;
        case 0x31ae2cu: goto label_31ae2c;
        case 0x31ae30u: goto label_31ae30;
        case 0x31ae34u: goto label_31ae34;
        case 0x31ae38u: goto label_31ae38;
        case 0x31ae3cu: goto label_31ae3c;
        case 0x31ae40u: goto label_31ae40;
        case 0x31ae44u: goto label_31ae44;
        case 0x31ae48u: goto label_31ae48;
        case 0x31ae4cu: goto label_31ae4c;
        default: break;
    }

    ctx->pc = 0x31ab30u;

label_31ab30:
    // 0x31ab30: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x31ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_31ab34:
    // 0x31ab34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ab34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31ab38:
    // 0x31ab38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31ab38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31ab3c:
    // 0x31ab3c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x31ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_31ab40:
    // 0x31ab40: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_31ab44:
    // 0x31ab44: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x31ab44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ab48:
    // 0x31ab48: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x31ab48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_31ab4c:
    // 0x31ab4c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x31ab4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31ab50:
    // 0x31ab50: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x31ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_31ab54:
    // 0x31ab54: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x31ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_31ab58:
    // 0x31ab58: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x31ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_31ab5c:
    // 0x31ab5c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x31ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_31ab60:
    // 0x31ab60: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x31ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_31ab64:
    // 0x31ab64: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x31ab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_31ab68:
    // 0x31ab68: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x31ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_31ab6c:
    // 0x31ab6c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_31ab70:
    // 0x31ab70: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x31ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ab74:
    // 0x31ab74: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x31ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
label_31ab78:
    // 0x31ab78: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x31ab78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_31ab7c:
    // 0x31ab7c: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x31ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
label_31ab80:
    // 0x31ab80: 0xafa9006c  sw          $t1, 0x6C($sp)
    ctx->pc = 0x31ab80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 9));
label_31ab84:
    // 0x31ab84: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x31ab84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_31ab88:
    // 0x31ab88: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x31ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_31ab8c:
    // 0x31ab8c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x31ab8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_31ab90:
    // 0x31ab90: 0x8ee6005c  lw          $a2, 0x5C($s7)
    ctx->pc = 0x31ab90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_31ab94:
    // 0x31ab94: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x31ab94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_31ab98:
    // 0x31ab98: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x31ab98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31ab9c:
    // 0x31ab9c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x31ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31aba0:
    // 0x31aba0: 0x27b6000c  addiu       $s6, $sp, 0xC
    ctx->pc = 0x31aba0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_31aba4:
    // 0x31aba4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x31aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31aba8:
    // 0x31aba8: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x31aba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_31abac:
    // 0x31abac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_31abb0:
    // 0x31abb0: 0x27b50018  addiu       $s5, $sp, 0x18
    ctx->pc = 0x31abb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_31abb4:
    // 0x31abb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31abb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_31abb8:
    // 0x31abb8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31abbc:
    // 0x31abbc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_31abc0:
    // 0x31abc0: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x31abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_31abc4:
    // 0x31abc4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31abc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_31abc8:
    // 0x31abc8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x31abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_31abcc:
    // 0x31abcc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x31abccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_31abd0:
    // 0x31abd0: 0x8ee3002c  lw          $v1, 0x2C($s7)
    ctx->pc = 0x31abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
label_31abd4:
    // 0x31abd4: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x31abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_31abd8:
    // 0x31abd8: 0x1840008f  blez        $v0, . + 4 + (0x8F << 2)
label_31abdc:
    if (ctx->pc == 0x31ABDCu) {
        ctx->pc = 0x31ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABD8u;
        // 0x31abdc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABE0u;
        goto label_31abe0;
    }
    ctx->pc = 0x31ABD8u;
    {
        const bool branch_taken_0x31abd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABD8u;
        // 0x31abdc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abd8) {
            ctx->pc = 0x31AE18u;
            goto label_31ae18;
        }
    }
    ctx->pc = 0x31ABE0u;
label_31abe0:
    // 0x31abe0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x31abe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31abe4:
    // 0x31abe4: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x31abe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31abe8:
    // 0x31abe8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x31abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_31abec:
    // 0x31abec: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x31abecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_31abf0:
    // 0x31abf0: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
label_31abf4:
    if (ctx->pc == 0x31ABF4u) {
        ctx->pc = 0x31ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABF0u;
        // 0x31abf4: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABF8u;
        goto label_31abf8;
    }
    ctx->pc = 0x31ABF0u;
    {
        const bool branch_taken_0x31abf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x31ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABF0u;
        // 0x31abf4: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abf0) {
            ctx->pc = 0x31AC20u;
            goto label_31ac20;
        }
    }
    ctx->pc = 0x31ABF8u;
label_31abf8:
    // 0x31abf8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x31abf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_31abfc:
    // 0x31abfc: 0x523018  mult        $a2, $v0, $s2
    ctx->pc = 0x31abfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_31ac00:
    // 0x31ac00: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x31ac00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_31ac04:
    // 0x31ac04: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x31ac04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31ac08:
    // 0x31ac08: 0xc59821  addu        $s3, $a2, $a1
    ctx->pc = 0x31ac08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_31ac0c:
    // 0x31ac0c: 0x45b021  addu        $s6, $v0, $a1
    ctx->pc = 0x31ac0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_31ac10:
    // 0x31ac10: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x31ac10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31ac14:
    // 0x31ac14: 0x1000005c  b           . + 4 + (0x5C << 2)
label_31ac18:
    if (ctx->pc == 0x31AC18u) {
        ctx->pc = 0x31AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC14u;
        // 0x31ac18: 0x45a821  addu        $s5, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AC1Cu;
        goto label_31ac1c;
    }
    ctx->pc = 0x31AC14u;
    {
        const bool branch_taken_0x31ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC14u;
        // 0x31ac18: 0x45a821  addu        $s5, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac14) {
            ctx->pc = 0x31AD88u;
            goto label_31ad88;
        }
    }
    ctx->pc = 0x31AC1Cu;
label_31ac1c:
    // 0x31ac1c: 0x0  nop
    ctx->pc = 0x31ac1cu;
    // NOP
label_31ac20:
    // 0x31ac20: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x31ac20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31ac24:
    // 0x31ac24: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x31ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31ac28:
    // 0x31ac28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31ac2c:
    // 0x31ac2c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x31ac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31ac30:
    // 0x31ac30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ac34:
    // 0x31ac34: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31ac34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31ac38:
    // 0x31ac38: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x31ac38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31ac3c:
    // 0x31ac3c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ac40:
    // 0x31ac40: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ac44:
    // 0x31ac44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31ac44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ac48:
    // 0x31ac48: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31ac48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31ac4c:
    // 0x31ac4c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x31ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31ac50:
    // 0x31ac50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ac54:
    // 0x31ac54: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31ac54u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31ac58:
    // 0x31ac58: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x31ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31ac5c:
    // 0x31ac5c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31ac5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31ac60:
    // 0x31ac60: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31ac60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31ac64:
    // 0x31ac64: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31ac64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31ac68:
    // 0x31ac68: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x31ac68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31ac6c:
    // 0x31ac6c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31ac6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31ac70:
    // 0x31ac70: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x31ac70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_31ac74:
    // 0x31ac74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ac78:
    // 0x31ac78: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31ac78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31ac7c:
    // 0x31ac7c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x31ac7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31ac80:
    // 0x31ac80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ac84:
    // 0x31ac84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31ac84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31ac88:
    // 0x31ac88: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31ac88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31ac8c:
    // 0x31ac8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ac90:
    // 0x31ac90: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31ac90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31ac94:
    // 0x31ac94: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x31ac94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_31ac98:
    // 0x31ac98: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x31ac98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_31ac9c:
    // 0x31ac9c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x31ac9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31aca0:
    // 0x31aca0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x31aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31aca4:
    // 0x31aca4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31aca8:
    // 0x31aca8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x31aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31acac:
    // 0x31acac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31acb0:
    // 0x31acb0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31acb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31acb4:
    // 0x31acb4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31acb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31acb8:
    // 0x31acb8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31acb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31acbc:
    // 0x31acbc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31acc0:
    // 0x31acc0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31acc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31acc4:
    // 0x31acc4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31acc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31acc8:
    // 0x31acc8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31accc:
    // 0x31accc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31acccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31acd0:
    // 0x31acd0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31acd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31acd4:
    // 0x31acd4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31acd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31acd8:
    // 0x31acd8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31acd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31acdc:
    // 0x31acdc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31acdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31ace0:
    // 0x31ace0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31ace0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31ace4:
    // 0x31ace4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31ace4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31ace8:
    // 0x31ace8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x31ace8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31acec:
    // 0x31acec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31acf0:
    // 0x31acf0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31acf0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31acf4:
    // 0x31acf4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31acf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31acf8:
    // 0x31acf8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31acfc:
    // 0x31acfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31acfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31ad00:
    // 0x31ad00: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31ad00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31ad04:
    // 0x31ad04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ad08:
    // 0x31ad08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31ad08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31ad0c:
    // 0x31ad0c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x31ad0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31ad10:
    // 0x31ad10: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x31ad10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_31ad14:
    // 0x31ad14: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x31ad14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31ad18:
    // 0x31ad18: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x31ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31ad1c:
    // 0x31ad1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31ad20:
    // 0x31ad20: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x31ad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31ad24:
    // 0x31ad24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ad28:
    // 0x31ad28: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31ad28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31ad2c:
    // 0x31ad2c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x31ad2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31ad30:
    // 0x31ad30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ad34:
    // 0x31ad34: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ad38:
    // 0x31ad38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31ad38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ad3c:
    // 0x31ad3c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x31ad3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31ad40:
    // 0x31ad40: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31ad44:
    // 0x31ad44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ad48:
    // 0x31ad48: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31ad48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31ad4c:
    // 0x31ad4c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31ad4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31ad50:
    // 0x31ad50: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31ad50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31ad54:
    // 0x31ad54: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x31ad54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31ad58:
    // 0x31ad58: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31ad58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31ad5c:
    // 0x31ad5c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x31ad5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_31ad60:
    // 0x31ad60: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x31ad60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31ad64:
    // 0x31ad64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ad68:
    // 0x31ad68: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31ad68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31ad6c:
    // 0x31ad6c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x31ad6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31ad70:
    // 0x31ad70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ad74:
    // 0x31ad74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31ad74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31ad78:
    // 0x31ad78: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x31ad78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31ad7c:
    // 0x31ad7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ad80:
    // 0x31ad80: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31ad80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31ad84:
    // 0x31ad84: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x31ad84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_31ad88:
    // 0x31ad88: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x31ad88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31ad8c:
    // 0x31ad8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31ad90:
    // 0x31ad90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31ad94:
    // 0x31ad94: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x31ad94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31ad98:
    // 0x31ad98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x31ad98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31ad9c:
    // 0x31ad9c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x31ad9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ada0:
    // 0x31ada0: 0xc0f152c  jal         func_3C54B0
label_31ada4:
    if (ctx->pc == 0x31ADA4u) {
        ctx->pc = 0x31ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADA0u;
        // 0x31ada4: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADA8u;
        goto label_31ada8;
    }
    ctx->pc = 0x31ADA0u;
    SET_GPR_U32(ctx, 31, 0x31ADA8u);
    ctx->pc = 0x31ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADA0u;
    // 0x31ada4: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C54B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C54B0u, 0x31ADA0u, 0x31ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADA8u;
label_31ada8:
    // 0x31ada8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_31adac:
    if (ctx->pc == 0x31ADACu) {
        ctx->pc = 0x31ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADA8u;
        // 0x31adac: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADB0u;
        goto label_31adb0;
    }
    ctx->pc = 0x31ADA8u;
    {
        const bool branch_taken_0x31ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ada8) {
            ctx->pc = 0x31ADACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ADA8u;
            // 0x31adac: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AE08u;
            goto label_31ae08;
        }
    }
    ctx->pc = 0x31ADB0u;
label_31adb0:
    // 0x31adb0: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x31adb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_31adb4:
    // 0x31adb4: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x31adb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_31adb8:
    // 0x31adb8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x31adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_31adbc:
    // 0x31adbc: 0xb3a30043  sdl         $v1, 0x43($sp)
    ctx->pc = 0x31adbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31adc0:
    // 0x31adc0: 0xb7a3003c  sdr         $v1, 0x3C($sp)
    ctx->pc = 0x31adc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31adc4:
    // 0x31adc4: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x31adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_31adc8:
    // 0x31adc8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x31adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_31adcc:
    // 0x31adcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31adccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31add0:
    // 0x31add0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x31add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31add4:
    // 0x31add4: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x31add4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_31add8:
    // 0x31add8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x31add8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_31addc:
    // 0x31addc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x31addcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_31ade0:
    // 0x31ade0: 0xafb40048  sw          $s4, 0x48($sp)
    ctx->pc = 0x31ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 20));
label_31ade4:
    // 0x31ade4: 0xafb3004c  sw          $s3, 0x4C($sp)
    ctx->pc = 0x31ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 19));
label_31ade8:
    // 0x31ade8: 0xafb60050  sw          $s6, 0x50($sp)
    ctx->pc = 0x31ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 22));
label_31adec:
    // 0x31adec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x31adecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_31adf0:
    // 0x31adf0: 0xafb50054  sw          $s5, 0x54($sp)
    ctx->pc = 0x31adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 21));
label_31adf4:
    // 0x31adf4: 0xe0f809  jalr        $a3
label_31adf8:
    if (ctx->pc == 0x31ADF8u) {
        ctx->pc = 0x31ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADF4u;
        // 0x31adf8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADFCu;
        goto label_31adfc;
    }
    ctx->pc = 0x31ADF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x31ADFCu);
        ctx->pc = 0x31ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADF4u;
        // 0x31adf8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ADF4u, 0x31ADFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31ADFCu;
label_31adfc:
    // 0x31adfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31ae00:
    if (ctx->pc == 0x31AE00u) {
        ctx->pc = 0x31AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADFCu;
        // 0x31ae00: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE04u;
        goto label_31ae04;
    }
    ctx->pc = 0x31ADFCu;
    {
        const bool branch_taken_0x31adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADFCu;
        // 0x31ae00: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adfc) {
            ctx->pc = 0x31AE1Cu;
            goto label_31ae1c;
        }
    }
    ctx->pc = 0x31AE04u;
label_31ae04:
    // 0x31ae04: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x31ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_31ae08:
    // 0x31ae08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31ae08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31ae0c:
    // 0x31ae0c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x31ae0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31ae10:
    // 0x31ae10: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
label_31ae14:
    if (ctx->pc == 0x31AE14u) {
        ctx->pc = 0x31AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE10u;
        // 0x31ae14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE18u;
        goto label_31ae18;
    }
    ctx->pc = 0x31AE10u;
    {
        const bool branch_taken_0x31ae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE10u;
        // 0x31ae14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae10) {
            ctx->pc = 0x31ABE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31abe8;
        }
    }
    ctx->pc = 0x31AE18u;
label_31ae18:
    // 0x31ae18: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x31ae18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_31ae1c:
    // 0x31ae1c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x31ae1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_31ae20:
    // 0x31ae20: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x31ae20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_31ae24:
    // 0x31ae24: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x31ae24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_31ae28:
    // 0x31ae28: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x31ae28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_31ae2c:
    // 0x31ae2c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x31ae2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31ae30:
    // 0x31ae30: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x31ae30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31ae34:
    // 0x31ae34: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x31ae34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31ae38:
    // 0x31ae38: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31ae38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31ae3c:
    // 0x31ae3c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31ae3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_31ae40:
    // 0x31ae40: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x31ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31ae44:
    // 0x31ae44: 0x3e00008  jr          $ra
label_31ae48:
    if (ctx->pc == 0x31AE48u) {
        ctx->pc = 0x31AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE44u;
        // 0x31ae48: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE4Cu;
        goto label_31ae4c;
    }
    ctx->pc = 0x31AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE44u;
        // 0x31ae48: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AE4Cu;
label_31ae4c:
    // 0x31ae4c: 0x0  nop
    ctx->pc = 0x31ae4cu;
    // NOP
    ctx->pc = 0x31ae50u;
}
