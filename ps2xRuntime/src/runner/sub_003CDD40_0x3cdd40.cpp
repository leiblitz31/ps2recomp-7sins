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

// Function: sub_003CDD40
// Address: 0x3cdd40 - 0x3cdf60
void sub_003CDD40_0x3cdd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDD40_0x3cdd40");
#endif

    switch (ctx->pc) {
        case 0x3cdd40u: goto label_3cdd40;
        case 0x3cdd44u: goto label_3cdd44;
        case 0x3cdd48u: goto label_3cdd48;
        case 0x3cdd4cu: goto label_3cdd4c;
        case 0x3cdd50u: goto label_3cdd50;
        case 0x3cdd54u: goto label_3cdd54;
        case 0x3cdd58u: goto label_3cdd58;
        case 0x3cdd5cu: goto label_3cdd5c;
        case 0x3cdd60u: goto label_3cdd60;
        case 0x3cdd64u: goto label_3cdd64;
        case 0x3cdd68u: goto label_3cdd68;
        case 0x3cdd6cu: goto label_3cdd6c;
        case 0x3cdd70u: goto label_3cdd70;
        case 0x3cdd74u: goto label_3cdd74;
        case 0x3cdd78u: goto label_3cdd78;
        case 0x3cdd7cu: goto label_3cdd7c;
        case 0x3cdd80u: goto label_3cdd80;
        case 0x3cdd84u: goto label_3cdd84;
        case 0x3cdd88u: goto label_3cdd88;
        case 0x3cdd8cu: goto label_3cdd8c;
        case 0x3cdd90u: goto label_3cdd90;
        case 0x3cdd94u: goto label_3cdd94;
        case 0x3cdd98u: goto label_3cdd98;
        case 0x3cdd9cu: goto label_3cdd9c;
        case 0x3cdda0u: goto label_3cdda0;
        case 0x3cdda4u: goto label_3cdda4;
        case 0x3cdda8u: goto label_3cdda8;
        case 0x3cddacu: goto label_3cddac;
        case 0x3cddb0u: goto label_3cddb0;
        case 0x3cddb4u: goto label_3cddb4;
        case 0x3cddb8u: goto label_3cddb8;
        case 0x3cddbcu: goto label_3cddbc;
        case 0x3cddc0u: goto label_3cddc0;
        case 0x3cddc4u: goto label_3cddc4;
        case 0x3cddc8u: goto label_3cddc8;
        case 0x3cddccu: goto label_3cddcc;
        case 0x3cddd0u: goto label_3cddd0;
        case 0x3cddd4u: goto label_3cddd4;
        case 0x3cddd8u: goto label_3cddd8;
        case 0x3cdddcu: goto label_3cdddc;
        case 0x3cdde0u: goto label_3cdde0;
        case 0x3cdde4u: goto label_3cdde4;
        case 0x3cdde8u: goto label_3cdde8;
        case 0x3cddecu: goto label_3cddec;
        case 0x3cddf0u: goto label_3cddf0;
        case 0x3cddf4u: goto label_3cddf4;
        case 0x3cddf8u: goto label_3cddf8;
        case 0x3cddfcu: goto label_3cddfc;
        case 0x3cde00u: goto label_3cde00;
        case 0x3cde04u: goto label_3cde04;
        case 0x3cde08u: goto label_3cde08;
        case 0x3cde0cu: goto label_3cde0c;
        case 0x3cde10u: goto label_3cde10;
        case 0x3cde14u: goto label_3cde14;
        case 0x3cde18u: goto label_3cde18;
        case 0x3cde1cu: goto label_3cde1c;
        case 0x3cde20u: goto label_3cde20;
        case 0x3cde24u: goto label_3cde24;
        case 0x3cde28u: goto label_3cde28;
        case 0x3cde2cu: goto label_3cde2c;
        case 0x3cde30u: goto label_3cde30;
        case 0x3cde34u: goto label_3cde34;
        case 0x3cde38u: goto label_3cde38;
        case 0x3cde3cu: goto label_3cde3c;
        case 0x3cde40u: goto label_3cde40;
        case 0x3cde44u: goto label_3cde44;
        case 0x3cde48u: goto label_3cde48;
        case 0x3cde4cu: goto label_3cde4c;
        case 0x3cde50u: goto label_3cde50;
        case 0x3cde54u: goto label_3cde54;
        case 0x3cde58u: goto label_3cde58;
        case 0x3cde5cu: goto label_3cde5c;
        case 0x3cde60u: goto label_3cde60;
        case 0x3cde64u: goto label_3cde64;
        case 0x3cde68u: goto label_3cde68;
        case 0x3cde6cu: goto label_3cde6c;
        case 0x3cde70u: goto label_3cde70;
        case 0x3cde74u: goto label_3cde74;
        case 0x3cde78u: goto label_3cde78;
        case 0x3cde7cu: goto label_3cde7c;
        case 0x3cde80u: goto label_3cde80;
        case 0x3cde84u: goto label_3cde84;
        case 0x3cde88u: goto label_3cde88;
        case 0x3cde8cu: goto label_3cde8c;
        case 0x3cde90u: goto label_3cde90;
        case 0x3cde94u: goto label_3cde94;
        case 0x3cde98u: goto label_3cde98;
        case 0x3cde9cu: goto label_3cde9c;
        case 0x3cdea0u: goto label_3cdea0;
        case 0x3cdea4u: goto label_3cdea4;
        case 0x3cdea8u: goto label_3cdea8;
        case 0x3cdeacu: goto label_3cdeac;
        case 0x3cdeb0u: goto label_3cdeb0;
        case 0x3cdeb4u: goto label_3cdeb4;
        case 0x3cdeb8u: goto label_3cdeb8;
        case 0x3cdebcu: goto label_3cdebc;
        case 0x3cdec0u: goto label_3cdec0;
        case 0x3cdec4u: goto label_3cdec4;
        case 0x3cdec8u: goto label_3cdec8;
        case 0x3cdeccu: goto label_3cdecc;
        case 0x3cded0u: goto label_3cded0;
        case 0x3cded4u: goto label_3cded4;
        case 0x3cded8u: goto label_3cded8;
        case 0x3cdedcu: goto label_3cdedc;
        case 0x3cdee0u: goto label_3cdee0;
        case 0x3cdee4u: goto label_3cdee4;
        case 0x3cdee8u: goto label_3cdee8;
        case 0x3cdeecu: goto label_3cdeec;
        case 0x3cdef0u: goto label_3cdef0;
        case 0x3cdef4u: goto label_3cdef4;
        case 0x3cdef8u: goto label_3cdef8;
        case 0x3cdefcu: goto label_3cdefc;
        case 0x3cdf00u: goto label_3cdf00;
        case 0x3cdf04u: goto label_3cdf04;
        case 0x3cdf08u: goto label_3cdf08;
        case 0x3cdf0cu: goto label_3cdf0c;
        case 0x3cdf10u: goto label_3cdf10;
        case 0x3cdf14u: goto label_3cdf14;
        case 0x3cdf18u: goto label_3cdf18;
        case 0x3cdf1cu: goto label_3cdf1c;
        case 0x3cdf20u: goto label_3cdf20;
        case 0x3cdf24u: goto label_3cdf24;
        case 0x3cdf28u: goto label_3cdf28;
        case 0x3cdf2cu: goto label_3cdf2c;
        case 0x3cdf30u: goto label_3cdf30;
        case 0x3cdf34u: goto label_3cdf34;
        case 0x3cdf38u: goto label_3cdf38;
        case 0x3cdf3cu: goto label_3cdf3c;
        case 0x3cdf40u: goto label_3cdf40;
        case 0x3cdf44u: goto label_3cdf44;
        case 0x3cdf48u: goto label_3cdf48;
        case 0x3cdf4cu: goto label_3cdf4c;
        case 0x3cdf50u: goto label_3cdf50;
        case 0x3cdf54u: goto label_3cdf54;
        case 0x3cdf58u: goto label_3cdf58;
        case 0x3cdf5cu: goto label_3cdf5c;
        default: break;
    }

    ctx->pc = 0x3cdd40u;

label_3cdd40:
    // 0x3cdd40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3cdd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3cdd44:
    // 0x3cdd44: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3cdd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3cdd48:
    // 0x3cdd48: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3cdd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3cdd4c:
    // 0x3cdd4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3cdd4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cdd50:
    // 0x3cdd50: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3cdd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3cdd54:
    // 0x3cdd54: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3cdd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3cdd58:
    // 0x3cdd58: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3cdd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3cdd5c:
    // 0x3cdd5c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3cdd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3cdd60:
    // 0x3cdd60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3cdd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3cdd64:
    // 0x3cdd64: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3cdd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3cdd68:
    // 0x3cdd68: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3cdd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_3cdd6c:
    // 0x3cdd6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cdd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cdd70:
    // 0x3cdd70: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3cdd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_3cdd74:
    // 0x3cdd74: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3cdd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3cdd78:
    // 0x3cdd78: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_3cdd7c:
    if (ctx->pc == 0x3CDD7Cu) {
        ctx->pc = 0x3CDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD78u;
        // 0x3cdd7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDD80u;
        goto label_3cdd80;
    }
    ctx->pc = 0x3CDD78u;
    {
        const bool branch_taken_0x3cdd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD78u;
        // 0x3cdd7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdd78) {
            ctx->pc = 0x3CDF30u;
            goto label_3cdf30;
        }
    }
    ctx->pc = 0x3CDD80u;
label_3cdd80:
    // 0x3cdd80: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x3cdd80u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_3cdd84:
    // 0x3cdd84: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3cdd84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cdd88:
    // 0x3cdd88: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x3cdd88u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
label_3cdd8c:
    // 0x3cdd8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3cdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3cdd90:
    // 0x3cdd90: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x3cdd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_3cdd94:
    // 0x3cdd94: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x3cdd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3cdd98:
    // 0x3cdd98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3cdd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cdd9c:
    // 0x3cdd9c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x3cdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3cdda0:
    // 0x3cdda0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3cdda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3cdda4:
    // 0x3cdda4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3cdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3cdda8:
    // 0x3cdda8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x3cdda8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3cddac:
    // 0x3cddac: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x3cddacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_3cddb0:
    // 0x3cddb0: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x3cddb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
label_3cddb4:
    // 0x3cddb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3cddb8:
    // 0x3cddb8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3cddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3cddbc:
    // 0x3cddbc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3cddbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3cddc0:
    // 0x3cddc0: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x3cddc0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_3cddc4:
    // 0x3cddc4: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x3cddc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3cddc8:
    // 0x3cddc8: 0xa7a40002  sh          $a0, 0x2($sp)
    ctx->pc = 0x3cddc8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 4));
label_3cddcc:
    // 0x3cddcc: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3cddccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3cddd0:
    // 0x3cddd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3cddd4:
    // 0x3cddd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3cddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3cddd8:
    // 0x3cddd8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3cddd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3cdddc:
    // 0x3cdddc: 0xa6630002  sh          $v1, 0x2($s3)
    ctx->pc = 0x3cdddcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
label_3cdde0:
    // 0x3cdde0: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3cdde0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3cdde4:
    // 0x3cdde4: 0xa7a40004  sh          $a0, 0x4($sp)
    ctx->pc = 0x3cdde4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 4));
label_3cdde8:
    // 0x3cdde8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x3cdde8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3cddec:
    // 0x3cddec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cddecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3cddf0:
    // 0x3cddf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3cddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3cddf4:
    // 0x3cddf4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3cddf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3cddf8:
    // 0x3cddf8: 0xa6630004  sh          $v1, 0x4($s3)
    ctx->pc = 0x3cddf8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 3));
label_3cddfc:
    // 0x3cddfc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3cddfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cde00:
    // 0x3cde00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cde00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cde04:
    // 0x3cde04: 0x0  nop
    ctx->pc = 0x3cde04u;
    // NOP
label_3cde08:
    // 0x3cde08: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cde08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cde0c:
    // 0x3cde0c: 0x0  nop
    ctx->pc = 0x3cde0cu;
    // NOP
label_3cde10:
    // 0x3cde10: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
label_3cde14:
    if (ctx->pc == 0x3CDE14u) {
        ctx->pc = 0x3CDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE10u;
        // 0x3cde14: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDE18u;
        goto label_3cde18;
    }
    ctx->pc = 0x3CDE10u;
    {
        const bool branch_taken_0x3cde10 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE10u;
        // 0x3cde14: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde10) {
            ctx->pc = 0x3CDE34u;
            goto label_3cde34;
        }
    }
    ctx->pc = 0x3CDE18u;
label_3cde18:
    // 0x3cde18: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x3cde18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3cde1c:
    // 0x3cde1c: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x3cde1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3cde20:
    // 0x3cde20: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x3cde20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_3cde24:
    // 0x3cde24: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3cde24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3cde28:
    // 0x3cde28: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3cde28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3cde2c:
    // 0x3cde2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cde30:
    if (ctx->pc == 0x3CDE30u) {
        ctx->pc = 0x3CDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE2Cu;
        // 0x3cde30: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDE34u;
        goto label_3cde34;
    }
    ctx->pc = 0x3CDE2Cu;
    {
        const bool branch_taken_0x3cde2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE2Cu;
        // 0x3cde30: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde2c) {
            ctx->pc = 0x3CDE48u;
            goto label_3cde48;
        }
    }
    ctx->pc = 0x3CDE34u;
label_3cde34:
    // 0x3cde34: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x3cde34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3cde38:
    // 0x3cde38: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3cde38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3cde3c:
    // 0x3cde3c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3cde3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3cde40:
    // 0x3cde40: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3cde40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3cde44:
    // 0x3cde44: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x3cde44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3cde48:
    // 0x3cde48: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3cde48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3cde4c:
    // 0x3cde4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3cde50:
    if (ctx->pc == 0x3CDE50u) {
        ctx->pc = 0x3CDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE4Cu;
        // 0x3cde50: 0x24d20001  addiu       $s2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDE54u;
        goto label_3cde54;
    }
    ctx->pc = 0x3CDE4Cu;
    {
        const bool branch_taken_0x3cde4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE4Cu;
        // 0x3cde50: 0x24d20001  addiu       $s2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde4c) {
            ctx->pc = 0x3CDE74u;
            goto label_3cde74;
        }
    }
    ctx->pc = 0x3CDE54u;
label_3cde54:
    // 0x3cde54: 0x8e31001c  lw          $s1, 0x1C($s1)
    ctx->pc = 0x3cde54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3cde58:
    // 0x3cde58: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3cde58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3cde5c:
    // 0x3cde5c: 0x0  nop
    ctx->pc = 0x3cde5cu;
    // NOP
label_3cde60:
    // 0x3cde60: 0x0  nop
    ctx->pc = 0x3cde60u;
    // NOP
label_3cde64:
    // 0x3cde64: 0x0  nop
    ctx->pc = 0x3cde64u;
    // NOP
label_3cde68:
    // 0x3cde68: 0x0  nop
    ctx->pc = 0x3cde68u;
    // NOP
label_3cde6c:
    // 0x3cde6c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_3cde70:
    if (ctx->pc == 0x3CDE70u) {
        ctx->pc = 0x3CDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE6Cu;
        // 0x3cde70: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDE74u;
        goto label_3cde74;
    }
    ctx->pc = 0x3CDE6Cu;
    {
        const bool branch_taken_0x3cde6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cde6c) {
            ctx->pc = 0x3CDE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDE6Cu;
            // 0x3cde70: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cde58;
        }
    }
    ctx->pc = 0x3CDE74u;
label_3cde74:
    // 0x3cde74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3cde74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cde78:
    // 0x3cde78: 0x105e000b  beq         $v0, $fp, . + 4 + (0xB << 2)
label_3cde7c:
    if (ctx->pc == 0x3CDE7Cu) {
        ctx->pc = 0x3CDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE78u;
        // 0x3cde7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDE80u;
        goto label_3cde80;
    }
    ctx->pc = 0x3CDE78u;
    {
        const bool branch_taken_0x3cde78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x3CDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE78u;
        // 0x3cde7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde78) {
            ctx->pc = 0x3CDEA8u;
            goto label_3cdea8;
        }
    }
    ctx->pc = 0x3CDE80u;
label_3cde80:
    // 0x3cde80: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3cde80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3cde84:
    // 0x3cde84: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3cde84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cde88:
    // 0x3cde88: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3cde88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3cde8c:
    // 0x3cde8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3cde8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3cde90:
    // 0x3cde90: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x3cde90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3cde94:
    // 0x3cde94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3cde98:
    if (ctx->pc == 0x3CDE98u) {
        ctx->pc = 0x3CDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE94u;
        // 0x3cde98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDE9Cu;
        goto label_3cde9c;
    }
    ctx->pc = 0x3CDE94u;
    {
        const bool branch_taken_0x3cde94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE94u;
        // 0x3cde98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde94) {
            ctx->pc = 0x3CDEA8u;
            goto label_3cdea8;
        }
    }
    ctx->pc = 0x3CDE9Cu;
label_3cde9c:
    // 0x3cde9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3cde9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cdea0:
    // 0x3cdea0: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
label_3cdea4:
    if (ctx->pc == 0x3CDEA4u) {
        ctx->pc = 0x3CDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEA0u;
        // 0x3cdea4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDEA8u;
        goto label_3cdea8;
    }
    ctx->pc = 0x3CDEA0u;
    {
        const bool branch_taken_0x3cdea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3cdea0) {
            ctx->pc = 0x3CDEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDEA0u;
            // 0x3cdea4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cde90;
        }
    }
    ctx->pc = 0x3CDEA8u;
label_3cdea8:
    // 0x3cdea8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3cdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3cdeac:
    // 0x3cdeac: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_3cdeb0:
    if (ctx->pc == 0x3CDEB0u) {
        ctx->pc = 0x3CDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEACu;
        // 0x3cdeb0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDEB4u;
        goto label_3cdeb4;
    }
    ctx->pc = 0x3CDEACu;
    {
        const bool branch_taken_0x3cdeac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEACu;
        // 0x3cdeb0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdeac) {
            ctx->pc = 0x3CDEF8u;
            goto label_3cdef8;
        }
    }
    ctx->pc = 0x3CDEB4u;
label_3cdeb4:
    // 0x3cdeb4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3cdeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3cdeb8:
    // 0x3cdeb8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3cdeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3cdebc:
    // 0x3cdebc: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3cdebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3cdec0:
    // 0x3cdec0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3cdec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3cdec4:
    // 0x3cdec4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3cdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3cdec8:
    // 0x3cdec8: 0x40f809  jalr        $v0
label_3cdecc:
    if (ctx->pc == 0x3CDECCu) {
        ctx->pc = 0x3CDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEC8u;
        // 0x3cdecc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDED0u;
        goto label_3cded0;
    }
    ctx->pc = 0x3CDEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDED0u);
        ctx->pc = 0x3CDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEC8u;
        // 0x3cdecc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDEC8u, 0x3CDED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDED0u;
label_3cded0:
    // 0x3cded0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cded0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cded4:
    // 0x3cded4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3cded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cded8:
    // 0x3cded8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdedc:
    // 0x3cdedc: 0xc0bb7e6  jal         func_2EDF98
label_3cdee0:
    if (ctx->pc == 0x3CDEE0u) {
        ctx->pc = 0x3CDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEDCu;
        // 0x3cdee0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDEE4u;
        goto label_3cdee4;
    }
    ctx->pc = 0x3CDEDCu;
    SET_GPR_U32(ctx, 31, 0x3CDEE4u);
    ctx->pc = 0x3CDEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDEDCu;
    // 0x3cdee0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CDEDCu, 0x3CDEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDEE4u;
label_3cdee4:
    // 0x3cdee4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3cdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3cdee8:
    // 0x3cdee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cdee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdeec:
    // 0x3cdeec: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x3cdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
label_3cdef0:
    // 0x3cdef0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3cdef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdef4:
    // 0x3cdef4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3cdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3cdef8:
    // 0x3cdef8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3cdef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cdefc:
    // 0x3cdefc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3cdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cdf00:
    // 0x3cdf00: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x3cdf00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3cdf04:
    // 0x3cdf04: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_3cdf08:
    if (ctx->pc == 0x3CDF08u) {
        ctx->pc = 0x3CDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF04u;
        // 0x3cdf08: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDF0Cu;
        goto label_3cdf0c;
    }
    ctx->pc = 0x3CDF04u;
    {
        const bool branch_taken_0x3cdf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF04u;
        // 0x3cdf08: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdf04) {
            ctx->pc = 0x3CDE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cde10;
        }
    }
    ctx->pc = 0x3CDF0Cu;
label_3cdf0c:
    // 0x3cdf0c: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x3cdf0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf10:
    // 0x3cdf10: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x3cdf10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3cdf14:
    // 0x3cdf14: 0x5440ffbc  bnel        $v0, $zero, . + 4 + (-0x44 << 2)
label_3cdf18:
    if (ctx->pc == 0x3CDF18u) {
        ctx->pc = 0x3CDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF14u;
        // 0x3cdf18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDF1Cu;
        goto label_3cdf1c;
    }
    ctx->pc = 0x3CDF14u;
    {
        const bool branch_taken_0x3cdf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdf14) {
            ctx->pc = 0x3CDF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDF14u;
            // 0x3cdf18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cde08;
        }
    }
    ctx->pc = 0x3CDF1Cu;
label_3cdf1c:
    // 0x3cdf1c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3cdf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3cdf20:
    // 0x3cdf20: 0x8fb50024  lw          $s5, 0x24($sp)
    ctx->pc = 0x3cdf20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3cdf24:
    // 0x3cdf24: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x3cdf24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cdf28:
    // 0x3cdf28: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
label_3cdf2c:
    if (ctx->pc == 0x3CDF2Cu) {
        ctx->pc = 0x3CDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF28u;
        // 0x3cdf2c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDF30u;
        goto label_3cdf30;
    }
    ctx->pc = 0x3CDF28u;
    {
        const bool branch_taken_0x3cdf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF28u;
        // 0x3cdf2c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdf28) {
            ctx->pc = 0x3CDD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdd90;
        }
    }
    ctx->pc = 0x3CDF30u;
label_3cdf30:
    // 0x3cdf30: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3cdf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3cdf34:
    // 0x3cdf34: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3cdf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3cdf38:
    // 0x3cdf38: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3cdf38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3cdf3c:
    // 0x3cdf3c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3cdf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3cdf40:
    // 0x3cdf40: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3cdf40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cdf44:
    // 0x3cdf44: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3cdf44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cdf48:
    // 0x3cdf48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3cdf48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cdf4c:
    // 0x3cdf4c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3cdf4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cdf50:
    // 0x3cdf50: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3cdf50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cdf54:
    // 0x3cdf54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cdf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cdf58:
    // 0x3cdf58: 0x3e00008  jr          $ra
label_3cdf5c:
    if (ctx->pc == 0x3CDF5Cu) {
        ctx->pc = 0x3CDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF58u;
        // 0x3cdf5c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDF60u;
        goto label_fallthrough_0x3cdf58;
    }
    ctx->pc = 0x3CDF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF58u;
        // 0x3cdf5c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cdf58:
    ctx->pc = 0x3CDF60u;
}
