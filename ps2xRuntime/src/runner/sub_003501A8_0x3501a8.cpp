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

// Function: sub_003501A8
// Address: 0x3501a8 - 0x350580
void sub_003501A8_0x3501a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003501A8_0x3501a8");
#endif

    switch (ctx->pc) {
        case 0x3501a8u: goto label_3501a8;
        case 0x3501acu: goto label_3501ac;
        case 0x3501b0u: goto label_3501b0;
        case 0x3501b4u: goto label_3501b4;
        case 0x3501b8u: goto label_3501b8;
        case 0x3501bcu: goto label_3501bc;
        case 0x3501c0u: goto label_3501c0;
        case 0x3501c4u: goto label_3501c4;
        case 0x3501c8u: goto label_3501c8;
        case 0x3501ccu: goto label_3501cc;
        case 0x3501d0u: goto label_3501d0;
        case 0x3501d4u: goto label_3501d4;
        case 0x3501d8u: goto label_3501d8;
        case 0x3501dcu: goto label_3501dc;
        case 0x3501e0u: goto label_3501e0;
        case 0x3501e4u: goto label_3501e4;
        case 0x3501e8u: goto label_3501e8;
        case 0x3501ecu: goto label_3501ec;
        case 0x3501f0u: goto label_3501f0;
        case 0x3501f4u: goto label_3501f4;
        case 0x3501f8u: goto label_3501f8;
        case 0x3501fcu: goto label_3501fc;
        case 0x350200u: goto label_350200;
        case 0x350204u: goto label_350204;
        case 0x350208u: goto label_350208;
        case 0x35020cu: goto label_35020c;
        case 0x350210u: goto label_350210;
        case 0x350214u: goto label_350214;
        case 0x350218u: goto label_350218;
        case 0x35021cu: goto label_35021c;
        case 0x350220u: goto label_350220;
        case 0x350224u: goto label_350224;
        case 0x350228u: goto label_350228;
        case 0x35022cu: goto label_35022c;
        case 0x350230u: goto label_350230;
        case 0x350234u: goto label_350234;
        case 0x350238u: goto label_350238;
        case 0x35023cu: goto label_35023c;
        case 0x350240u: goto label_350240;
        case 0x350244u: goto label_350244;
        case 0x350248u: goto label_350248;
        case 0x35024cu: goto label_35024c;
        case 0x350250u: goto label_350250;
        case 0x350254u: goto label_350254;
        case 0x350258u: goto label_350258;
        case 0x35025cu: goto label_35025c;
        case 0x350260u: goto label_350260;
        case 0x350264u: goto label_350264;
        case 0x350268u: goto label_350268;
        case 0x35026cu: goto label_35026c;
        case 0x350270u: goto label_350270;
        case 0x350274u: goto label_350274;
        case 0x350278u: goto label_350278;
        case 0x35027cu: goto label_35027c;
        case 0x350280u: goto label_350280;
        case 0x350284u: goto label_350284;
        case 0x350288u: goto label_350288;
        case 0x35028cu: goto label_35028c;
        case 0x350290u: goto label_350290;
        case 0x350294u: goto label_350294;
        case 0x350298u: goto label_350298;
        case 0x35029cu: goto label_35029c;
        case 0x3502a0u: goto label_3502a0;
        case 0x3502a4u: goto label_3502a4;
        case 0x3502a8u: goto label_3502a8;
        case 0x3502acu: goto label_3502ac;
        case 0x3502b0u: goto label_3502b0;
        case 0x3502b4u: goto label_3502b4;
        case 0x3502b8u: goto label_3502b8;
        case 0x3502bcu: goto label_3502bc;
        case 0x3502c0u: goto label_3502c0;
        case 0x3502c4u: goto label_3502c4;
        case 0x3502c8u: goto label_3502c8;
        case 0x3502ccu: goto label_3502cc;
        case 0x3502d0u: goto label_3502d0;
        case 0x3502d4u: goto label_3502d4;
        case 0x3502d8u: goto label_3502d8;
        case 0x3502dcu: goto label_3502dc;
        case 0x3502e0u: goto label_3502e0;
        case 0x3502e4u: goto label_3502e4;
        case 0x3502e8u: goto label_3502e8;
        case 0x3502ecu: goto label_3502ec;
        case 0x3502f0u: goto label_3502f0;
        case 0x3502f4u: goto label_3502f4;
        case 0x3502f8u: goto label_3502f8;
        case 0x3502fcu: goto label_3502fc;
        case 0x350300u: goto label_350300;
        case 0x350304u: goto label_350304;
        case 0x350308u: goto label_350308;
        case 0x35030cu: goto label_35030c;
        case 0x350310u: goto label_350310;
        case 0x350314u: goto label_350314;
        case 0x350318u: goto label_350318;
        case 0x35031cu: goto label_35031c;
        case 0x350320u: goto label_350320;
        case 0x350324u: goto label_350324;
        case 0x350328u: goto label_350328;
        case 0x35032cu: goto label_35032c;
        case 0x350330u: goto label_350330;
        case 0x350334u: goto label_350334;
        case 0x350338u: goto label_350338;
        case 0x35033cu: goto label_35033c;
        case 0x350340u: goto label_350340;
        case 0x350344u: goto label_350344;
        case 0x350348u: goto label_350348;
        case 0x35034cu: goto label_35034c;
        case 0x350350u: goto label_350350;
        case 0x350354u: goto label_350354;
        case 0x350358u: goto label_350358;
        case 0x35035cu: goto label_35035c;
        case 0x350360u: goto label_350360;
        case 0x350364u: goto label_350364;
        case 0x350368u: goto label_350368;
        case 0x35036cu: goto label_35036c;
        case 0x350370u: goto label_350370;
        case 0x350374u: goto label_350374;
        case 0x350378u: goto label_350378;
        case 0x35037cu: goto label_35037c;
        case 0x350380u: goto label_350380;
        case 0x350384u: goto label_350384;
        case 0x350388u: goto label_350388;
        case 0x35038cu: goto label_35038c;
        case 0x350390u: goto label_350390;
        case 0x350394u: goto label_350394;
        case 0x350398u: goto label_350398;
        case 0x35039cu: goto label_35039c;
        case 0x3503a0u: goto label_3503a0;
        case 0x3503a4u: goto label_3503a4;
        case 0x3503a8u: goto label_3503a8;
        case 0x3503acu: goto label_3503ac;
        case 0x3503b0u: goto label_3503b0;
        case 0x3503b4u: goto label_3503b4;
        case 0x3503b8u: goto label_3503b8;
        case 0x3503bcu: goto label_3503bc;
        case 0x3503c0u: goto label_3503c0;
        case 0x3503c4u: goto label_3503c4;
        case 0x3503c8u: goto label_3503c8;
        case 0x3503ccu: goto label_3503cc;
        case 0x3503d0u: goto label_3503d0;
        case 0x3503d4u: goto label_3503d4;
        case 0x3503d8u: goto label_3503d8;
        case 0x3503dcu: goto label_3503dc;
        case 0x3503e0u: goto label_3503e0;
        case 0x3503e4u: goto label_3503e4;
        case 0x3503e8u: goto label_3503e8;
        case 0x3503ecu: goto label_3503ec;
        case 0x3503f0u: goto label_3503f0;
        case 0x3503f4u: goto label_3503f4;
        case 0x3503f8u: goto label_3503f8;
        case 0x3503fcu: goto label_3503fc;
        case 0x350400u: goto label_350400;
        case 0x350404u: goto label_350404;
        case 0x350408u: goto label_350408;
        case 0x35040cu: goto label_35040c;
        case 0x350410u: goto label_350410;
        case 0x350414u: goto label_350414;
        case 0x350418u: goto label_350418;
        case 0x35041cu: goto label_35041c;
        case 0x350420u: goto label_350420;
        case 0x350424u: goto label_350424;
        case 0x350428u: goto label_350428;
        case 0x35042cu: goto label_35042c;
        case 0x350430u: goto label_350430;
        case 0x350434u: goto label_350434;
        case 0x350438u: goto label_350438;
        case 0x35043cu: goto label_35043c;
        case 0x350440u: goto label_350440;
        case 0x350444u: goto label_350444;
        case 0x350448u: goto label_350448;
        case 0x35044cu: goto label_35044c;
        case 0x350450u: goto label_350450;
        case 0x350454u: goto label_350454;
        case 0x350458u: goto label_350458;
        case 0x35045cu: goto label_35045c;
        case 0x350460u: goto label_350460;
        case 0x350464u: goto label_350464;
        case 0x350468u: goto label_350468;
        case 0x35046cu: goto label_35046c;
        case 0x350470u: goto label_350470;
        case 0x350474u: goto label_350474;
        case 0x350478u: goto label_350478;
        case 0x35047cu: goto label_35047c;
        case 0x350480u: goto label_350480;
        case 0x350484u: goto label_350484;
        case 0x350488u: goto label_350488;
        case 0x35048cu: goto label_35048c;
        case 0x350490u: goto label_350490;
        case 0x350494u: goto label_350494;
        case 0x350498u: goto label_350498;
        case 0x35049cu: goto label_35049c;
        case 0x3504a0u: goto label_3504a0;
        case 0x3504a4u: goto label_3504a4;
        case 0x3504a8u: goto label_3504a8;
        case 0x3504acu: goto label_3504ac;
        case 0x3504b0u: goto label_3504b0;
        case 0x3504b4u: goto label_3504b4;
        case 0x3504b8u: goto label_3504b8;
        case 0x3504bcu: goto label_3504bc;
        case 0x3504c0u: goto label_3504c0;
        case 0x3504c4u: goto label_3504c4;
        case 0x3504c8u: goto label_3504c8;
        case 0x3504ccu: goto label_3504cc;
        case 0x3504d0u: goto label_3504d0;
        case 0x3504d4u: goto label_3504d4;
        case 0x3504d8u: goto label_3504d8;
        case 0x3504dcu: goto label_3504dc;
        case 0x3504e0u: goto label_3504e0;
        case 0x3504e4u: goto label_3504e4;
        case 0x3504e8u: goto label_3504e8;
        case 0x3504ecu: goto label_3504ec;
        case 0x3504f0u: goto label_3504f0;
        case 0x3504f4u: goto label_3504f4;
        case 0x3504f8u: goto label_3504f8;
        case 0x3504fcu: goto label_3504fc;
        case 0x350500u: goto label_350500;
        case 0x350504u: goto label_350504;
        case 0x350508u: goto label_350508;
        case 0x35050cu: goto label_35050c;
        case 0x350510u: goto label_350510;
        case 0x350514u: goto label_350514;
        case 0x350518u: goto label_350518;
        case 0x35051cu: goto label_35051c;
        case 0x350520u: goto label_350520;
        case 0x350524u: goto label_350524;
        case 0x350528u: goto label_350528;
        case 0x35052cu: goto label_35052c;
        case 0x350530u: goto label_350530;
        case 0x350534u: goto label_350534;
        case 0x350538u: goto label_350538;
        case 0x35053cu: goto label_35053c;
        case 0x350540u: goto label_350540;
        case 0x350544u: goto label_350544;
        case 0x350548u: goto label_350548;
        case 0x35054cu: goto label_35054c;
        case 0x350550u: goto label_350550;
        case 0x350554u: goto label_350554;
        case 0x350558u: goto label_350558;
        case 0x35055cu: goto label_35055c;
        case 0x350560u: goto label_350560;
        case 0x350564u: goto label_350564;
        case 0x350568u: goto label_350568;
        case 0x35056cu: goto label_35056c;
        case 0x350570u: goto label_350570;
        case 0x350574u: goto label_350574;
        case 0x350578u: goto label_350578;
        case 0x35057cu: goto label_35057c;
        default: break;
    }

    ctx->pc = 0x3501a8u;

label_3501a8:
    // 0x3501a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3501a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3501ac:
    // 0x3501ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3501acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3501b0:
    // 0x3501b0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3501b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3501b4:
    // 0x3501b4: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x3501b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_3501b8:
    // 0x3501b8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3501b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3501bc:
    // 0x3501bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3501bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3501c0:
    // 0x3501c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3501c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3501c4:
    // 0x3501c4: 0x55203  sra         $t2, $a1, 8
    ctx->pc = 0x3501c4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 8));
label_3501c8:
    // 0x3501c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3501c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3501cc:
    // 0x3501cc: 0x588c3  sra         $s1, $a1, 3
    ctx->pc = 0x3501ccu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 3));
label_3501d0:
    // 0x3501d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3501d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3501d4:
    // 0x3501d4: 0x59883  sra         $s3, $a1, 2
    ctx->pc = 0x3501d4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 2));
label_3501d8:
    // 0x3501d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3501d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3501dc:
    // 0x3501dc: 0x5a043  sra         $s4, $a1, 1
    ctx->pc = 0x3501dcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 1));
label_3501e0:
    // 0x3501e0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3501e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3501e4:
    // 0x3501e4: 0x59103  sra         $s2, $a1, 4
    ctx->pc = 0x3501e4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 4));
label_3501e8:
    // 0x3501e8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3501e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3501ec:
    // 0x3501ec: 0x5a983  sra         $s5, $a1, 6
    ctx->pc = 0x3501ecu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 6));
label_3501f0:
    // 0x3501f0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3501f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3501f4:
    // 0x3501f4: 0x5b943  sra         $s7, $a1, 5
    ctx->pc = 0x3501f4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 5), 5));
label_3501f8:
    // 0x3501f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3501f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3501fc:
    // 0x3501fc: 0x5f1c3  sra         $fp, $a1, 7
    ctx->pc = 0x3501fcu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 7));
label_350200:
    // 0x350200: 0x30b60001  andi        $s6, $a1, 0x1
    ctx->pc = 0x350200u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_350204:
    // 0x350204: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x350204u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_350208:
    // 0x350208: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x350208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_35020c:
    // 0x35020c: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x35020cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_350210:
    // 0x350210: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x350210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_350214:
    // 0x350214: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x350214u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_350218:
    // 0x350218: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x350218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_35021c:
    // 0x35021c: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x35021cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_350220:
    // 0x350220: 0x32f70001  andi        $s7, $s7, 0x1
    ctx->pc = 0x350220u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_350224:
    // 0x350224: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x350224u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_350228:
    // 0x350228: 0x33de0001  andi        $fp, $fp, 0x1
    ctx->pc = 0x350228u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_35022c:
    // 0x35022c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x35022cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_350230:
    // 0x350230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x350230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350234:
    // 0x350234: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x350234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_350238:
    // 0x350238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35023c:
    // 0x35023c: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
label_350240:
    if (ctx->pc == 0x350240u) {
        ctx->pc = 0x350240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35023Cu;
        // 0x350240: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350244u;
        goto label_350244;
    }
    ctx->pc = 0x35023Cu;
    {
        const bool branch_taken_0x35023c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x350240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35023Cu;
        // 0x350240: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35023c) {
            ctx->pc = 0x35025Cu;
            goto label_35025c;
        }
    }
    ctx->pc = 0x350244u;
label_350244:
    // 0x350244: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x350244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_350248:
    // 0x350248: 0xae1600a0  sw          $s6, 0xA0($s0)
    ctx->pc = 0x350248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 22));
label_35024c:
    // 0x35024c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x35024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_350250:
    // 0x350250: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x350250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_350254:
    // 0x350254: 0x8c66b950  lw          $a2, -0x46B0($v1)
    ctx->pc = 0x350254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949200)));
label_350258:
    // 0x350258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35025c:
    // 0x35025c: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_350260:
    if (ctx->pc == 0x350260u) {
        ctx->pc = 0x350260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35025Cu;
        // 0x350260: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350264u;
        goto label_350264;
    }
    ctx->pc = 0x35025Cu;
    {
        const bool branch_taken_0x35025c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x350260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35025Cu;
        // 0x350260: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35025c) {
            ctx->pc = 0x350288u;
            goto label_350288;
        }
    }
    ctx->pc = 0x350264u;
label_350264:
    // 0x350264: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x350264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_350268:
    // 0x350268: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x350268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_35026c:
    // 0x35026c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_350270:
    // 0x350270: 0x8c85b954  lw          $a1, -0x46AC($a0)
    ctx->pc = 0x350270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949204)));
label_350274:
    // 0x350274: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x350274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_350278:
    // 0x350278: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x350278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_35027c:
    // 0x35027c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x35027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_350280:
    // 0x350280: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x350280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_350284:
    // 0x350284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350288:
    // 0x350288: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
label_35028c:
    if (ctx->pc == 0x35028Cu) {
        ctx->pc = 0x35028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350288u;
        // 0x35028c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350290u;
        goto label_350290;
    }
    ctx->pc = 0x350288u;
    {
        const bool branch_taken_0x350288 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x35028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350288u;
        // 0x35028c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350288) {
            ctx->pc = 0x3502B8u;
            goto label_3502b8;
        }
    }
    ctx->pc = 0x350290u;
label_350290:
    // 0x350290: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x350290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_350294:
    // 0x350294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x350294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_350298:
    // 0x350298: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x350298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_35029c:
    // 0x35029c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3502a0:
    // 0x3502a0: 0x8c85b958  lw          $a1, -0x46A8($a0)
    ctx->pc = 0x3502a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949208)));
label_3502a4:
    // 0x3502a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3502a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3502a8:
    // 0x3502a8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x3502a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_3502ac:
    // 0x3502ac: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x3502acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_3502b0:
    // 0x3502b0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x3502b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3502b4:
    // 0x3502b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3502b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3502b8:
    // 0x3502b8: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
label_3502bc:
    if (ctx->pc == 0x3502BCu) {
        ctx->pc = 0x3502BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502B8u;
        // 0x3502bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3502C0u;
        goto label_3502c0;
    }
    ctx->pc = 0x3502B8u;
    {
        const bool branch_taken_0x3502b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3502BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502B8u;
        // 0x3502bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3502b8) {
            ctx->pc = 0x3502E8u;
            goto label_3502e8;
        }
    }
    ctx->pc = 0x3502C0u;
label_3502c0:
    // 0x3502c0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3502c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3502c4:
    // 0x3502c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3502c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_3502c8:
    // 0x3502c8: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x3502c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_3502cc:
    // 0x3502cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3502ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3502d0:
    // 0x3502d0: 0x8c85b95c  lw          $a1, -0x46A4($a0)
    ctx->pc = 0x3502d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949212)));
label_3502d4:
    // 0x3502d4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3502d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3502d8:
    // 0x3502d8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x3502d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_3502dc:
    // 0x3502dc: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x3502dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_3502e0:
    // 0x3502e0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x3502e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3502e4:
    // 0x3502e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3502e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3502e8:
    // 0x3502e8: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
label_3502ec:
    if (ctx->pc == 0x3502ECu) {
        ctx->pc = 0x3502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502E8u;
        // 0x3502ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3502F0u;
        goto label_3502f0;
    }
    ctx->pc = 0x3502E8u;
    {
        const bool branch_taken_0x3502e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502E8u;
        // 0x3502ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3502e8) {
            ctx->pc = 0x350318u;
            goto label_350318;
        }
    }
    ctx->pc = 0x3502F0u;
label_3502f0:
    // 0x3502f0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3502f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3502f4:
    // 0x3502f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3502f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_3502f8:
    // 0x3502f8: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x3502f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_3502fc:
    // 0x3502fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3502fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_350300:
    // 0x350300: 0x8c85b960  lw          $a1, -0x46A0($a0)
    ctx->pc = 0x350300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949216)));
label_350304:
    // 0x350304: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x350304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_350308:
    // 0x350308: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x350308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_35030c:
    // 0x35030c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x35030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_350310:
    // 0x350310: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x350310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_350314:
    // 0x350314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350318:
    // 0x350318: 0x16a2000b  bne         $s5, $v0, . + 4 + (0xB << 2)
label_35031c:
    if (ctx->pc == 0x35031Cu) {
        ctx->pc = 0x35031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350318u;
        // 0x35031c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350320u;
        goto label_350320;
    }
    ctx->pc = 0x350318u;
    {
        const bool branch_taken_0x350318 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x35031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350318u;
        // 0x35031c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350318) {
            ctx->pc = 0x350348u;
            goto label_350348;
        }
    }
    ctx->pc = 0x350320u;
label_350320:
    // 0x350320: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x350320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_350324:
    // 0x350324: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x350324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_350328:
    // 0x350328: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_35032c:
    // 0x35032c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_350330:
    // 0x350330: 0x8c85b964  lw          $a1, -0x469C($a0)
    ctx->pc = 0x350330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949220)));
label_350334:
    // 0x350334: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x350334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_350338:
    // 0x350338: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x350338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_35033c:
    // 0x35033c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x35033cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_350340:
    // 0x350340: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x350340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_350344:
    // 0x350344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350348:
    // 0x350348: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
label_35034c:
    if (ctx->pc == 0x35034Cu) {
        ctx->pc = 0x35034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350348u;
        // 0x35034c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350350u;
        goto label_350350;
    }
    ctx->pc = 0x350348u;
    {
        const bool branch_taken_0x350348 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x35034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350348u;
        // 0x35034c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350348) {
            ctx->pc = 0x350378u;
            goto label_350378;
        }
    }
    ctx->pc = 0x350350u;
label_350350:
    // 0x350350: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x350350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_350354:
    // 0x350354: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x350354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_350358:
    // 0x350358: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x350358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_35035c:
    // 0x35035c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_350360:
    // 0x350360: 0x8c85b968  lw          $a1, -0x4698($a0)
    ctx->pc = 0x350360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949224)));
label_350364:
    // 0x350364: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x350364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_350368:
    // 0x350368: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x350368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_35036c:
    // 0x35036c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x35036cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_350370:
    // 0x350370: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x350370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_350374:
    // 0x350374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350378:
    // 0x350378: 0x17c2000b  bne         $fp, $v0, . + 4 + (0xB << 2)
label_35037c:
    if (ctx->pc == 0x35037Cu) {
        ctx->pc = 0x35037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350378u;
        // 0x35037c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350380u;
        goto label_350380;
    }
    ctx->pc = 0x350378u;
    {
        const bool branch_taken_0x350378 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x35037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350378u;
        // 0x35037c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350378) {
            ctx->pc = 0x3503A8u;
            goto label_3503a8;
        }
    }
    ctx->pc = 0x350380u;
label_350380:
    // 0x350380: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x350380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_350384:
    // 0x350384: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x350384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_350388:
    // 0x350388: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x350388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_35038c:
    // 0x35038c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_350390:
    // 0x350390: 0x8c85b96c  lw          $a1, -0x4694($a0)
    ctx->pc = 0x350390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949228)));
label_350394:
    // 0x350394: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x350394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_350398:
    // 0x350398: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x350398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_35039c:
    // 0x35039c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x35039cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_3503a0:
    // 0x3503a0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x3503a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3503a4:
    // 0x3503a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3503a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3503a8:
    // 0x3503a8: 0x15420009  bne         $t2, $v0, . + 4 + (0x9 << 2)
label_3503ac:
    if (ctx->pc == 0x3503ACu) {
        ctx->pc = 0x3503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503A8u;
        // 0x3503ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3503B0u;
        goto label_3503b0;
    }
    ctx->pc = 0x3503A8u;
    {
        const bool branch_taken_0x3503a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x3503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503A8u;
        // 0x3503ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503a8) {
            ctx->pc = 0x3503D0u;
            goto label_3503d0;
        }
    }
    ctx->pc = 0x3503B0u;
label_3503b0:
    // 0x3503b0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3503b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3503b4:
    // 0x3503b4: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x3503b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_3503b8:
    // 0x3503b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3503b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3503bc:
    // 0x3503bc: 0x8c85b970  lw          $a1, -0x4690($a0)
    ctx->pc = 0x3503bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949232)));
label_3503c0:
    // 0x3503c0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3503c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3503c4:
    // 0x3503c4: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x3503c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_3503c8:
    // 0x3503c8: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x3503c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_3503cc:
    // 0x3503cc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x3503ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3503d0:
    // 0x3503d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3503d4:
    if (ctx->pc == 0x3503D4u) {
        ctx->pc = 0x3503D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503D0u;
        // 0x3503d4: 0x24c3000f  addiu       $v1, $a2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3503D8u;
        goto label_3503d8;
    }
    ctx->pc = 0x3503D0u;
    {
        const bool branch_taken_0x3503d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3503D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503D0u;
        // 0x3503d4: 0x24c3000f  addiu       $v1, $a2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503d0) {
            ctx->pc = 0x3503E4u;
            goto label_3503e4;
        }
    }
    ctx->pc = 0x3503D8u;
label_3503d8:
    // 0x3503d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3503d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3503dc:
    // 0x3503dc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3503dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_3503e0:
    // 0x3503e0: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x3503e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3503e4:
    // 0x3503e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3503e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3503e8:
    // 0x3503e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3503e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3503ec:
    // 0x3503ec: 0xae0600a4  sw          $a2, 0xA4($s0)
    ctx->pc = 0x3503ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 6));
label_3503f0:
    // 0x3503f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3503f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3503f4:
    // 0x3503f4: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x3503f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3503f8:
    // 0x3503f8: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3503f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3503fc:
    // 0x3503fc: 0x7faa0010  sq          $t2, 0x10($sp)
    ctx->pc = 0x3503fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 10));
label_350400:
    // 0x350400: 0x40f809  jalr        $v0
label_350404:
    if (ctx->pc == 0x350404u) {
        ctx->pc = 0x350404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350400u;
        // 0x350404: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350408u;
        goto label_350408;
    }
    ctx->pc = 0x350400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x350408u);
        ctx->pc = 0x350404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350400u;
        // 0x350404: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350400u, 0x350408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350408u;
label_350408:
    // 0x350408: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x350408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35040c:
    // 0x35040c: 0x1120004e  beqz        $t1, . + 4 + (0x4E << 2)
label_350410:
    if (ctx->pc == 0x350410u) {
        ctx->pc = 0x350410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35040Cu;
        // 0x350410: 0x7baa0010  lq          $t2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350414u;
        goto label_350414;
    }
    ctx->pc = 0x35040Cu;
    {
        const bool branch_taken_0x35040c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x350410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35040Cu;
        // 0x350410: 0x7baa0010  lq          $t2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35040c) {
            ctx->pc = 0x350548u;
            goto label_350548;
        }
    }
    ctx->pc = 0x350414u;
label_350414:
    // 0x350414: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x350414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_350418:
    // 0x350418: 0x2523000f  addiu       $v1, $t1, 0xF
    ctx->pc = 0x350418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_35041c:
    // 0x35041c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x35041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_350420:
    // 0x350420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x350420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350424:
    // 0x350424: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x350424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350428:
    // 0x350428: 0x16c80006  bne         $s6, $t0, . + 4 + (0x6 << 2)
label_35042c:
    if (ctx->pc == 0x35042Cu) {
        ctx->pc = 0x35042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350428u;
        // 0x35042c: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350430u;
        goto label_350430;
    }
    ctx->pc = 0x350428u;
    {
        const bool branch_taken_0x350428 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 8));
        ctx->pc = 0x35042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350428u;
        // 0x35042c: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350428) {
            ctx->pc = 0x350444u;
            goto label_350444;
        }
    }
    ctx->pc = 0x350430u;
label_350430:
    // 0x350430: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x350430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_350434:
    // 0x350434: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x350434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_350438:
    // 0x350438: 0x8c46b950  lw          $a2, -0x46B0($v0)
    ctx->pc = 0x350438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949200)));
label_35043c:
    // 0x35043c: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x35043cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_350440:
    // 0x350440: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x350440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_350444:
    // 0x350444: 0x16280007  bne         $s1, $t0, . + 4 + (0x7 << 2)
label_350448:
    if (ctx->pc == 0x350448u) {
        ctx->pc = 0x350448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350444u;
        // 0x350448: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35044Cu;
        goto label_35044c;
    }
    ctx->pc = 0x350444u;
    {
        const bool branch_taken_0x350444 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 8));
        ctx->pc = 0x350448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350444u;
        // 0x350448: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350444) {
            ctx->pc = 0x350464u;
            goto label_350464;
        }
    }
    ctx->pc = 0x35044Cu;
label_35044c:
    // 0x35044c: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x35044cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_350450:
    // 0x350450: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350454:
    // 0x350454: 0x8c44b954  lw          $a0, -0x46AC($v0)
    ctx->pc = 0x350454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949204)));
label_350458:
    // 0x350458: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x350458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_35045c:
    // 0x35045c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x35045cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_350460:
    // 0x350460: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x350460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_350464:
    // 0x350464: 0x16480007  bne         $s2, $t0, . + 4 + (0x7 << 2)
label_350468:
    if (ctx->pc == 0x350468u) {
        ctx->pc = 0x350468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350464u;
        // 0x350468: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35046Cu;
        goto label_35046c;
    }
    ctx->pc = 0x350464u;
    {
        const bool branch_taken_0x350464 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        ctx->pc = 0x350468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350464u;
        // 0x350468: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350464) {
            ctx->pc = 0x350484u;
            goto label_350484;
        }
    }
    ctx->pc = 0x35046Cu;
label_35046c:
    // 0x35046c: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x35046cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_350470:
    // 0x350470: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350474:
    // 0x350474: 0x8c44b958  lw          $a0, -0x46A8($v0)
    ctx->pc = 0x350474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949208)));
label_350478:
    // 0x350478: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x350478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_35047c:
    // 0x35047c: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x35047cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
label_350480:
    // 0x350480: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x350480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_350484:
    // 0x350484: 0x16680007  bne         $s3, $t0, . + 4 + (0x7 << 2)
label_350488:
    if (ctx->pc == 0x350488u) {
        ctx->pc = 0x350488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350484u;
        // 0x350488: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35048Cu;
        goto label_35048c;
    }
    ctx->pc = 0x350484u;
    {
        const bool branch_taken_0x350484 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 8));
        ctx->pc = 0x350488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350484u;
        // 0x350488: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350484) {
            ctx->pc = 0x3504A4u;
            goto label_3504a4;
        }
    }
    ctx->pc = 0x35048Cu;
label_35048c:
    // 0x35048c: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x35048cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_350490:
    // 0x350490: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350494:
    // 0x350494: 0x8c44b95c  lw          $a0, -0x46A4($v0)
    ctx->pc = 0x350494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949212)));
label_350498:
    // 0x350498: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x350498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_35049c:
    // 0x35049c: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x35049cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_3504a0:
    // 0x3504a0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3504a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3504a4:
    // 0x3504a4: 0x16880007  bne         $s4, $t0, . + 4 + (0x7 << 2)
label_3504a8:
    if (ctx->pc == 0x3504A8u) {
        ctx->pc = 0x3504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504A4u;
        // 0x3504a8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3504ACu;
        goto label_3504ac;
    }
    ctx->pc = 0x3504A4u;
    {
        const bool branch_taken_0x3504a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 8));
        ctx->pc = 0x3504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504A4u;
        // 0x3504a8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504a4) {
            ctx->pc = 0x3504C4u;
            goto label_3504c4;
        }
    }
    ctx->pc = 0x3504ACu;
label_3504ac:
    // 0x3504ac: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x3504acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_3504b0:
    // 0x3504b0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x3504b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3504b4:
    // 0x3504b4: 0x8c44b960  lw          $a0, -0x46A0($v0)
    ctx->pc = 0x3504b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949216)));
label_3504b8:
    // 0x3504b8: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x3504b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_3504bc:
    // 0x3504bc: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x3504bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_3504c0:
    // 0x3504c0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3504c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3504c4:
    // 0x3504c4: 0x16a80007  bne         $s5, $t0, . + 4 + (0x7 << 2)
label_3504c8:
    if (ctx->pc == 0x3504C8u) {
        ctx->pc = 0x3504C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504C4u;
        // 0x3504c8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3504CCu;
        goto label_3504cc;
    }
    ctx->pc = 0x3504C4u;
    {
        const bool branch_taken_0x3504c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 8));
        ctx->pc = 0x3504C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504C4u;
        // 0x3504c8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504c4) {
            ctx->pc = 0x3504E4u;
            goto label_3504e4;
        }
    }
    ctx->pc = 0x3504CCu;
label_3504cc:
    // 0x3504cc: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x3504ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_3504d0:
    // 0x3504d0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x3504d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3504d4:
    // 0x3504d4: 0x8c44b964  lw          $a0, -0x469C($v0)
    ctx->pc = 0x3504d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949220)));
label_3504d8:
    // 0x3504d8: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x3504d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_3504dc:
    // 0x3504dc: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x3504dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
label_3504e0:
    // 0x3504e0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3504e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3504e4:
    // 0x3504e4: 0x16e80007  bne         $s7, $t0, . + 4 + (0x7 << 2)
label_3504e8:
    if (ctx->pc == 0x3504E8u) {
        ctx->pc = 0x3504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504E4u;
        // 0x3504e8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3504ECu;
        goto label_3504ec;
    }
    ctx->pc = 0x3504E4u;
    {
        const bool branch_taken_0x3504e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 8));
        ctx->pc = 0x3504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504E4u;
        // 0x3504e8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504e4) {
            ctx->pc = 0x350504u;
            goto label_350504;
        }
    }
    ctx->pc = 0x3504ECu;
label_3504ec:
    // 0x3504ec: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x3504ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_3504f0:
    // 0x3504f0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x3504f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3504f4:
    // 0x3504f4: 0x8c44b968  lw          $a0, -0x4698($v0)
    ctx->pc = 0x3504f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949224)));
label_3504f8:
    // 0x3504f8: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x3504f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_3504fc:
    // 0x3504fc: 0xae050088  sw          $a1, 0x88($s0)
    ctx->pc = 0x3504fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
label_350500:
    // 0x350500: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x350500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_350504:
    // 0x350504: 0x17c80007  bne         $fp, $t0, . + 4 + (0x7 << 2)
label_350508:
    if (ctx->pc == 0x350508u) {
        ctx->pc = 0x350508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350504u;
        // 0x350508: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35050Cu;
        goto label_35050c;
    }
    ctx->pc = 0x350504u;
    {
        const bool branch_taken_0x350504 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 8));
        ctx->pc = 0x350508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350504u;
        // 0x350508: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350504) {
            ctx->pc = 0x350524u;
            goto label_350524;
        }
    }
    ctx->pc = 0x35050Cu;
label_35050c:
    // 0x35050c: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x35050cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_350510:
    // 0x350510: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350514:
    // 0x350514: 0x8c44b96c  lw          $a0, -0x4694($v0)
    ctx->pc = 0x350514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949228)));
label_350518:
    // 0x350518: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x350518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_35051c:
    // 0x35051c: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x35051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
label_350520:
    // 0x350520: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x350520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_350524:
    // 0x350524: 0x55480006  bnel        $t2, $t0, . + 4 + (0x6 << 2)
label_350528:
    if (ctx->pc == 0x350528u) {
        ctx->pc = 0x350528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350524u;
        // 0x350528: 0xae09000c  sw          $t1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35052Cu;
        goto label_35052c;
    }
    ctx->pc = 0x350524u;
    {
        const bool branch_taken_0x350524 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 8));
        if (branch_taken_0x350524) {
            ctx->pc = 0x350528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350524u;
            // 0x350528: 0xae09000c  sw          $t1, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350540u;
            goto label_350540;
        }
    }
    ctx->pc = 0x35052Cu;
label_35052c:
    // 0x35052c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x35052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_350530:
    // 0x350530: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x350530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350534:
    // 0x350534: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x350534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_350538:
    // 0x350538: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x350538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_35053c:
    // 0x35053c: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x35053cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_350540:
    // 0x350540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350544:
    // 0x350544: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x350544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_350548:
    // 0x350548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x350548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35054c:
    // 0x35054c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x35054cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_350550:
    // 0x350550: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x350550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_350554:
    // 0x350554: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x350554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_350558:
    // 0x350558: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x350558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35055c:
    // 0x35055c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x35055cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_350560:
    // 0x350560: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x350560u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_350564:
    // 0x350564: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x350564u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_350568:
    // 0x350568: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x350568u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35056c:
    // 0x35056c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x35056cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_350570:
    // 0x350570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_350574:
    // 0x350574: 0x3e00008  jr          $ra
label_350578:
    if (ctx->pc == 0x350578u) {
        ctx->pc = 0x350578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350574u;
        // 0x350578: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35057Cu;
        goto label_35057c;
    }
    ctx->pc = 0x350574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350574u;
        // 0x350578: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35057Cu;
label_35057c:
    // 0x35057c: 0x0  nop
    ctx->pc = 0x35057cu;
    // NOP
    ctx->pc = 0x350580u;
}
