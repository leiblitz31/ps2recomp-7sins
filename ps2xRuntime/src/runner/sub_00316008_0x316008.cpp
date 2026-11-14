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

// Function: sub_00316008
// Address: 0x316008 - 0x3162c8
void sub_00316008_0x316008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316008_0x316008");
#endif

    switch (ctx->pc) {
        case 0x316008u: goto label_316008;
        case 0x31600cu: goto label_31600c;
        case 0x316010u: goto label_316010;
        case 0x316014u: goto label_316014;
        case 0x316018u: goto label_316018;
        case 0x31601cu: goto label_31601c;
        case 0x316020u: goto label_316020;
        case 0x316024u: goto label_316024;
        case 0x316028u: goto label_316028;
        case 0x31602cu: goto label_31602c;
        case 0x316030u: goto label_316030;
        case 0x316034u: goto label_316034;
        case 0x316038u: goto label_316038;
        case 0x31603cu: goto label_31603c;
        case 0x316040u: goto label_316040;
        case 0x316044u: goto label_316044;
        case 0x316048u: goto label_316048;
        case 0x31604cu: goto label_31604c;
        case 0x316050u: goto label_316050;
        case 0x316054u: goto label_316054;
        case 0x316058u: goto label_316058;
        case 0x31605cu: goto label_31605c;
        case 0x316060u: goto label_316060;
        case 0x316064u: goto label_316064;
        case 0x316068u: goto label_316068;
        case 0x31606cu: goto label_31606c;
        case 0x316070u: goto label_316070;
        case 0x316074u: goto label_316074;
        case 0x316078u: goto label_316078;
        case 0x31607cu: goto label_31607c;
        case 0x316080u: goto label_316080;
        case 0x316084u: goto label_316084;
        case 0x316088u: goto label_316088;
        case 0x31608cu: goto label_31608c;
        case 0x316090u: goto label_316090;
        case 0x316094u: goto label_316094;
        case 0x316098u: goto label_316098;
        case 0x31609cu: goto label_31609c;
        case 0x3160a0u: goto label_3160a0;
        case 0x3160a4u: goto label_3160a4;
        case 0x3160a8u: goto label_3160a8;
        case 0x3160acu: goto label_3160ac;
        case 0x3160b0u: goto label_3160b0;
        case 0x3160b4u: goto label_3160b4;
        case 0x3160b8u: goto label_3160b8;
        case 0x3160bcu: goto label_3160bc;
        case 0x3160c0u: goto label_3160c0;
        case 0x3160c4u: goto label_3160c4;
        case 0x3160c8u: goto label_3160c8;
        case 0x3160ccu: goto label_3160cc;
        case 0x3160d0u: goto label_3160d0;
        case 0x3160d4u: goto label_3160d4;
        case 0x3160d8u: goto label_3160d8;
        case 0x3160dcu: goto label_3160dc;
        case 0x3160e0u: goto label_3160e0;
        case 0x3160e4u: goto label_3160e4;
        case 0x3160e8u: goto label_3160e8;
        case 0x3160ecu: goto label_3160ec;
        case 0x3160f0u: goto label_3160f0;
        case 0x3160f4u: goto label_3160f4;
        case 0x3160f8u: goto label_3160f8;
        case 0x3160fcu: goto label_3160fc;
        case 0x316100u: goto label_316100;
        case 0x316104u: goto label_316104;
        case 0x316108u: goto label_316108;
        case 0x31610cu: goto label_31610c;
        case 0x316110u: goto label_316110;
        case 0x316114u: goto label_316114;
        case 0x316118u: goto label_316118;
        case 0x31611cu: goto label_31611c;
        case 0x316120u: goto label_316120;
        case 0x316124u: goto label_316124;
        case 0x316128u: goto label_316128;
        case 0x31612cu: goto label_31612c;
        case 0x316130u: goto label_316130;
        case 0x316134u: goto label_316134;
        case 0x316138u: goto label_316138;
        case 0x31613cu: goto label_31613c;
        case 0x316140u: goto label_316140;
        case 0x316144u: goto label_316144;
        case 0x316148u: goto label_316148;
        case 0x31614cu: goto label_31614c;
        case 0x316150u: goto label_316150;
        case 0x316154u: goto label_316154;
        case 0x316158u: goto label_316158;
        case 0x31615cu: goto label_31615c;
        case 0x316160u: goto label_316160;
        case 0x316164u: goto label_316164;
        case 0x316168u: goto label_316168;
        case 0x31616cu: goto label_31616c;
        case 0x316170u: goto label_316170;
        case 0x316174u: goto label_316174;
        case 0x316178u: goto label_316178;
        case 0x31617cu: goto label_31617c;
        case 0x316180u: goto label_316180;
        case 0x316184u: goto label_316184;
        case 0x316188u: goto label_316188;
        case 0x31618cu: goto label_31618c;
        case 0x316190u: goto label_316190;
        case 0x316194u: goto label_316194;
        case 0x316198u: goto label_316198;
        case 0x31619cu: goto label_31619c;
        case 0x3161a0u: goto label_3161a0;
        case 0x3161a4u: goto label_3161a4;
        case 0x3161a8u: goto label_3161a8;
        case 0x3161acu: goto label_3161ac;
        case 0x3161b0u: goto label_3161b0;
        case 0x3161b4u: goto label_3161b4;
        case 0x3161b8u: goto label_3161b8;
        case 0x3161bcu: goto label_3161bc;
        case 0x3161c0u: goto label_3161c0;
        case 0x3161c4u: goto label_3161c4;
        case 0x3161c8u: goto label_3161c8;
        case 0x3161ccu: goto label_3161cc;
        case 0x3161d0u: goto label_3161d0;
        case 0x3161d4u: goto label_3161d4;
        case 0x3161d8u: goto label_3161d8;
        case 0x3161dcu: goto label_3161dc;
        case 0x3161e0u: goto label_3161e0;
        case 0x3161e4u: goto label_3161e4;
        case 0x3161e8u: goto label_3161e8;
        case 0x3161ecu: goto label_3161ec;
        case 0x3161f0u: goto label_3161f0;
        case 0x3161f4u: goto label_3161f4;
        case 0x3161f8u: goto label_3161f8;
        case 0x3161fcu: goto label_3161fc;
        case 0x316200u: goto label_316200;
        case 0x316204u: goto label_316204;
        case 0x316208u: goto label_316208;
        case 0x31620cu: goto label_31620c;
        case 0x316210u: goto label_316210;
        case 0x316214u: goto label_316214;
        case 0x316218u: goto label_316218;
        case 0x31621cu: goto label_31621c;
        case 0x316220u: goto label_316220;
        case 0x316224u: goto label_316224;
        case 0x316228u: goto label_316228;
        case 0x31622cu: goto label_31622c;
        case 0x316230u: goto label_316230;
        case 0x316234u: goto label_316234;
        case 0x316238u: goto label_316238;
        case 0x31623cu: goto label_31623c;
        case 0x316240u: goto label_316240;
        case 0x316244u: goto label_316244;
        case 0x316248u: goto label_316248;
        case 0x31624cu: goto label_31624c;
        case 0x316250u: goto label_316250;
        case 0x316254u: goto label_316254;
        case 0x316258u: goto label_316258;
        case 0x31625cu: goto label_31625c;
        case 0x316260u: goto label_316260;
        case 0x316264u: goto label_316264;
        case 0x316268u: goto label_316268;
        case 0x31626cu: goto label_31626c;
        case 0x316270u: goto label_316270;
        case 0x316274u: goto label_316274;
        case 0x316278u: goto label_316278;
        case 0x31627cu: goto label_31627c;
        case 0x316280u: goto label_316280;
        case 0x316284u: goto label_316284;
        case 0x316288u: goto label_316288;
        case 0x31628cu: goto label_31628c;
        case 0x316290u: goto label_316290;
        case 0x316294u: goto label_316294;
        case 0x316298u: goto label_316298;
        case 0x31629cu: goto label_31629c;
        case 0x3162a0u: goto label_3162a0;
        case 0x3162a4u: goto label_3162a4;
        case 0x3162a8u: goto label_3162a8;
        case 0x3162acu: goto label_3162ac;
        case 0x3162b0u: goto label_3162b0;
        case 0x3162b4u: goto label_3162b4;
        case 0x3162b8u: goto label_3162b8;
        case 0x3162bcu: goto label_3162bc;
        case 0x3162c0u: goto label_3162c0;
        case 0x3162c4u: goto label_3162c4;
        default: break;
    }

    ctx->pc = 0x316008u;

label_316008:
    // 0x316008: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x316008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_31600c:
    // 0x31600c: 0x8f83a5a8  lw          $v1, -0x5A58($gp)
    ctx->pc = 0x31600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944168)));
label_316010:
    // 0x316010: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x316010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_316014:
    // 0x316014: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x316014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_316018:
    // 0x316018: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x316018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_31601c:
    // 0x31601c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x31601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_316020:
    // 0x316020: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x316020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_316024:
    // 0x316024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x316024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_316028:
    // 0x316028: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x316028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_31602c:
    // 0x31602c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31602cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_316030:
    // 0x316030: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x316030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_316034:
    // 0x316034: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x316034u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_316038:
    // 0x316038: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x316038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_31603c:
    // 0x31603c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31603cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_316040:
    // 0x316040: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x316040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_316044:
    // 0x316044: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x316044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_316048:
    // 0x316048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x316048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31604c:
    // 0x31604c: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x31604cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_316050:
    // 0x316050: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x316050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_316054:
    // 0x316054: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x316054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316058:
    // 0x316058: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x316058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31605c:
    // 0x31605c: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x31605cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_316060:
    // 0x316060: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x316060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_316064:
    // 0x316064: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x316064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_316068:
    // 0x316068: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x316068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_31606c:
    // 0x31606c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x31606cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316070:
    // 0x316070: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x316070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316074:
    // 0x316074: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x316074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316078:
    // 0x316078: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x316078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31607c:
    // 0x31607c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x31607cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316080:
    // 0x316080: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x316080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316084:
    // 0x316084: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x316084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_316088:
    // 0x316088: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x316088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_31608c:
    // 0x31608c: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x31608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_316090:
    // 0x316090: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x316090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_316094:
    // 0x316094: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x316094u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316098:
    // 0x316098: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x316098u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31609c:
    // 0x31609c: 0x10800080  beqz        $a0, . + 4 + (0x80 << 2)
label_3160a0:
    if (ctx->pc == 0x3160A0u) {
        ctx->pc = 0x3160A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31609Cu;
        // 0x3160a0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3160A4u;
        goto label_3160a4;
    }
    ctx->pc = 0x31609Cu;
    {
        const bool branch_taken_0x31609c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3160A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31609Cu;
        // 0x3160a0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31609c) {
            ctx->pc = 0x3162A0u;
            goto label_3162a0;
        }
    }
    ctx->pc = 0x3160A4u;
label_3160a4:
    // 0x3160a4: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x3160a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_3160a8:
    // 0x3160a8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3160a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3160ac:
    // 0x3160ac: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x3160acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_3160b0:
    // 0x3160b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3160b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3160b4:
    // 0x3160b4: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_3160b8:
    if (ctx->pc == 0x3160B8u) {
        ctx->pc = 0x3160B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160B4u;
        // 0x3160b8: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3160BCu;
        goto label_3160bc;
    }
    ctx->pc = 0x3160B4u;
    {
        const bool branch_taken_0x3160b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3160B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160B4u;
        // 0x3160b8: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160b4) {
            ctx->pc = 0x316130u;
            goto label_316130;
        }
    }
    ctx->pc = 0x3160BCu;
label_3160bc:
    // 0x3160bc: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x3160bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_3160c0:
    // 0x3160c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3160c4:
    // 0x3160c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3160c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3160c8:
    // 0x3160c8: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3160cc:
    // 0x3160cc: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x3160ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3160d0:
    // 0x3160d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3160d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3160d4:
    // 0x3160d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3160d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3160d8:
    // 0x3160d8: 0x0  nop
    ctx->pc = 0x3160d8u;
    // NOP
label_3160dc:
    // 0x3160dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3160e0:
    if (ctx->pc == 0x3160E0u) {
        ctx->pc = 0x3160E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160DCu;
        // 0x3160e0: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3160E4u;
        goto label_3160e4;
    }
    ctx->pc = 0x3160DCu;
    {
        const bool branch_taken_0x3160dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3160dc) {
            ctx->pc = 0x3160E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3160DCu;
            // 0x3160e0: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3160F0u;
            goto label_3160f0;
        }
    }
    ctx->pc = 0x3160E4u;
label_3160e4:
    // 0x3160e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3160e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3160e8:
    // 0x3160e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3160ec:
    if (ctx->pc == 0x3160ECu) {
        ctx->pc = 0x3160ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160E8u;
        // 0x3160ec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3160F0u;
        goto label_3160f0;
    }
    ctx->pc = 0x3160E8u;
    {
        const bool branch_taken_0x3160e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3160ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160E8u;
        // 0x3160ec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160e8) {
            ctx->pc = 0x316118u;
            goto label_316118;
        }
    }
    ctx->pc = 0x3160F0u;
label_3160f0:
    // 0x3160f0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3160f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3160f4:
    // 0x3160f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3160f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3160f8:
    // 0x3160f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3160f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3160fc:
    // 0x3160fc: 0x0  nop
    ctx->pc = 0x3160fcu;
    // NOP
label_316100:
    // 0x316100: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_316104:
    if (ctx->pc == 0x316104u) {
        ctx->pc = 0x316104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316100u;
        // 0x316104: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316108u;
        goto label_316108;
    }
    ctx->pc = 0x316100u;
    {
        const bool branch_taken_0x316100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316100u;
        // 0x316104: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316100) {
            ctx->pc = 0x316118u;
            goto label_316118;
        }
    }
    ctx->pc = 0x316108u;
label_316108:
    // 0x316108: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x316108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_31610c:
    // 0x31610c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x31610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_316110:
    // 0x316110: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x316110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_316114:
    // 0x316114: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x316114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_316118:
    // 0x316118: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_31611c:
    // 0x31611c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316120:
    // 0x316120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x316120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_316124:
    // 0x316124: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_316128:
    if (ctx->pc == 0x316128u) {
        ctx->pc = 0x316128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316124u;
        // 0x316128: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31612Cu;
        goto label_31612c;
    }
    ctx->pc = 0x316124u;
    {
        const bool branch_taken_0x316124 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x316128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316124u;
        // 0x316128: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316124) {
            ctx->pc = 0x3160C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3160c0;
        }
    }
    ctx->pc = 0x31612Cu;
label_31612c:
    // 0x31612c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x31612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_316130:
    // 0x316130: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x316130u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316134:
    // 0x316134: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x316134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_316138:
    // 0x316138: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x316138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_31613c:
    // 0x31613c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x31613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_316140:
    // 0x316140: 0x10430053  beq         $v0, $v1, . + 4 + (0x53 << 2)
label_316144:
    if (ctx->pc == 0x316144u) {
        ctx->pc = 0x316144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316140u;
        // 0x316144: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316148u;
        goto label_316148;
    }
    ctx->pc = 0x316140u;
    {
        const bool branch_taken_0x316140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x316144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316140u;
        // 0x316144: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316140) {
            ctx->pc = 0x316290u;
            goto label_316290;
        }
    }
    ctx->pc = 0x316148u;
label_316148:
    // 0x316148: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x316148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_31614c:
    // 0x31614c: 0x0  nop
    ctx->pc = 0x31614cu;
    // NOP
label_316150:
    // 0x316150: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x316150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_316154:
    // 0x316154: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x316154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_316158:
    // 0x316158: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
label_31615c:
    if (ctx->pc == 0x31615Cu) {
        ctx->pc = 0x31615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316158u;
        // 0x31615c: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316160u;
        goto label_316160;
    }
    ctx->pc = 0x316158u;
    {
        const bool branch_taken_0x316158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316158u;
        // 0x31615c: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316158) {
            ctx->pc = 0x316280u;
            goto label_316280;
        }
    }
    ctx->pc = 0x316160u;
label_316160:
    // 0x316160: 0x8f82a5ac  lw          $v0, -0x5A54($gp)
    ctx->pc = 0x316160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944172)));
label_316164:
    // 0x316164: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x316164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_316168:
    // 0x316168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x316168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31616c:
    // 0x31616c: 0x10730045  beq         $v1, $s3, . + 4 + (0x45 << 2)
label_316170:
    if (ctx->pc == 0x316170u) {
        ctx->pc = 0x316170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31616Cu;
        // 0x316170: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316174u;
        goto label_316174;
    }
    ctx->pc = 0x31616Cu;
    {
        const bool branch_taken_0x31616c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x316170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31616Cu;
        // 0x316170: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31616c) {
            ctx->pc = 0x316284u;
            goto label_316284;
        }
    }
    ctx->pc = 0x316174u;
label_316174:
    // 0x316174: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x316174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_316178:
    // 0x316178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x316178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31617c:
    // 0x31617c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_316180:
    if (ctx->pc == 0x316180u) {
        ctx->pc = 0x316180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31617Cu;
        // 0x316180: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316184u;
        goto label_316184;
    }
    ctx->pc = 0x31617Cu;
    {
        const bool branch_taken_0x31617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31617Cu;
        // 0x316180: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31617c) {
            ctx->pc = 0x316288u;
            goto label_316288;
        }
    }
    ctx->pc = 0x316184u;
label_316184:
    // 0x316184: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x316184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_316188:
    // 0x316188: 0xc0e2048  jal         func_388120
label_31618c:
    if (ctx->pc == 0x31618Cu) {
        ctx->pc = 0x31618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316188u;
        // 0x31618c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316190u;
        goto label_316190;
    }
    ctx->pc = 0x316188u;
    SET_GPR_U32(ctx, 31, 0x316190u);
    ctx->pc = 0x31618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316188u;
    // 0x31618c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x316188u, 0x316190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316190u;
label_316190:
    // 0x316190: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x316190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316194:
    // 0x316194: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x316194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316198:
    // 0x316198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x316198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31619c:
    // 0x31619c: 0x0  nop
    ctx->pc = 0x31619cu;
    // NOP
label_3161a0:
    // 0x3161a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3161a4:
    if (ctx->pc == 0x3161A4u) {
        ctx->pc = 0x3161A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161A0u;
        // 0x3161a4: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161A8u;
        goto label_3161a8;
    }
    ctx->pc = 0x3161A0u;
    {
        const bool branch_taken_0x3161a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3161a0) {
            ctx->pc = 0x3161A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3161A0u;
            // 0x3161a4: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3161B0u;
            goto label_3161b0;
        }
    }
    ctx->pc = 0x3161A8u;
label_3161a8:
    // 0x3161a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3161ac:
    if (ctx->pc == 0x3161ACu) {
        ctx->pc = 0x3161ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161A8u;
        // 0x3161ac: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161B0u;
        goto label_3161b0;
    }
    ctx->pc = 0x3161A8u;
    {
        const bool branch_taken_0x3161a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161A8u;
        // 0x3161ac: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161a8) {
            ctx->pc = 0x3161C4u;
            goto label_3161c4;
        }
    }
    ctx->pc = 0x3161B0u;
label_3161b0:
    // 0x3161b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3161b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3161b4:
    // 0x3161b4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3161b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3161b8:
    // 0x3161b8: 0x0  nop
    ctx->pc = 0x3161b8u;
    // NOP
label_3161bc:
    // 0x3161bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3161c0:
    if (ctx->pc == 0x3161C0u) {
        ctx->pc = 0x3161C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161BCu;
        // 0x3161c0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161C4u;
        goto label_3161c4;
    }
    ctx->pc = 0x3161BCu;
    {
        const bool branch_taken_0x3161bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3161bc) {
            ctx->pc = 0x3161C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3161BCu;
            // 0x3161c0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3161C4u;
            goto label_3161c4;
        }
    }
    ctx->pc = 0x3161C4u;
label_3161c4:
    // 0x3161c4: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x3161c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3161c8:
    // 0x3161c8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3161c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3161cc:
    // 0x3161cc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3161ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3161d0:
    // 0x3161d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3161d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3161d4:
    // 0x3161d4: 0x0  nop
    ctx->pc = 0x3161d4u;
    // NOP
label_3161d8:
    // 0x3161d8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3161dc:
    if (ctx->pc == 0x3161DCu) {
        ctx->pc = 0x3161DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161D8u;
        // 0x3161dc: 0xc6230004  lwc1        $f3, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161E0u;
        goto label_3161e0;
    }
    ctx->pc = 0x3161D8u;
    {
        const bool branch_taken_0x3161d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3161d8) {
            ctx->pc = 0x3161DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3161D8u;
            // 0x3161dc: 0xc6230004  lwc1        $f3, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3161E8u;
            goto label_3161e8;
        }
    }
    ctx->pc = 0x3161E0u;
label_3161e0:
    // 0x3161e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3161e4:
    if (ctx->pc == 0x3161E4u) {
        ctx->pc = 0x3161E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161E0u;
        // 0x3161e4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161E8u;
        goto label_3161e8;
    }
    ctx->pc = 0x3161E0u;
    {
        const bool branch_taken_0x3161e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161E0u;
        // 0x3161e4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161e0) {
            ctx->pc = 0x3161FCu;
            goto label_3161fc;
        }
    }
    ctx->pc = 0x3161E8u;
label_3161e8:
    // 0x3161e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3161e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3161ec:
    // 0x3161ec: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3161ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3161f0:
    // 0x3161f0: 0x0  nop
    ctx->pc = 0x3161f0u;
    // NOP
label_3161f4:
    // 0x3161f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3161f8:
    if (ctx->pc == 0x3161F8u) {
        ctx->pc = 0x3161F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161F4u;
        // 0x3161f8: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161FCu;
        goto label_3161fc;
    }
    ctx->pc = 0x3161F4u;
    {
        const bool branch_taken_0x3161f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3161f4) {
            ctx->pc = 0x3161F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3161F4u;
            // 0x3161f8: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3161FCu;
            goto label_3161fc;
        }
    }
    ctx->pc = 0x3161FCu;
label_3161fc:
    // 0x3161fc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3161fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316200:
    // 0x316200: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x316200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_316204:
    // 0x316204: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x316204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316208:
    // 0x316208: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x316208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31620c:
    // 0x31620c: 0x0  nop
    ctx->pc = 0x31620cu;
    // NOP
label_316210:
    // 0x316210: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_316214:
    if (ctx->pc == 0x316214u) {
        ctx->pc = 0x316214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316210u;
        // 0x316214: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316218u;
        goto label_316218;
    }
    ctx->pc = 0x316210u;
    {
        const bool branch_taken_0x316210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316210u;
        // 0x316214: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316210) {
            ctx->pc = 0x316220u;
            goto label_316220;
        }
    }
    ctx->pc = 0x316218u;
label_316218:
    // 0x316218: 0x10000007  b           . + 4 + (0x7 << 2)
label_31621c:
    if (ctx->pc == 0x31621Cu) {
        ctx->pc = 0x31621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316218u;
        // 0x31621c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316220u;
        goto label_316220;
    }
    ctx->pc = 0x316218u;
    {
        const bool branch_taken_0x316218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316218u;
        // 0x31621c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316218) {
            ctx->pc = 0x316238u;
            goto label_316238;
        }
    }
    ctx->pc = 0x316220u;
label_316220:
    // 0x316220: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x316220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316224:
    // 0x316224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316228:
    // 0x316228: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x316228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31622c:
    // 0x31622c: 0x0  nop
    ctx->pc = 0x31622cu;
    // NOP
label_316230:
    // 0x316230: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_316234:
    if (ctx->pc == 0x316234u) {
        ctx->pc = 0x316234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316230u;
        // 0x316234: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316238u;
        goto label_316238;
    }
    ctx->pc = 0x316230u;
    {
        const bool branch_taken_0x316230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316230) {
            ctx->pc = 0x316234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316230u;
            // 0x316234: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x316238u;
            goto label_316238;
        }
    }
    ctx->pc = 0x316238u;
label_316238:
    // 0x316238: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x316238u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31623c:
    // 0x31623c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x31623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316240:
    // 0x316240: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x316240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_316244:
    // 0x316244: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x316244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_316248:
    // 0x316248: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x316248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31624c:
    // 0x31624c: 0x0  nop
    ctx->pc = 0x31624cu;
    // NOP
label_316250:
    // 0x316250: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_316254:
    if (ctx->pc == 0x316254u) {
        ctx->pc = 0x316254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316250u;
        // 0x316254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316258u;
        goto label_316258;
    }
    ctx->pc = 0x316250u;
    {
        const bool branch_taken_0x316250 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316250u;
        // 0x316254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316250) {
            ctx->pc = 0x31625Cu;
            goto label_31625c;
        }
    }
    ctx->pc = 0x316258u;
label_316258:
    // 0x316258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31625c:
    // 0x31625c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_316260:
    if (ctx->pc == 0x316260u) {
        ctx->pc = 0x316260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31625Cu;
        // 0x316260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316264u;
        goto label_316264;
    }
    ctx->pc = 0x31625Cu;
    {
        const bool branch_taken_0x31625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31625Cu;
        // 0x316260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31625c) {
            ctx->pc = 0x316280u;
            goto label_316280;
        }
    }
    ctx->pc = 0x316264u;
label_316264:
    // 0x316264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x316264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_316268:
    // 0x316268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31626c:
    // 0x31626c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31626cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316270:
    // 0x316270: 0x2a0f809  jalr        $s5
label_316274:
    if (ctx->pc == 0x316274u) {
        ctx->pc = 0x316274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316270u;
        // 0x316274: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316278u;
        goto label_316278;
    }
    ctx->pc = 0x316270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x316278u);
        ctx->pc = 0x316274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316270u;
        // 0x316274: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316270u, 0x316278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316278u;
label_316278:
    // 0x316278: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_31627c:
    if (ctx->pc == 0x31627Cu) {
        ctx->pc = 0x31627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316278u;
        // 0x31627c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316280u;
        goto label_316280;
    }
    ctx->pc = 0x316278u;
    {
        const bool branch_taken_0x316278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316278) {
            ctx->pc = 0x31627Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316278u;
            // 0x31627c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3162A4u;
            goto label_3162a4;
        }
    }
    ctx->pc = 0x316280u;
label_316280:
    // 0x316280: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x316280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_316284:
    // 0x316284: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x316284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_316288:
    // 0x316288: 0x1462ffb1  bne         $v1, $v0, . + 4 + (-0x4F << 2)
label_31628c:
    if (ctx->pc == 0x31628Cu) {
        ctx->pc = 0x31628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316288u;
        // 0x31628c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316290u;
        goto label_316290;
    }
    ctx->pc = 0x316288u;
    {
        const bool branch_taken_0x316288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316288u;
        // 0x31628c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316288) {
            ctx->pc = 0x316150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316150;
        }
    }
    ctx->pc = 0x316290u;
label_316290:
    // 0x316290: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x316290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_316294:
    // 0x316294: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x316294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_316298:
    // 0x316298: 0x5440ff83  bnel        $v0, $zero, . + 4 + (-0x7D << 2)
label_31629c:
    if (ctx->pc == 0x31629Cu) {
        ctx->pc = 0x31629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316298u;
        // 0x31629c: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3162A0u;
        goto label_3162a0;
    }
    ctx->pc = 0x316298u;
    {
        const bool branch_taken_0x316298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316298) {
            ctx->pc = 0x31629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316298u;
            // 0x31629c: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3160A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3160a8;
        }
    }
    ctx->pc = 0x3162A0u;
label_3162a0:
    // 0x3162a0: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x3162a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3162a4:
    // 0x3162a4: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x3162a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3162a8:
    // 0x3162a8: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x3162a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3162ac:
    // 0x3162ac: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x3162acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3162b0:
    // 0x3162b0: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x3162b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3162b4:
    // 0x3162b4: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x3162b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3162b8:
    // 0x3162b8: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x3162b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3162bc:
    // 0x3162bc: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x3162bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_3162c0:
    // 0x3162c0: 0x3e00008  jr          $ra
label_3162c4:
    if (ctx->pc == 0x3162C4u) {
        ctx->pc = 0x3162C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162C0u;
        // 0x3162c4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3162C8u;
        goto label_fallthrough_0x3162c0;
    }
    ctx->pc = 0x3162C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3162C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162C0u;
        // 0x3162c4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3162C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3162c0:
    ctx->pc = 0x3162C8u;
}
