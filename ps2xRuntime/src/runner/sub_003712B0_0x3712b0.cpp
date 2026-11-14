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

// Function: sub_003712B0
// Address: 0x3712b0 - 0x371630
void sub_003712B0_0x3712b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003712B0_0x3712b0");
#endif

    switch (ctx->pc) {
        case 0x3712b0u: goto label_3712b0;
        case 0x3712b4u: goto label_3712b4;
        case 0x3712b8u: goto label_3712b8;
        case 0x3712bcu: goto label_3712bc;
        case 0x3712c0u: goto label_3712c0;
        case 0x3712c4u: goto label_3712c4;
        case 0x3712c8u: goto label_3712c8;
        case 0x3712ccu: goto label_3712cc;
        case 0x3712d0u: goto label_3712d0;
        case 0x3712d4u: goto label_3712d4;
        case 0x3712d8u: goto label_3712d8;
        case 0x3712dcu: goto label_3712dc;
        case 0x3712e0u: goto label_3712e0;
        case 0x3712e4u: goto label_3712e4;
        case 0x3712e8u: goto label_3712e8;
        case 0x3712ecu: goto label_3712ec;
        case 0x3712f0u: goto label_3712f0;
        case 0x3712f4u: goto label_3712f4;
        case 0x3712f8u: goto label_3712f8;
        case 0x3712fcu: goto label_3712fc;
        case 0x371300u: goto label_371300;
        case 0x371304u: goto label_371304;
        case 0x371308u: goto label_371308;
        case 0x37130cu: goto label_37130c;
        case 0x371310u: goto label_371310;
        case 0x371314u: goto label_371314;
        case 0x371318u: goto label_371318;
        case 0x37131cu: goto label_37131c;
        case 0x371320u: goto label_371320;
        case 0x371324u: goto label_371324;
        case 0x371328u: goto label_371328;
        case 0x37132cu: goto label_37132c;
        case 0x371330u: goto label_371330;
        case 0x371334u: goto label_371334;
        case 0x371338u: goto label_371338;
        case 0x37133cu: goto label_37133c;
        case 0x371340u: goto label_371340;
        case 0x371344u: goto label_371344;
        case 0x371348u: goto label_371348;
        case 0x37134cu: goto label_37134c;
        case 0x371350u: goto label_371350;
        case 0x371354u: goto label_371354;
        case 0x371358u: goto label_371358;
        case 0x37135cu: goto label_37135c;
        case 0x371360u: goto label_371360;
        case 0x371364u: goto label_371364;
        case 0x371368u: goto label_371368;
        case 0x37136cu: goto label_37136c;
        case 0x371370u: goto label_371370;
        case 0x371374u: goto label_371374;
        case 0x371378u: goto label_371378;
        case 0x37137cu: goto label_37137c;
        case 0x371380u: goto label_371380;
        case 0x371384u: goto label_371384;
        case 0x371388u: goto label_371388;
        case 0x37138cu: goto label_37138c;
        case 0x371390u: goto label_371390;
        case 0x371394u: goto label_371394;
        case 0x371398u: goto label_371398;
        case 0x37139cu: goto label_37139c;
        case 0x3713a0u: goto label_3713a0;
        case 0x3713a4u: goto label_3713a4;
        case 0x3713a8u: goto label_3713a8;
        case 0x3713acu: goto label_3713ac;
        case 0x3713b0u: goto label_3713b0;
        case 0x3713b4u: goto label_3713b4;
        case 0x3713b8u: goto label_3713b8;
        case 0x3713bcu: goto label_3713bc;
        case 0x3713c0u: goto label_3713c0;
        case 0x3713c4u: goto label_3713c4;
        case 0x3713c8u: goto label_3713c8;
        case 0x3713ccu: goto label_3713cc;
        case 0x3713d0u: goto label_3713d0;
        case 0x3713d4u: goto label_3713d4;
        case 0x3713d8u: goto label_3713d8;
        case 0x3713dcu: goto label_3713dc;
        case 0x3713e0u: goto label_3713e0;
        case 0x3713e4u: goto label_3713e4;
        case 0x3713e8u: goto label_3713e8;
        case 0x3713ecu: goto label_3713ec;
        case 0x3713f0u: goto label_3713f0;
        case 0x3713f4u: goto label_3713f4;
        case 0x3713f8u: goto label_3713f8;
        case 0x3713fcu: goto label_3713fc;
        case 0x371400u: goto label_371400;
        case 0x371404u: goto label_371404;
        case 0x371408u: goto label_371408;
        case 0x37140cu: goto label_37140c;
        case 0x371410u: goto label_371410;
        case 0x371414u: goto label_371414;
        case 0x371418u: goto label_371418;
        case 0x37141cu: goto label_37141c;
        case 0x371420u: goto label_371420;
        case 0x371424u: goto label_371424;
        case 0x371428u: goto label_371428;
        case 0x37142cu: goto label_37142c;
        case 0x371430u: goto label_371430;
        case 0x371434u: goto label_371434;
        case 0x371438u: goto label_371438;
        case 0x37143cu: goto label_37143c;
        case 0x371440u: goto label_371440;
        case 0x371444u: goto label_371444;
        case 0x371448u: goto label_371448;
        case 0x37144cu: goto label_37144c;
        case 0x371450u: goto label_371450;
        case 0x371454u: goto label_371454;
        case 0x371458u: goto label_371458;
        case 0x37145cu: goto label_37145c;
        case 0x371460u: goto label_371460;
        case 0x371464u: goto label_371464;
        case 0x371468u: goto label_371468;
        case 0x37146cu: goto label_37146c;
        case 0x371470u: goto label_371470;
        case 0x371474u: goto label_371474;
        case 0x371478u: goto label_371478;
        case 0x37147cu: goto label_37147c;
        case 0x371480u: goto label_371480;
        case 0x371484u: goto label_371484;
        case 0x371488u: goto label_371488;
        case 0x37148cu: goto label_37148c;
        case 0x371490u: goto label_371490;
        case 0x371494u: goto label_371494;
        case 0x371498u: goto label_371498;
        case 0x37149cu: goto label_37149c;
        case 0x3714a0u: goto label_3714a0;
        case 0x3714a4u: goto label_3714a4;
        case 0x3714a8u: goto label_3714a8;
        case 0x3714acu: goto label_3714ac;
        case 0x3714b0u: goto label_3714b0;
        case 0x3714b4u: goto label_3714b4;
        case 0x3714b8u: goto label_3714b8;
        case 0x3714bcu: goto label_3714bc;
        case 0x3714c0u: goto label_3714c0;
        case 0x3714c4u: goto label_3714c4;
        case 0x3714c8u: goto label_3714c8;
        case 0x3714ccu: goto label_3714cc;
        case 0x3714d0u: goto label_3714d0;
        case 0x3714d4u: goto label_3714d4;
        case 0x3714d8u: goto label_3714d8;
        case 0x3714dcu: goto label_3714dc;
        case 0x3714e0u: goto label_3714e0;
        case 0x3714e4u: goto label_3714e4;
        case 0x3714e8u: goto label_3714e8;
        case 0x3714ecu: goto label_3714ec;
        case 0x3714f0u: goto label_3714f0;
        case 0x3714f4u: goto label_3714f4;
        case 0x3714f8u: goto label_3714f8;
        case 0x3714fcu: goto label_3714fc;
        case 0x371500u: goto label_371500;
        case 0x371504u: goto label_371504;
        case 0x371508u: goto label_371508;
        case 0x37150cu: goto label_37150c;
        case 0x371510u: goto label_371510;
        case 0x371514u: goto label_371514;
        case 0x371518u: goto label_371518;
        case 0x37151cu: goto label_37151c;
        case 0x371520u: goto label_371520;
        case 0x371524u: goto label_371524;
        case 0x371528u: goto label_371528;
        case 0x37152cu: goto label_37152c;
        case 0x371530u: goto label_371530;
        case 0x371534u: goto label_371534;
        case 0x371538u: goto label_371538;
        case 0x37153cu: goto label_37153c;
        case 0x371540u: goto label_371540;
        case 0x371544u: goto label_371544;
        case 0x371548u: goto label_371548;
        case 0x37154cu: goto label_37154c;
        case 0x371550u: goto label_371550;
        case 0x371554u: goto label_371554;
        case 0x371558u: goto label_371558;
        case 0x37155cu: goto label_37155c;
        case 0x371560u: goto label_371560;
        case 0x371564u: goto label_371564;
        case 0x371568u: goto label_371568;
        case 0x37156cu: goto label_37156c;
        case 0x371570u: goto label_371570;
        case 0x371574u: goto label_371574;
        case 0x371578u: goto label_371578;
        case 0x37157cu: goto label_37157c;
        case 0x371580u: goto label_371580;
        case 0x371584u: goto label_371584;
        case 0x371588u: goto label_371588;
        case 0x37158cu: goto label_37158c;
        case 0x371590u: goto label_371590;
        case 0x371594u: goto label_371594;
        case 0x371598u: goto label_371598;
        case 0x37159cu: goto label_37159c;
        case 0x3715a0u: goto label_3715a0;
        case 0x3715a4u: goto label_3715a4;
        case 0x3715a8u: goto label_3715a8;
        case 0x3715acu: goto label_3715ac;
        case 0x3715b0u: goto label_3715b0;
        case 0x3715b4u: goto label_3715b4;
        case 0x3715b8u: goto label_3715b8;
        case 0x3715bcu: goto label_3715bc;
        case 0x3715c0u: goto label_3715c0;
        case 0x3715c4u: goto label_3715c4;
        case 0x3715c8u: goto label_3715c8;
        case 0x3715ccu: goto label_3715cc;
        case 0x3715d0u: goto label_3715d0;
        case 0x3715d4u: goto label_3715d4;
        case 0x3715d8u: goto label_3715d8;
        case 0x3715dcu: goto label_3715dc;
        case 0x3715e0u: goto label_3715e0;
        case 0x3715e4u: goto label_3715e4;
        case 0x3715e8u: goto label_3715e8;
        case 0x3715ecu: goto label_3715ec;
        case 0x3715f0u: goto label_3715f0;
        case 0x3715f4u: goto label_3715f4;
        case 0x3715f8u: goto label_3715f8;
        case 0x3715fcu: goto label_3715fc;
        case 0x371600u: goto label_371600;
        case 0x371604u: goto label_371604;
        case 0x371608u: goto label_371608;
        case 0x37160cu: goto label_37160c;
        case 0x371610u: goto label_371610;
        case 0x371614u: goto label_371614;
        case 0x371618u: goto label_371618;
        case 0x37161cu: goto label_37161c;
        case 0x371620u: goto label_371620;
        case 0x371624u: goto label_371624;
        case 0x371628u: goto label_371628;
        case 0x37162cu: goto label_37162c;
        default: break;
    }

    ctx->pc = 0x3712b0u;

label_3712b0:
    // 0x3712b0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3712b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_3712b4:
    // 0x3712b4: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x3712b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_3712b8:
    // 0x3712b8: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x3712b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_3712bc:
    // 0x3712bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3712bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3712c0:
    // 0x3712c0: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x3712c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_3712c4:
    // 0x3712c4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3712c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3712c8:
    // 0x3712c8: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x3712c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_3712cc:
    // 0x3712cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3712ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3712d0:
    // 0x3712d0: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x3712d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_3712d4:
    // 0x3712d4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x3712d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3712d8:
    // 0x3712d8: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x3712d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_3712dc:
    // 0x3712dc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3712dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3712e0:
    // 0x3712e0: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x3712e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_3712e4:
    // 0x3712e4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3712e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3712e8:
    // 0x3712e8: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x3712e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_3712ec:
    // 0x3712ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3712ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3712f0:
    // 0x3712f0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x3712f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_3712f4:
    // 0x3712f4: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x3712f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_3712f8:
    // 0x3712f8: 0x1aa0000a  blez        $s5, . + 4 + (0xA << 2)
label_3712fc:
    if (ctx->pc == 0x3712FCu) {
        ctx->pc = 0x3712FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712F8u;
        // 0x3712fc: 0x8fd3000c  lw          $s3, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371300u;
        goto label_371300;
    }
    ctx->pc = 0x3712F8u;
    {
        const bool branch_taken_0x3712f8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3712FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712F8u;
        // 0x3712fc: 0x8fd3000c  lw          $s3, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712f8) {
            ctx->pc = 0x371324u;
            goto label_371324;
        }
    }
    ctx->pc = 0x371300u;
label_371300:
    // 0x371300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x371300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371304:
    // 0x371304: 0x0  nop
    ctx->pc = 0x371304u;
    // NOP
label_371308:
    // 0x371308: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x371308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37130c:
    // 0x37130c: 0x8e73000c  lw          $s3, 0xC($s3)
    ctx->pc = 0x37130cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_371310:
    // 0x371310: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x371310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_371314:
    // 0x371314: 0x0  nop
    ctx->pc = 0x371314u;
    // NOP
label_371318:
    // 0x371318: 0x0  nop
    ctx->pc = 0x371318u;
    // NOP
label_37131c:
    // 0x37131c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_371320:
    if (ctx->pc == 0x371320u) {
        ctx->pc = 0x371320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37131Cu;
        // 0x371320: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371324u;
        goto label_371324;
    }
    ctx->pc = 0x37131Cu;
    {
        const bool branch_taken_0x37131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37131Cu;
        // 0x371320: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37131c) {
            ctx->pc = 0x371308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371308;
        }
    }
    ctx->pc = 0x371324u;
label_371324:
    // 0x371324: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x371324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371328:
    // 0x371328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x371328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37132c:
    // 0x37132c: 0x6a63001f  ldl         $v1, 0x1F($s3)
    ctx->pc = 0x37132cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_371330:
    // 0x371330: 0x6e630018  ldr         $v1, 0x18($s3)
    ctx->pc = 0x371330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_371334:
    // 0x371334: 0x6a650027  ldl         $a1, 0x27($s3)
    ctx->pc = 0x371334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_371338:
    // 0x371338: 0x6e650020  ldr         $a1, 0x20($s3)
    ctx->pc = 0x371338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_37133c:
    // 0x37133c: 0x6a66002f  ldl         $a2, 0x2F($s3)
    ctx->pc = 0x37133cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_371340:
    // 0x371340: 0x6e660028  ldr         $a2, 0x28($s3)
    ctx->pc = 0x371340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_371344:
    // 0x371344: 0xb3a300c7  sdl         $v1, 0xC7($sp)
    ctx->pc = 0x371344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_371348:
    // 0x371348: 0xb7a300c0  sdr         $v1, 0xC0($sp)
    ctx->pc = 0x371348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37134c:
    // 0x37134c: 0xb3a500cf  sdl         $a1, 0xCF($sp)
    ctx->pc = 0x37134cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_371350:
    // 0x371350: 0xb7a500c8  sdr         $a1, 0xC8($sp)
    ctx->pc = 0x371350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_371354:
    // 0x371354: 0xb3a600d7  sdl         $a2, 0xD7($sp)
    ctx->pc = 0x371354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_371358:
    // 0x371358: 0xb7a600d0  sdr         $a2, 0xD0($sp)
    ctx->pc = 0x371358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37135c:
    // 0x37135c: 0xc7868110  lwc1        $f6, -0x7EF0($gp)
    ctx->pc = 0x37135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_371360:
    // 0x371360: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x371360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_371364:
    // 0x371364: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_371368:
    if (ctx->pc == 0x371368u) {
        ctx->pc = 0x371368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371364u;
        // 0x371368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37136Cu;
        goto label_37136c;
    }
    ctx->pc = 0x371364u;
    {
        const bool branch_taken_0x371364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x371368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371364u;
        // 0x371368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371364) {
            ctx->pc = 0x371430u;
            goto label_371430;
        }
    }
    ctx->pc = 0x37136Cu;
label_37136c:
    // 0x37136c: 0xc7858114  lwc1        $f5, -0x7EEC($gp)
    ctx->pc = 0x37136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_371370:
    // 0x371370: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x371370u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
label_371374:
    // 0x371374: 0x0  nop
    ctx->pc = 0x371374u;
    // NOP
label_371378:
    // 0x371378: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x371378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_37137c:
    // 0x37137c: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x37137cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_371380:
    // 0x371380: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x371380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_371384:
    // 0x371384: 0xb3a800e7  sdl         $t0, 0xE7($sp)
    ctx->pc = 0x371384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_371388:
    // 0x371388: 0xb7a800e0  sdr         $t0, 0xE0($sp)
    ctx->pc = 0x371388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37138c:
    // 0x37138c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x37138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_371390:
    // 0x371390: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x371390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371394:
    // 0x371394: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x371394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_371398:
    // 0x371398: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x371398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37139c:
    // 0x37139c: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x37139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3713a0:
    // 0x3713a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3713a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3713a4:
    // 0x3713a4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x3713a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3713a8:
    // 0x3713a8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3713a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3713ac:
    // 0x3713ac: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x3713acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3713b0:
    // 0x3713b0: 0xc7a400cc  lwc1        $f4, 0xCC($sp)
    ctx->pc = 0x3713b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3713b4:
    // 0x3713b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3713b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3713b8:
    // 0x3713b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3713b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3713bc:
    // 0x3713bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3713bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3713c0:
    // 0x3713c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3713c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_3713c4:
    // 0x3713c4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x3713c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3713c8:
    // 0x3713c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3713c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3713cc:
    // 0x3713cc: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x3713ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3713d0:
    // 0x3713d0: 0x0  nop
    ctx->pc = 0x3713d0u;
    // NOP
label_3713d4:
    // 0x3713d4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3713d8:
    if (ctx->pc == 0x3713D8u) {
        ctx->pc = 0x3713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713D4u;
        // 0x3713d8: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3713DCu;
        goto label_3713dc;
    }
    ctx->pc = 0x3713D4u;
    {
        const bool branch_taken_0x3713d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713D4u;
        // 0x3713d8: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3713d4) {
            ctx->pc = 0x3713F8u;
            goto label_3713f8;
        }
    }
    ctx->pc = 0x3713DCu;
label_3713dc:
    // 0x3713dc: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x3713dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3713e0:
    // 0x3713e0: 0x0  nop
    ctx->pc = 0x3713e0u;
    // NOP
label_3713e4:
    // 0x3713e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3713e8:
    if (ctx->pc == 0x3713E8u) {
        ctx->pc = 0x3713E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713E4u;
        // 0x3713e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3713ECu;
        goto label_3713ec;
    }
    ctx->pc = 0x3713E4u;
    {
        const bool branch_taken_0x3713e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3713E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713E4u;
        // 0x3713e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3713e4) {
            ctx->pc = 0x3713FCu;
            goto label_3713fc;
        }
    }
    ctx->pc = 0x3713ECu;
label_3713ec:
    // 0x3713ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_3713f0:
    if (ctx->pc == 0x3713F0u) {
        ctx->pc = 0x3713F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713ECu;
        // 0x3713f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3713F4u;
        goto label_3713f4;
    }
    ctx->pc = 0x3713ECu;
    {
        const bool branch_taken_0x3713ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3713F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713ECu;
        // 0x3713f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3713ec) {
            ctx->pc = 0x3713FCu;
            goto label_3713fc;
        }
    }
    ctx->pc = 0x3713F4u;
label_3713f4:
    // 0x3713f4: 0x0  nop
    ctx->pc = 0x3713f4u;
    // NOP
label_3713f8:
    // 0x3713f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3713f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3713fc:
    // 0x3713fc: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3713fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_371400:
    // 0x371400: 0x0  nop
    ctx->pc = 0x371400u;
    // NOP
label_371404:
    // 0x371404: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_371408:
    if (ctx->pc == 0x371408u) {
        ctx->pc = 0x371408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371404u;
        // 0x371408: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37140Cu;
        goto label_37140c;
    }
    ctx->pc = 0x371404u;
    {
        const bool branch_taken_0x371404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x371408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371404u;
        // 0x371408: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371404) {
            ctx->pc = 0x371414u;
            goto label_371414;
        }
    }
    ctx->pc = 0x37140Cu;
label_37140c:
    // 0x37140c: 0x10000005  b           . + 4 + (0x5 << 2)
label_371410:
    if (ctx->pc == 0x371410u) {
        ctx->pc = 0x371410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37140Cu;
        // 0x371410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371414u;
        goto label_371414;
    }
    ctx->pc = 0x37140Cu;
    {
        const bool branch_taken_0x37140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37140Cu;
        // 0x371410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37140c) {
            ctx->pc = 0x371424u;
            goto label_371424;
        }
    }
    ctx->pc = 0x371414u;
label_371414:
    // 0x371414: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x371414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_371418:
    // 0x371418: 0x0  nop
    ctx->pc = 0x371418u;
    // NOP
label_37141c:
    // 0x37141c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_371420:
    if (ctx->pc == 0x371420u) {
        ctx->pc = 0x371420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37141Cu;
        // 0x371420: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371424u;
        goto label_371424;
    }
    ctx->pc = 0x37141Cu;
    {
        const bool branch_taken_0x37141c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37141c) {
            ctx->pc = 0x371420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37141Cu;
            // 0x371420: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371424u;
            goto label_371424;
        }
    }
    ctx->pc = 0x371424u;
label_371424:
    // 0x371424: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x371424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_371428:
    // 0x371428: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_37142c:
    if (ctx->pc == 0x37142Cu) {
        ctx->pc = 0x371430u;
        goto label_371430;
    }
    ctx->pc = 0x371428u;
    {
        const bool branch_taken_0x371428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371428) {
            ctx->pc = 0x371378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371378;
        }
    }
    ctx->pc = 0x371430u;
label_371430:
    // 0x371430: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_371434:
    if (ctx->pc == 0x371434u) {
        ctx->pc = 0x371438u;
        goto label_371438;
    }
    ctx->pc = 0x371430u;
    {
        const bool branch_taken_0x371430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x371430) {
            ctx->pc = 0x371440u;
            goto label_371440;
        }
    }
    ctx->pc = 0x371438u;
label_371438:
    // 0x371438: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_37143c:
    if (ctx->pc == 0x37143Cu) {
        ctx->pc = 0x37143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371438u;
        // 0x37143c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371440u;
        goto label_371440;
    }
    ctx->pc = 0x371438u;
    {
        const bool branch_taken_0x371438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371438u;
        // 0x37143c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371438) {
            ctx->pc = 0x371454u;
            goto label_371454;
        }
    }
    ctx->pc = 0x371440u;
label_371440:
    // 0x371440: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_371444:
    if (ctx->pc == 0x371444u) {
        ctx->pc = 0x371444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371440u;
        // 0x371444: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371448u;
        goto label_371448;
    }
    ctx->pc = 0x371440u;
    {
        const bool branch_taken_0x371440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x371444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371440u;
        // 0x371444: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371440) {
            ctx->pc = 0x371454u;
            goto label_371454;
        }
    }
    ctx->pc = 0x371448u;
label_371448:
    // 0x371448: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x371448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37144c:
    // 0x37144c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371450:
    // 0x371450: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x371450u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_371454:
    // 0x371454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371458:
    // 0x371458: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_37145c:
    if (ctx->pc == 0x37145Cu) {
        ctx->pc = 0x37145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371458u;
        // 0x37145c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371460u;
        goto label_371460;
    }
    ctx->pc = 0x371458u;
    {
        const bool branch_taken_0x371458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371458u;
        // 0x37145c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371458) {
            ctx->pc = 0x371488u;
            goto label_371488;
        }
    }
    ctx->pc = 0x371460u;
label_371460:
    // 0x371460: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x371460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_371464:
    // 0x371464: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_371468:
    if (ctx->pc == 0x371468u) {
        ctx->pc = 0x371468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371464u;
        // 0x371468: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37146Cu;
        goto label_37146c;
    }
    ctx->pc = 0x371464u;
    {
        const bool branch_taken_0x371464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x371468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371464u;
        // 0x371468: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371464) {
            ctx->pc = 0x3715A4u;
            goto label_3715a4;
        }
    }
    ctx->pc = 0x37146Cu;
label_37146c:
    // 0x37146c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x37146cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_371470:
    // 0x371470: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371474:
    // 0x371474: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x371474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_371478:
    // 0x371478: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x371478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37147c:
    // 0x37147c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x37147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_371480:
    // 0x371480: 0x1000005e  b           . + 4 + (0x5E << 2)
label_371484:
    if (ctx->pc == 0x371484u) {
        ctx->pc = 0x371484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371480u;
        // 0x371484: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371488u;
        goto label_371488;
    }
    ctx->pc = 0x371480u;
    {
        const bool branch_taken_0x371480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371480u;
        // 0x371484: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371480) {
            ctx->pc = 0x3715FCu;
            goto label_3715fc;
        }
    }
    ctx->pc = 0x371488u;
label_371488:
    // 0x371488: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_37148c:
    if (ctx->pc == 0x37148Cu) {
        ctx->pc = 0x37148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371488u;
        // 0x37148c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371490u;
        goto label_371490;
    }
    ctx->pc = 0x371488u;
    {
        const bool branch_taken_0x371488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371488u;
        // 0x37148c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371488) {
            ctx->pc = 0x371498u;
            goto label_371498;
        }
    }
    ctx->pc = 0x371490u;
label_371490:
    // 0x371490: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_371494:
    if (ctx->pc == 0x371494u) {
        ctx->pc = 0x371494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371490u;
        // 0x371494: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371498u;
        goto label_371498;
    }
    ctx->pc = 0x371490u;
    {
        const bool branch_taken_0x371490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x371490) {
            ctx->pc = 0x371494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371490u;
            // 0x371494: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3714F8u;
            goto label_3714f8;
        }
    }
    ctx->pc = 0x371498u;
label_371498:
    // 0x371498: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x371498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_37149c:
    // 0x37149c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3714a0:
    if (ctx->pc == 0x3714A0u) {
        ctx->pc = 0x3714A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37149Cu;
        // 0x3714a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3714A4u;
        goto label_3714a4;
    }
    ctx->pc = 0x37149Cu;
    {
        const bool branch_taken_0x37149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37149Cu;
        // 0x3714a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37149c) {
            ctx->pc = 0x3714C8u;
            goto label_3714c8;
        }
    }
    ctx->pc = 0x3714A4u;
label_3714a4:
    // 0x3714a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3714a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3714a8:
    // 0x3714a8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3714a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3714ac:
    // 0x3714ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3714acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3714b0:
    // 0x3714b0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3714b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3714b4:
    // 0x3714b4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3714b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3714b8:
    // 0x3714b8: 0xc0dc4ac  jal         func_3712B0
label_3714bc:
    if (ctx->pc == 0x3714BCu) {
        ctx->pc = 0x3714BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714B8u;
        // 0x3714bc: 0x26aa0001  addiu       $t2, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3714C0u;
        goto label_3714c0;
    }
    ctx->pc = 0x3714B8u;
    SET_GPR_U32(ctx, 31, 0x3714C0u);
    ctx->pc = 0x3714BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714B8u;
    // 0x3714bc: 0x26aa0001  addiu       $t2, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3712B0u;
    goto label_3712b0;
    ctx->pc = 0x3714C0u;
label_3714c0:
    // 0x3714c0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3714c4:
    if (ctx->pc == 0x3714C4u) {
        ctx->pc = 0x3714C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714C0u;
        // 0x3714c4: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3714C8u;
        goto label_3714c8;
    }
    ctx->pc = 0x3714C0u;
    {
        const bool branch_taken_0x3714c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714C0u;
        // 0x3714c4: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3714c0) {
            ctx->pc = 0x371600u;
            goto label_371600;
        }
    }
    ctx->pc = 0x3714C8u;
label_3714c8:
    // 0x3714c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3714c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3714cc:
    // 0x3714cc: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_3714d0:
    if (ctx->pc == 0x3714D0u) {
        ctx->pc = 0x3714D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714CCu;
        // 0x3714d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3714D4u;
        goto label_3714d4;
    }
    ctx->pc = 0x3714CCu;
    {
        const bool branch_taken_0x3714cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714CCu;
        // 0x3714d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3714cc) {
            ctx->pc = 0x3715BCu;
            goto label_3715bc;
        }
    }
    ctx->pc = 0x3714D4u;
label_3714d4:
    // 0x3714d4: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x3714d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_3714d8:
    // 0x3714d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3714d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3714dc:
    // 0x3714dc: 0x10000044  b           . + 4 + (0x44 << 2)
label_3714e0:
    if (ctx->pc == 0x3714E0u) {
        ctx->pc = 0x3714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714DCu;
        // 0x3714e0: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3714E4u;
        goto label_3714e4;
    }
    ctx->pc = 0x3714DCu;
    {
        const bool branch_taken_0x3714dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714DCu;
        // 0x3714e0: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3714dc) {
            ctx->pc = 0x3715F0u;
            goto label_3715f0;
        }
    }
    ctx->pc = 0x3714E4u;
label_3714e4:
    // 0x3714e4: 0x0  nop
    ctx->pc = 0x3714e4u;
    // NOP
label_3714e8:
    // 0x3714e8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x3714e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_3714ec:
    // 0x3714ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3714ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3714f0:
    // 0x3714f0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3714f4:
    if (ctx->pc == 0x3714F4u) {
        ctx->pc = 0x3714F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714F0u;
        // 0x3714f4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3714F8u;
        goto label_3714f8;
    }
    ctx->pc = 0x3714F0u;
    {
        const bool branch_taken_0x3714f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714F0u;
        // 0x3714f4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3714f0) {
            ctx->pc = 0x371568u;
            goto label_371568;
        }
    }
    ctx->pc = 0x3714F8u;
label_3714f8:
    // 0x3714f8: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x3714f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3714fc:
    // 0x3714fc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x3714fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_371500:
    // 0x371500: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x371500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_371504:
    // 0x371504: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x371504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_371508:
    // 0x371508: 0xc0dc206  jal         func_370818
label_37150c:
    if (ctx->pc == 0x37150Cu) {
        ctx->pc = 0x37150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371508u;
        // 0x37150c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371510u;
        goto label_371510;
    }
    ctx->pc = 0x371508u;
    SET_GPR_U32(ctx, 31, 0x371510u);
    ctx->pc = 0x37150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371508u;
    // 0x37150c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370818u, 0x371508u, 0x371510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371510u;
label_371510:
    // 0x371510: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x371510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371514:
    // 0x371514: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x371514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_371518:
    // 0x371518: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_37151c:
    if (ctx->pc == 0x37151Cu) {
        ctx->pc = 0x37151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371518u;
        // 0x37151c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371520u;
        goto label_371520;
    }
    ctx->pc = 0x371518u;
    {
        const bool branch_taken_0x371518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371518u;
        // 0x37151c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371518) {
            ctx->pc = 0x37152Cu;
            goto label_37152c;
        }
    }
    ctx->pc = 0x371520u;
label_371520:
    // 0x371520: 0xc0ddfae  jal         func_377EB8
label_371524:
    if (ctx->pc == 0x371524u) {
        ctx->pc = 0x371524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371520u;
        // 0x371524: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371528u;
        goto label_371528;
    }
    ctx->pc = 0x371520u;
    SET_GPR_U32(ctx, 31, 0x371528u);
    ctx->pc = 0x371524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371520u;
    // 0x371524: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x371520u, 0x371528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371528u;
label_371528:
    // 0x371528: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x371528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37152c:
    // 0x37152c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x37152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_371530:
    // 0x371530: 0x40f809  jalr        $v0
label_371534:
    if (ctx->pc == 0x371534u) {
        ctx->pc = 0x371534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371530u;
        // 0x371534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371538u;
        goto label_371538;
    }
    ctx->pc = 0x371530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x371538u);
        ctx->pc = 0x371534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371530u;
        // 0x371534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371530u, 0x371538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x371538u;
label_371538:
    // 0x371538: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x371538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_37153c:
    // 0x37153c: 0xc0de028  jal         func_3780A0
label_371540:
    if (ctx->pc == 0x371540u) {
        ctx->pc = 0x371540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37153Cu;
        // 0x371540: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371544u;
        goto label_371544;
    }
    ctx->pc = 0x37153Cu;
    SET_GPR_U32(ctx, 31, 0x371544u);
    ctx->pc = 0x371540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37153Cu;
    // 0x371540: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780A0u, 0x37153Cu, 0x371544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371544u;
label_371544:
    // 0x371544: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x371544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_371548:
    // 0x371548: 0x5060ffe7  beql        $v1, $zero, . + 4 + (-0x19 << 2)
label_37154c:
    if (ctx->pc == 0x37154Cu) {
        ctx->pc = 0x37154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371548u;
        // 0x37154c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371550u;
        goto label_371550;
    }
    ctx->pc = 0x371548u;
    {
        const bool branch_taken_0x371548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x371548) {
            ctx->pc = 0x37154Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371548u;
            // 0x37154c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3714E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3714e8;
        }
    }
    ctx->pc = 0x371550u;
label_371550:
    // 0x371550: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x371550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_371554:
    // 0x371554: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x371554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_371558:
    // 0x371558: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x371558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37155c:
    // 0x37155c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x37155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_371560:
    // 0x371560: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x371560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_371564:
    // 0x371564: 0x0  nop
    ctx->pc = 0x371564u;
    // NOP
label_371568:
    // 0x371568: 0xc0de028  jal         func_3780A0
label_37156c:
    if (ctx->pc == 0x37156Cu) {
        ctx->pc = 0x37156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371568u;
        // 0x37156c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371570u;
        goto label_371570;
    }
    ctx->pc = 0x371568u;
    SET_GPR_U32(ctx, 31, 0x371570u);
    ctx->pc = 0x37156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371568u;
    // 0x37156c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780A0u, 0x371568u, 0x371570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371570u;
label_371570:
    // 0x371570: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x371570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_371574:
    // 0x371574: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_371578:
    if (ctx->pc == 0x371578u) {
        ctx->pc = 0x371578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371574u;
        // 0x371578: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37157Cu;
        goto label_37157c;
    }
    ctx->pc = 0x371574u;
    {
        const bool branch_taken_0x371574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x371578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371574u;
        // 0x371578: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371574) {
            ctx->pc = 0x3715DCu;
            goto label_3715dc;
        }
    }
    ctx->pc = 0x37157Cu;
label_37157c:
    // 0x37157c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x37157cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_371580:
    // 0x371580: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x371580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_371584:
    // 0x371584: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x371584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_371588:
    // 0x371588: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x371588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37158c:
    // 0x37158c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x37158cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371590:
    // 0x371590: 0x26aa0001  addiu       $t2, $s5, 0x1
    ctx->pc = 0x371590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_371594:
    // 0x371594: 0xc0dc4ac  jal         func_3712B0
label_371598:
    if (ctx->pc == 0x371598u) {
        ctx->pc = 0x371598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371594u;
        // 0x371598: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37159Cu;
        goto label_37159c;
    }
    ctx->pc = 0x371594u;
    SET_GPR_U32(ctx, 31, 0x37159Cu);
    ctx->pc = 0x371598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371594u;
    // 0x371598: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3712B0u;
    goto label_3712b0;
    ctx->pc = 0x37159Cu;
label_37159c:
    // 0x37159c: 0x10000018  b           . + 4 + (0x18 << 2)
label_3715a0:
    if (ctx->pc == 0x3715A0u) {
        ctx->pc = 0x3715A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37159Cu;
        // 0x3715a0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3715A4u;
        goto label_3715a4;
    }
    ctx->pc = 0x37159Cu;
    {
        const bool branch_taken_0x37159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3715A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37159Cu;
        // 0x3715a0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37159c) {
            ctx->pc = 0x371600u;
            goto label_371600;
        }
    }
    ctx->pc = 0x3715A4u;
label_3715a4:
    // 0x3715a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3715a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3715a8:
    // 0x3715a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3715a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3715ac:
    // 0x3715ac: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x3715acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_3715b0:
    // 0x3715b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3715b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3715b4:
    // 0x3715b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3715b8:
    if (ctx->pc == 0x3715B8u) {
        ctx->pc = 0x3715B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715B4u;
        // 0x3715b8: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3715BCu;
        goto label_3715bc;
    }
    ctx->pc = 0x3715B4u;
    {
        const bool branch_taken_0x3715b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3715B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715B4u;
        // 0x3715b8: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3715b4) {
            ctx->pc = 0x3715FCu;
            goto label_3715fc;
        }
    }
    ctx->pc = 0x3715BCu;
label_3715bc:
    // 0x3715bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3715bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3715c0:
    // 0x3715c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3715c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3715c4:
    // 0x3715c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3715c8:
    if (ctx->pc == 0x3715C8u) {
        ctx->pc = 0x3715C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715C4u;
        // 0x3715c8: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3715CCu;
        goto label_3715cc;
    }
    ctx->pc = 0x3715C4u;
    {
        const bool branch_taken_0x3715c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3715C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715C4u;
        // 0x3715c8: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3715c4) {
            ctx->pc = 0x3715D0u;
            goto label_3715d0;
        }
    }
    ctx->pc = 0x3715CCu;
label_3715cc:
    // 0x3715cc: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x3715ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_3715d0:
    // 0x3715d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3715d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3715d4:
    // 0x3715d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3715d8:
    if (ctx->pc == 0x3715D8u) {
        ctx->pc = 0x3715D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715D4u;
        // 0x3715d8: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3715DCu;
        goto label_3715dc;
    }
    ctx->pc = 0x3715D4u;
    {
        const bool branch_taken_0x3715d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3715D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715D4u;
        // 0x3715d8: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3715d4) {
            ctx->pc = 0x3715FCu;
            goto label_3715fc;
        }
    }
    ctx->pc = 0x3715DCu;
label_3715dc:
    // 0x3715dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3715dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3715e0:
    // 0x3715e0: 0x5060fffa  beql        $v1, $zero, . + 4 + (-0x6 << 2)
label_3715e4:
    if (ctx->pc == 0x3715E4u) {
        ctx->pc = 0x3715E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715E0u;
        // 0x3715e4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3715E8u;
        goto label_3715e8;
    }
    ctx->pc = 0x3715E0u;
    {
        const bool branch_taken_0x3715e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3715e0) {
            ctx->pc = 0x3715E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3715E0u;
            // 0x3715e4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3715CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3715cc;
        }
    }
    ctx->pc = 0x3715E8u;
label_3715e8:
    // 0x3715e8: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x3715e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_3715ec:
    // 0x3715ec: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x3715ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_3715f0:
    // 0x3715f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3715f4:
    // 0x3715f4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x3715f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_3715f8:
    // 0x3715f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3715f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3715fc:
    // 0x3715fc: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x3715fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_371600:
    // 0x371600: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x371600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_371604:
    // 0x371604: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x371604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_371608:
    // 0x371608: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x371608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_37160c:
    // 0x37160c: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x37160cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_371610:
    // 0x371610: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x371610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_371614:
    // 0x371614: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x371614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_371618:
    // 0x371618: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x371618u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_37161c:
    // 0x37161c: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x37161cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_371620:
    // 0x371620: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x371620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_371624:
    // 0x371624: 0x3e00008  jr          $ra
label_371628:
    if (ctx->pc == 0x371628u) {
        ctx->pc = 0x371628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371624u;
        // 0x371628: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37162Cu;
        goto label_37162c;
    }
    ctx->pc = 0x371624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371624u;
        // 0x371628: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37162Cu;
label_37162c:
    // 0x37162c: 0x0  nop
    ctx->pc = 0x37162cu;
    // NOP
    ctx->pc = 0x371630u;
}
