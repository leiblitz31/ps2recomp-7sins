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

// Function: sub_004454C8
// Address: 0x4454c8 - 0x445a28
void sub_004454C8_0x4454c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004454C8_0x4454c8");
#endif

    switch (ctx->pc) {
        case 0x4454c8u: goto label_4454c8;
        case 0x4454ccu: goto label_4454cc;
        case 0x4454d0u: goto label_4454d0;
        case 0x4454d4u: goto label_4454d4;
        case 0x4454d8u: goto label_4454d8;
        case 0x4454dcu: goto label_4454dc;
        case 0x4454e0u: goto label_4454e0;
        case 0x4454e4u: goto label_4454e4;
        case 0x4454e8u: goto label_4454e8;
        case 0x4454ecu: goto label_4454ec;
        case 0x4454f0u: goto label_4454f0;
        case 0x4454f4u: goto label_4454f4;
        case 0x4454f8u: goto label_4454f8;
        case 0x4454fcu: goto label_4454fc;
        case 0x445500u: goto label_445500;
        case 0x445504u: goto label_445504;
        case 0x445508u: goto label_445508;
        case 0x44550cu: goto label_44550c;
        case 0x445510u: goto label_445510;
        case 0x445514u: goto label_445514;
        case 0x445518u: goto label_445518;
        case 0x44551cu: goto label_44551c;
        case 0x445520u: goto label_445520;
        case 0x445524u: goto label_445524;
        case 0x445528u: goto label_445528;
        case 0x44552cu: goto label_44552c;
        case 0x445530u: goto label_445530;
        case 0x445534u: goto label_445534;
        case 0x445538u: goto label_445538;
        case 0x44553cu: goto label_44553c;
        case 0x445540u: goto label_445540;
        case 0x445544u: goto label_445544;
        case 0x445548u: goto label_445548;
        case 0x44554cu: goto label_44554c;
        case 0x445550u: goto label_445550;
        case 0x445554u: goto label_445554;
        case 0x445558u: goto label_445558;
        case 0x44555cu: goto label_44555c;
        case 0x445560u: goto label_445560;
        case 0x445564u: goto label_445564;
        case 0x445568u: goto label_445568;
        case 0x44556cu: goto label_44556c;
        case 0x445570u: goto label_445570;
        case 0x445574u: goto label_445574;
        case 0x445578u: goto label_445578;
        case 0x44557cu: goto label_44557c;
        case 0x445580u: goto label_445580;
        case 0x445584u: goto label_445584;
        case 0x445588u: goto label_445588;
        case 0x44558cu: goto label_44558c;
        case 0x445590u: goto label_445590;
        case 0x445594u: goto label_445594;
        case 0x445598u: goto label_445598;
        case 0x44559cu: goto label_44559c;
        case 0x4455a0u: goto label_4455a0;
        case 0x4455a4u: goto label_4455a4;
        case 0x4455a8u: goto label_4455a8;
        case 0x4455acu: goto label_4455ac;
        case 0x4455b0u: goto label_4455b0;
        case 0x4455b4u: goto label_4455b4;
        case 0x4455b8u: goto label_4455b8;
        case 0x4455bcu: goto label_4455bc;
        case 0x4455c0u: goto label_4455c0;
        case 0x4455c4u: goto label_4455c4;
        case 0x4455c8u: goto label_4455c8;
        case 0x4455ccu: goto label_4455cc;
        case 0x4455d0u: goto label_4455d0;
        case 0x4455d4u: goto label_4455d4;
        case 0x4455d8u: goto label_4455d8;
        case 0x4455dcu: goto label_4455dc;
        case 0x4455e0u: goto label_4455e0;
        case 0x4455e4u: goto label_4455e4;
        case 0x4455e8u: goto label_4455e8;
        case 0x4455ecu: goto label_4455ec;
        case 0x4455f0u: goto label_4455f0;
        case 0x4455f4u: goto label_4455f4;
        case 0x4455f8u: goto label_4455f8;
        case 0x4455fcu: goto label_4455fc;
        case 0x445600u: goto label_445600;
        case 0x445604u: goto label_445604;
        case 0x445608u: goto label_445608;
        case 0x44560cu: goto label_44560c;
        case 0x445610u: goto label_445610;
        case 0x445614u: goto label_445614;
        case 0x445618u: goto label_445618;
        case 0x44561cu: goto label_44561c;
        case 0x445620u: goto label_445620;
        case 0x445624u: goto label_445624;
        case 0x445628u: goto label_445628;
        case 0x44562cu: goto label_44562c;
        case 0x445630u: goto label_445630;
        case 0x445634u: goto label_445634;
        case 0x445638u: goto label_445638;
        case 0x44563cu: goto label_44563c;
        case 0x445640u: goto label_445640;
        case 0x445644u: goto label_445644;
        case 0x445648u: goto label_445648;
        case 0x44564cu: goto label_44564c;
        case 0x445650u: goto label_445650;
        case 0x445654u: goto label_445654;
        case 0x445658u: goto label_445658;
        case 0x44565cu: goto label_44565c;
        case 0x445660u: goto label_445660;
        case 0x445664u: goto label_445664;
        case 0x445668u: goto label_445668;
        case 0x44566cu: goto label_44566c;
        case 0x445670u: goto label_445670;
        case 0x445674u: goto label_445674;
        case 0x445678u: goto label_445678;
        case 0x44567cu: goto label_44567c;
        case 0x445680u: goto label_445680;
        case 0x445684u: goto label_445684;
        case 0x445688u: goto label_445688;
        case 0x44568cu: goto label_44568c;
        case 0x445690u: goto label_445690;
        case 0x445694u: goto label_445694;
        case 0x445698u: goto label_445698;
        case 0x44569cu: goto label_44569c;
        case 0x4456a0u: goto label_4456a0;
        case 0x4456a4u: goto label_4456a4;
        case 0x4456a8u: goto label_4456a8;
        case 0x4456acu: goto label_4456ac;
        case 0x4456b0u: goto label_4456b0;
        case 0x4456b4u: goto label_4456b4;
        case 0x4456b8u: goto label_4456b8;
        case 0x4456bcu: goto label_4456bc;
        case 0x4456c0u: goto label_4456c0;
        case 0x4456c4u: goto label_4456c4;
        case 0x4456c8u: goto label_4456c8;
        case 0x4456ccu: goto label_4456cc;
        case 0x4456d0u: goto label_4456d0;
        case 0x4456d4u: goto label_4456d4;
        case 0x4456d8u: goto label_4456d8;
        case 0x4456dcu: goto label_4456dc;
        case 0x4456e0u: goto label_4456e0;
        case 0x4456e4u: goto label_4456e4;
        case 0x4456e8u: goto label_4456e8;
        case 0x4456ecu: goto label_4456ec;
        case 0x4456f0u: goto label_4456f0;
        case 0x4456f4u: goto label_4456f4;
        case 0x4456f8u: goto label_4456f8;
        case 0x4456fcu: goto label_4456fc;
        case 0x445700u: goto label_445700;
        case 0x445704u: goto label_445704;
        case 0x445708u: goto label_445708;
        case 0x44570cu: goto label_44570c;
        case 0x445710u: goto label_445710;
        case 0x445714u: goto label_445714;
        case 0x445718u: goto label_445718;
        case 0x44571cu: goto label_44571c;
        case 0x445720u: goto label_445720;
        case 0x445724u: goto label_445724;
        case 0x445728u: goto label_445728;
        case 0x44572cu: goto label_44572c;
        case 0x445730u: goto label_445730;
        case 0x445734u: goto label_445734;
        case 0x445738u: goto label_445738;
        case 0x44573cu: goto label_44573c;
        case 0x445740u: goto label_445740;
        case 0x445744u: goto label_445744;
        case 0x445748u: goto label_445748;
        case 0x44574cu: goto label_44574c;
        case 0x445750u: goto label_445750;
        case 0x445754u: goto label_445754;
        case 0x445758u: goto label_445758;
        case 0x44575cu: goto label_44575c;
        case 0x445760u: goto label_445760;
        case 0x445764u: goto label_445764;
        case 0x445768u: goto label_445768;
        case 0x44576cu: goto label_44576c;
        case 0x445770u: goto label_445770;
        case 0x445774u: goto label_445774;
        case 0x445778u: goto label_445778;
        case 0x44577cu: goto label_44577c;
        case 0x445780u: goto label_445780;
        case 0x445784u: goto label_445784;
        case 0x445788u: goto label_445788;
        case 0x44578cu: goto label_44578c;
        case 0x445790u: goto label_445790;
        case 0x445794u: goto label_445794;
        case 0x445798u: goto label_445798;
        case 0x44579cu: goto label_44579c;
        case 0x4457a0u: goto label_4457a0;
        case 0x4457a4u: goto label_4457a4;
        case 0x4457a8u: goto label_4457a8;
        case 0x4457acu: goto label_4457ac;
        case 0x4457b0u: goto label_4457b0;
        case 0x4457b4u: goto label_4457b4;
        case 0x4457b8u: goto label_4457b8;
        case 0x4457bcu: goto label_4457bc;
        case 0x4457c0u: goto label_4457c0;
        case 0x4457c4u: goto label_4457c4;
        case 0x4457c8u: goto label_4457c8;
        case 0x4457ccu: goto label_4457cc;
        case 0x4457d0u: goto label_4457d0;
        case 0x4457d4u: goto label_4457d4;
        case 0x4457d8u: goto label_4457d8;
        case 0x4457dcu: goto label_4457dc;
        case 0x4457e0u: goto label_4457e0;
        case 0x4457e4u: goto label_4457e4;
        case 0x4457e8u: goto label_4457e8;
        case 0x4457ecu: goto label_4457ec;
        case 0x4457f0u: goto label_4457f0;
        case 0x4457f4u: goto label_4457f4;
        case 0x4457f8u: goto label_4457f8;
        case 0x4457fcu: goto label_4457fc;
        case 0x445800u: goto label_445800;
        case 0x445804u: goto label_445804;
        case 0x445808u: goto label_445808;
        case 0x44580cu: goto label_44580c;
        case 0x445810u: goto label_445810;
        case 0x445814u: goto label_445814;
        case 0x445818u: goto label_445818;
        case 0x44581cu: goto label_44581c;
        case 0x445820u: goto label_445820;
        case 0x445824u: goto label_445824;
        case 0x445828u: goto label_445828;
        case 0x44582cu: goto label_44582c;
        case 0x445830u: goto label_445830;
        case 0x445834u: goto label_445834;
        case 0x445838u: goto label_445838;
        case 0x44583cu: goto label_44583c;
        case 0x445840u: goto label_445840;
        case 0x445844u: goto label_445844;
        case 0x445848u: goto label_445848;
        case 0x44584cu: goto label_44584c;
        case 0x445850u: goto label_445850;
        case 0x445854u: goto label_445854;
        case 0x445858u: goto label_445858;
        case 0x44585cu: goto label_44585c;
        case 0x445860u: goto label_445860;
        case 0x445864u: goto label_445864;
        case 0x445868u: goto label_445868;
        case 0x44586cu: goto label_44586c;
        case 0x445870u: goto label_445870;
        case 0x445874u: goto label_445874;
        case 0x445878u: goto label_445878;
        case 0x44587cu: goto label_44587c;
        case 0x445880u: goto label_445880;
        case 0x445884u: goto label_445884;
        case 0x445888u: goto label_445888;
        case 0x44588cu: goto label_44588c;
        case 0x445890u: goto label_445890;
        case 0x445894u: goto label_445894;
        case 0x445898u: goto label_445898;
        case 0x44589cu: goto label_44589c;
        case 0x4458a0u: goto label_4458a0;
        case 0x4458a4u: goto label_4458a4;
        case 0x4458a8u: goto label_4458a8;
        case 0x4458acu: goto label_4458ac;
        case 0x4458b0u: goto label_4458b0;
        case 0x4458b4u: goto label_4458b4;
        case 0x4458b8u: goto label_4458b8;
        case 0x4458bcu: goto label_4458bc;
        case 0x4458c0u: goto label_4458c0;
        case 0x4458c4u: goto label_4458c4;
        case 0x4458c8u: goto label_4458c8;
        case 0x4458ccu: goto label_4458cc;
        case 0x4458d0u: goto label_4458d0;
        case 0x4458d4u: goto label_4458d4;
        case 0x4458d8u: goto label_4458d8;
        case 0x4458dcu: goto label_4458dc;
        case 0x4458e0u: goto label_4458e0;
        case 0x4458e4u: goto label_4458e4;
        case 0x4458e8u: goto label_4458e8;
        case 0x4458ecu: goto label_4458ec;
        case 0x4458f0u: goto label_4458f0;
        case 0x4458f4u: goto label_4458f4;
        case 0x4458f8u: goto label_4458f8;
        case 0x4458fcu: goto label_4458fc;
        case 0x445900u: goto label_445900;
        case 0x445904u: goto label_445904;
        case 0x445908u: goto label_445908;
        case 0x44590cu: goto label_44590c;
        case 0x445910u: goto label_445910;
        case 0x445914u: goto label_445914;
        case 0x445918u: goto label_445918;
        case 0x44591cu: goto label_44591c;
        case 0x445920u: goto label_445920;
        case 0x445924u: goto label_445924;
        case 0x445928u: goto label_445928;
        case 0x44592cu: goto label_44592c;
        case 0x445930u: goto label_445930;
        case 0x445934u: goto label_445934;
        case 0x445938u: goto label_445938;
        case 0x44593cu: goto label_44593c;
        case 0x445940u: goto label_445940;
        case 0x445944u: goto label_445944;
        case 0x445948u: goto label_445948;
        case 0x44594cu: goto label_44594c;
        case 0x445950u: goto label_445950;
        case 0x445954u: goto label_445954;
        case 0x445958u: goto label_445958;
        case 0x44595cu: goto label_44595c;
        case 0x445960u: goto label_445960;
        case 0x445964u: goto label_445964;
        case 0x445968u: goto label_445968;
        case 0x44596cu: goto label_44596c;
        case 0x445970u: goto label_445970;
        case 0x445974u: goto label_445974;
        case 0x445978u: goto label_445978;
        case 0x44597cu: goto label_44597c;
        case 0x445980u: goto label_445980;
        case 0x445984u: goto label_445984;
        case 0x445988u: goto label_445988;
        case 0x44598cu: goto label_44598c;
        case 0x445990u: goto label_445990;
        case 0x445994u: goto label_445994;
        case 0x445998u: goto label_445998;
        case 0x44599cu: goto label_44599c;
        case 0x4459a0u: goto label_4459a0;
        case 0x4459a4u: goto label_4459a4;
        case 0x4459a8u: goto label_4459a8;
        case 0x4459acu: goto label_4459ac;
        case 0x4459b0u: goto label_4459b0;
        case 0x4459b4u: goto label_4459b4;
        case 0x4459b8u: goto label_4459b8;
        case 0x4459bcu: goto label_4459bc;
        case 0x4459c0u: goto label_4459c0;
        case 0x4459c4u: goto label_4459c4;
        case 0x4459c8u: goto label_4459c8;
        case 0x4459ccu: goto label_4459cc;
        case 0x4459d0u: goto label_4459d0;
        case 0x4459d4u: goto label_4459d4;
        case 0x4459d8u: goto label_4459d8;
        case 0x4459dcu: goto label_4459dc;
        case 0x4459e0u: goto label_4459e0;
        case 0x4459e4u: goto label_4459e4;
        case 0x4459e8u: goto label_4459e8;
        case 0x4459ecu: goto label_4459ec;
        case 0x4459f0u: goto label_4459f0;
        case 0x4459f4u: goto label_4459f4;
        case 0x4459f8u: goto label_4459f8;
        case 0x4459fcu: goto label_4459fc;
        case 0x445a00u: goto label_445a00;
        case 0x445a04u: goto label_445a04;
        case 0x445a08u: goto label_445a08;
        case 0x445a0cu: goto label_445a0c;
        case 0x445a10u: goto label_445a10;
        case 0x445a14u: goto label_445a14;
        case 0x445a18u: goto label_445a18;
        case 0x445a1cu: goto label_445a1c;
        case 0x445a20u: goto label_445a20;
        case 0x445a24u: goto label_445a24;
        default: break;
    }

    ctx->pc = 0x4454c8u;

label_4454c8:
    // 0x4454c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4454c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4454cc:
    // 0x4454cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4454ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4454d0:
    // 0x4454d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4454d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4454d4:
    // 0x4454d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4454d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4454d8:
    // 0x4454d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4454d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4454dc:
    // 0x4454dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4454dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4454e0:
    // 0x4454e0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_4454e4:
    if (ctx->pc == 0x4454E4u) {
        ctx->pc = 0x4454E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4454E0u;
        // 0x4454e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4454E8u;
        goto label_4454e8;
    }
    ctx->pc = 0x4454E0u;
    {
        const bool branch_taken_0x4454e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4454E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4454E0u;
        // 0x4454e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4454e0) {
            ctx->pc = 0x445580u;
            goto label_445580;
        }
    }
    ctx->pc = 0x4454E8u;
label_4454e8:
    // 0x4454e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4454ec:
    // 0x4454ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4454ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4454f0:
    // 0x4454f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4454f4:
    if (ctx->pc == 0x4454F4u) {
        ctx->pc = 0x4454F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4454F0u;
        // 0x4454f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4454F8u;
        goto label_4454f8;
    }
    ctx->pc = 0x4454F0u;
    {
        const bool branch_taken_0x4454f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4454f0) {
            ctx->pc = 0x4454F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4454F0u;
            // 0x4454f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445504u;
            goto label_445504;
        }
    }
    ctx->pc = 0x4454F8u;
label_4454f8:
    // 0x4454f8: 0x40f809  jalr        $v0
label_4454fc:
    if (ctx->pc == 0x4454FCu) {
        ctx->pc = 0x445500u;
        goto label_445500;
    }
    ctx->pc = 0x4454F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4454F8u, 0x445500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445500u;
label_445500:
    // 0x445500: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x445500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_445504:
    // 0x445504: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x445504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_445508:
    // 0x445508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x445508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44550c:
    // 0x44550c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_445510:
    if (ctx->pc == 0x445510u) {
        ctx->pc = 0x445510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44550Cu;
        // 0x445510: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445514u;
        goto label_445514;
    }
    ctx->pc = 0x44550Cu;
    {
        const bool branch_taken_0x44550c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44550Cu;
        // 0x445510: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44550c) {
            ctx->pc = 0x445548u;
            goto label_445548;
        }
    }
    ctx->pc = 0x445514u;
label_445514:
    // 0x445514: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x445514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_445518:
    // 0x445518: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_44551c:
    if (ctx->pc == 0x44551Cu) {
        ctx->pc = 0x44551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445518u;
        // 0x44551c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445520u;
        goto label_445520;
    }
    ctx->pc = 0x445518u;
    {
        const bool branch_taken_0x445518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445518) {
            ctx->pc = 0x44551Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445518u;
            // 0x44551c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44552Cu;
            goto label_44552c;
        }
    }
    ctx->pc = 0x445520u;
label_445520:
    // 0x445520: 0x40f809  jalr        $v0
label_445524:
    if (ctx->pc == 0x445524u) {
        ctx->pc = 0x445528u;
        goto label_445528;
    }
    ctx->pc = 0x445520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445528u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445520u, 0x445528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445528u;
label_445528:
    // 0x445528: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x445528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44552c:
    // 0x44552c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x44552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_445530:
    // 0x445530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_445534:
    if (ctx->pc == 0x445534u) {
        ctx->pc = 0x445534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445530u;
        // 0x445534: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445538u;
        goto label_445538;
    }
    ctx->pc = 0x445530u;
    {
        const bool branch_taken_0x445530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445530u;
        // 0x445534: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445530) {
            ctx->pc = 0x445548u;
            goto label_445548;
        }
    }
    ctx->pc = 0x445538u;
label_445538:
    // 0x445538: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x445538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_44553c:
    // 0x44553c: 0x40f809  jalr        $v0
label_445540:
    if (ctx->pc == 0x445540u) {
        ctx->pc = 0x445544u;
        goto label_445544;
    }
    ctx->pc = 0x44553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44553Cu, 0x445544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445544u;
label_445544:
    // 0x445544: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x445544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_445548:
    // 0x445548: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x445548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_44554c:
    // 0x44554c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_445550:
    if (ctx->pc == 0x445550u) {
        ctx->pc = 0x445550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44554Cu;
        // 0x445550: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445554u;
        goto label_445554;
    }
    ctx->pc = 0x44554Cu;
    {
        const bool branch_taken_0x44554c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x445550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44554Cu;
        // 0x445550: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44554c) {
            ctx->pc = 0x445568u;
            goto label_445568;
        }
    }
    ctx->pc = 0x445554u;
label_445554:
    // 0x445554: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x445554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_445558:
    // 0x445558: 0x40f809  jalr        $v0
label_44555c:
    if (ctx->pc == 0x44555Cu) {
        ctx->pc = 0x445560u;
        goto label_445560;
    }
    ctx->pc = 0x445558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445560u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445558u, 0x445560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445560u;
label_445560:
    // 0x445560: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x445560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_445564:
    // 0x445564: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x445564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_445568:
    // 0x445568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x445568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44556c:
    // 0x44556c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445570:
    // 0x445570: 0xc0bb7e6  jal         func_2EDF98
label_445574:
    if (ctx->pc == 0x445574u) {
        ctx->pc = 0x445574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445570u;
        // 0x445574: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445578u;
        goto label_445578;
    }
    ctx->pc = 0x445570u;
    SET_GPR_U32(ctx, 31, 0x445578u);
    ctx->pc = 0x445574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445570u;
    // 0x445574: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x445570u, 0x445578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445578u;
label_445578:
    // 0x445578: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_44557c:
    if (ctx->pc == 0x44557Cu) {
        ctx->pc = 0x44557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445578u;
        // 0x44557c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445580u;
        goto label_445580;
    }
    ctx->pc = 0x445578u;
    {
        const bool branch_taken_0x445578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445578u;
        // 0x44557c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445578) {
            ctx->pc = 0x4458C0u;
            goto label_4458c0;
        }
    }
    ctx->pc = 0x445580u;
label_445580:
    // 0x445580: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x445580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_445584:
    // 0x445584: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_445588:
    if (ctx->pc == 0x445588u) {
        ctx->pc = 0x445588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445584u;
        // 0x445588: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44558Cu;
        goto label_44558c;
    }
    ctx->pc = 0x445584u;
    {
        const bool branch_taken_0x445584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x445588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445584u;
        // 0x445588: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445584) {
            ctx->pc = 0x4455A0u;
            goto label_4455a0;
        }
    }
    ctx->pc = 0x44558Cu;
label_44558c:
    // 0x44558c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x44558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_445590:
    // 0x445590: 0x40f809  jalr        $v0
label_445594:
    if (ctx->pc == 0x445594u) {
        ctx->pc = 0x445598u;
        goto label_445598;
    }
    ctx->pc = 0x445590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445598u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445590u, 0x445598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445598u;
label_445598:
    // 0x445598: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x445598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_44559c:
    // 0x44559c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x44559cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_4455a0:
    // 0x4455a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4455a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4455a4:
    // 0x4455a4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x4455a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4455a8:
    // 0x4455a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4455ac:
    if (ctx->pc == 0x4455ACu) {
        ctx->pc = 0x4455ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4455A8u;
        // 0x4455ac: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4455B0u;
        goto label_4455b0;
    }
    ctx->pc = 0x4455A8u;
    {
        const bool branch_taken_0x4455a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4455a8) {
            ctx->pc = 0x4455ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4455A8u;
            // 0x4455ac: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4455D0u;
            goto label_4455d0;
        }
    }
    ctx->pc = 0x4455B0u;
label_4455b0:
    // 0x4455b0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x4455b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_4455b4:
    // 0x4455b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4455b8:
    if (ctx->pc == 0x4455B8u) {
        ctx->pc = 0x4455B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4455B4u;
        // 0x4455b8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4455BCu;
        goto label_4455bc;
    }
    ctx->pc = 0x4455B4u;
    {
        const bool branch_taken_0x4455b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4455B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4455B4u;
        // 0x4455b8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4455b4) {
            ctx->pc = 0x4455CCu;
            goto label_4455cc;
        }
    }
    ctx->pc = 0x4455BCu;
label_4455bc:
    // 0x4455bc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x4455bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_4455c0:
    // 0x4455c0: 0x40f809  jalr        $v0
label_4455c4:
    if (ctx->pc == 0x4455C4u) {
        ctx->pc = 0x4455C8u;
        goto label_4455c8;
    }
    ctx->pc = 0x4455C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4455C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4455C0u, 0x4455C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4455C8u;
label_4455c8:
    // 0x4455c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4455c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4455cc:
    // 0x4455cc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4455ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4455d0:
    // 0x4455d0: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x4455d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_4455d4:
    // 0x4455d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4455d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4455d8:
    // 0x4455d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4455d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4455dc:
    // 0x4455dc: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x4455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_4455e0:
    // 0x4455e0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4455e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4455e4:
    // 0x4455e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4455e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4455e8:
    // 0x4455e8: 0x250c3  sra         $t2, $v0, 3
    ctx->pc = 0x4455e8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
label_4455ec:
    // 0x4455ec: 0x144202b  sltu        $a0, $t2, $a0
    ctx->pc = 0x4455ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4455f0:
    // 0x4455f0: 0x108000b2  beqz        $a0, . + 4 + (0xB2 << 2)
label_4455f4:
    if (ctx->pc == 0x4455F4u) {
        ctx->pc = 0x4455F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4455F0u;
        // 0x4455f4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4455F8u;
        goto label_4455f8;
    }
    ctx->pc = 0x4455F0u;
    {
        const bool branch_taken_0x4455f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4455F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4455F0u;
        // 0x4455f4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4455f0) {
            ctx->pc = 0x4458BCu;
            goto label_4458bc;
        }
    }
    ctx->pc = 0x4455F8u;
label_4455f8:
    // 0x4455f8: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x4455f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_4455fc:
    // 0x4455fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4455fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445600:
    // 0x445600: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x445600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_445604:
    // 0x445604: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x445604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_445608:
    // 0x445608: 0xa21c0  sll         $a0, $t2, 7
    ctx->pc = 0x445608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 7));
label_44560c:
    // 0x44560c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_445610:
    // 0x445610: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x445610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_445614:
    // 0x445614: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x445614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_445618:
    // 0x445618: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x445618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44561c:
    // 0x44561c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44561cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_445620:
    // 0x445620: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x445620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_445624:
    // 0x445624: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x445624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_445628:
    // 0x445628: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x445628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_44562c:
    // 0x44562c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x44562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_445630:
    // 0x445630: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_445634:
    if (ctx->pc == 0x445634u) {
        ctx->pc = 0x445634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445630u;
        // 0x445634: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445638u;
        goto label_445638;
    }
    ctx->pc = 0x445630u;
    {
        const bool branch_taken_0x445630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445630u;
        // 0x445634: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445630) {
            ctx->pc = 0x445694u;
            goto label_445694;
        }
    }
    ctx->pc = 0x445638u;
label_445638:
    // 0x445638: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x445638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_44563c:
    // 0x44563c: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x44563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_445640:
    // 0x445640: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x445640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_445644:
    // 0x445644: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x445644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_445648:
    // 0x445648: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x445648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_44564c:
    // 0x44564c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x44564cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_445650:
    // 0x445650: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x445650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_445654:
    // 0x445654: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x445654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_445658:
    // 0x445658: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x445658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_44565c:
    // 0x44565c: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x44565cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_445660:
    // 0x445660: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x445660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_445664:
    // 0x445664: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x445664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_445668:
    // 0x445668: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x445668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44566c:
    // 0x44566c: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x44566cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_445670:
    // 0x445670: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x445670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_445674:
    // 0x445674: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x445674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_445678:
    // 0x445678: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x445678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44567c:
    // 0x44567c: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x44567cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_445680:
    // 0x445680: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x445680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_445684:
    // 0x445684: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_445688:
    if (ctx->pc == 0x445688u) {
        ctx->pc = 0x445688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445684u;
        // 0x445688: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44568Cu;
        goto label_44568c;
    }
    ctx->pc = 0x445684u;
    {
        const bool branch_taken_0x445684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x445688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445684u;
        // 0x445688: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445684) {
            ctx->pc = 0x445640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445640;
        }
    }
    ctx->pc = 0x44568Cu;
label_44568c:
    // 0x44568c: 0x1000000f  b           . + 4 + (0xF << 2)
label_445690:
    if (ctx->pc == 0x445690u) {
        ctx->pc = 0x445690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44568Cu;
        // 0x445690: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445694u;
        goto label_445694;
    }
    ctx->pc = 0x44568Cu;
    {
        const bool branch_taken_0x44568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44568Cu;
        // 0x445690: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44568c) {
            ctx->pc = 0x4456CCu;
            goto label_4456cc;
        }
    }
    ctx->pc = 0x445694u;
label_445694:
    // 0x445694: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x445694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_445698:
    // 0x445698: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x445698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_44569c:
    // 0x44569c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x44569cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4456a0:
    // 0x4456a0: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x4456a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_4456a4:
    // 0x4456a4: 0xdc6b0010  ld          $t3, 0x10($v1)
    ctx->pc = 0x4456a4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4456a8:
    // 0x4456a8: 0xdc6c0018  ld          $t4, 0x18($v1)
    ctx->pc = 0x4456a8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_4456ac:
    // 0x4456ac: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x4456acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
label_4456b0:
    // 0x4456b0: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x4456b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
label_4456b4:
    // 0x4456b4: 0xfccb0010  sd          $t3, 0x10($a2)
    ctx->pc = 0x4456b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 11));
label_4456b8:
    // 0x4456b8: 0xfccc0018  sd          $t4, 0x18($a2)
    ctx->pc = 0x4456b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 12));
label_4456bc:
    // 0x4456bc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4456bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4456c0:
    // 0x4456c0: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_4456c4:
    if (ctx->pc == 0x4456C4u) {
        ctx->pc = 0x4456C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4456C0u;
        // 0x4456c4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4456C8u;
        goto label_4456c8;
    }
    ctx->pc = 0x4456C0u;
    {
        const bool branch_taken_0x4456c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4456C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4456C0u;
        // 0x4456c4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4456c0) {
            ctx->pc = 0x44569Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44569c;
        }
    }
    ctx->pc = 0x4456C8u;
label_4456c8:
    // 0x4456c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4456c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4456cc:
    // 0x4456cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4456ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4456d0:
    // 0x4456d0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4456d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4456d4:
    // 0x4456d4: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x4456d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4456d8:
    // 0x4456d8: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x4456d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4456dc:
    // 0x4456dc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_4456e0:
    if (ctx->pc == 0x4456E0u) {
        ctx->pc = 0x4456E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4456DCu;
        // 0x4456e0: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4456E4u;
        goto label_4456e4;
    }
    ctx->pc = 0x4456DCu;
    {
        const bool branch_taken_0x4456dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4456E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4456DCu;
        // 0x4456e0: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4456dc) {
            ctx->pc = 0x445628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445628;
        }
    }
    ctx->pc = 0x4456E4u;
label_4456e4:
    // 0x4456e4: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x4456e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_4456e8:
    // 0x4456e8: 0x2502e880  addiu       $v0, $t0, -0x1780
    ctx->pc = 0x4456e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961280));
label_4456ec:
    // 0x4456ec: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4456ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4456f0:
    // 0x4456f0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4456f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4456f4:
    // 0x4456f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4456f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4456f8:
    // 0x4456f8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4456f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4456fc:
    // 0x4456fc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4456fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_445700:
    // 0x445700: 0xe5282b  sltu        $a1, $a3, $a1
    ctx->pc = 0x445700u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_445704:
    // 0x445704: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x445704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_445708:
    // 0x445708: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x445708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_44570c:
    // 0x44570c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44570cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_445710:
    // 0x445710: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x445710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_445714:
    // 0x445714: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_445718:
    if (ctx->pc == 0x445718u) {
        ctx->pc = 0x445718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445714u;
        // 0x445718: 0x24c2000c  addiu       $v0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44571Cu;
        goto label_44571c;
    }
    ctx->pc = 0x445714u;
    {
        const bool branch_taken_0x445714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x445718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445714u;
        // 0x445718: 0x24c2000c  addiu       $v0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445714) {
            ctx->pc = 0x445760u;
            goto label_445760;
        }
    }
    ctx->pc = 0x44571Cu;
label_44571c:
    // 0x44571c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44571cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445720:
    // 0x445720: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x445720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_445724:
    // 0x445724: 0x0  nop
    ctx->pc = 0x445724u;
    // NOP
label_445728:
    // 0x445728: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x445728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_44572c:
    // 0x44572c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x44572cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_445730:
    // 0x445730: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x445730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_445734:
    // 0x445734: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x445734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_445738:
    // 0x445738: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x445738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44573c:
    // 0x44573c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44573cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_445740:
    // 0x445740: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x445740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_445744:
    // 0x445744: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x445744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_445748:
    // 0x445748: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x445748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_44574c:
    // 0x44574c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x44574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_445750:
    // 0x445750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x445750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_445754:
    // 0x445754: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x445754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_445758:
    // 0x445758: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_44575c:
    if (ctx->pc == 0x44575Cu) {
        ctx->pc = 0x44575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445758u;
        // 0x44575c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445760u;
        goto label_445760;
    }
    ctx->pc = 0x445758u;
    {
        const bool branch_taken_0x445758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445758u;
        // 0x44575c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445758) {
            ctx->pc = 0x445728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445728;
        }
    }
    ctx->pc = 0x445760u;
label_445760:
    // 0x445760: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x445760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_445764:
    // 0x445764: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x445764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_445768:
    // 0x445768: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x445768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44576c:
    // 0x44576c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44576cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_445770:
    // 0x445770: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_445774:
    if (ctx->pc == 0x445774u) {
        ctx->pc = 0x445774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445770u;
        // 0x445774: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445778u;
        goto label_445778;
    }
    ctx->pc = 0x445770u;
    {
        const bool branch_taken_0x445770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445770u;
        // 0x445774: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445770) {
            ctx->pc = 0x445810u;
            goto label_445810;
        }
    }
    ctx->pc = 0x445778u;
label_445778:
    // 0x445778: 0xe23018  mult        $a2, $a3, $v0
    ctx->pc = 0x445778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_44577c:
    // 0x44577c: 0x0  nop
    ctx->pc = 0x44577cu;
    // NOP
label_445780:
    // 0x445780: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x445780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_445784:
    // 0x445784: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x445784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_445788:
    // 0x445788: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x445788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44578c:
    // 0x44578c: 0x684b002f  ldl         $t3, 0x2F($v0)
    ctx->pc = 0x44578cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_445790:
    // 0x445790: 0x6c4b0028  ldr         $t3, 0x28($v0)
    ctx->pc = 0x445790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_445794:
    // 0x445794: 0x684c0037  ldl         $t4, 0x37($v0)
    ctx->pc = 0x445794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_445798:
    // 0x445798: 0x6c4c0030  ldr         $t4, 0x30($v0)
    ctx->pc = 0x445798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_44579c:
    // 0x44579c: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x44579cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4457a0:
    // 0x4457a0: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x4457a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4457a4:
    // 0x4457a4: 0x68440047  ldl         $a0, 0x47($v0)
    ctx->pc = 0x4457a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4457a8:
    // 0x4457a8: 0x6c440040  ldr         $a0, 0x40($v0)
    ctx->pc = 0x4457a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4457ac:
    // 0x4457ac: 0xb04b0007  sdl         $t3, 0x7($v0)
    ctx->pc = 0x4457acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457b0:
    // 0x4457b0: 0xb44b0000  sdr         $t3, 0x0($v0)
    ctx->pc = 0x4457b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457b4:
    // 0x4457b4: 0xb04c000f  sdl         $t4, 0xF($v0)
    ctx->pc = 0x4457b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457b8:
    // 0x4457b8: 0xb44c0008  sdr         $t4, 0x8($v0)
    ctx->pc = 0x4457b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457bc:
    // 0x4457bc: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x4457bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457c0:
    // 0x4457c0: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x4457c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457c4:
    // 0x4457c4: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x4457c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457c8:
    // 0x4457c8: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x4457c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457cc:
    // 0x4457cc: 0x684b004f  ldl         $t3, 0x4F($v0)
    ctx->pc = 0x4457ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4457d0:
    // 0x4457d0: 0x6c4b0048  ldr         $t3, 0x48($v0)
    ctx->pc = 0x4457d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4457d4:
    // 0x4457d4: 0xb04b0027  sdl         $t3, 0x27($v0)
    ctx->pc = 0x4457d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457d8:
    // 0x4457d8: 0xb44b0020  sdr         $t3, 0x20($v0)
    ctx->pc = 0x4457d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4457dc:
    // 0x4457dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4457dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4457e0:
    // 0x4457e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4457e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4457e4:
    // 0x4457e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4457e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4457e8:
    // 0x4457e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4457e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4457ec:
    // 0x4457ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4457ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4457f0:
    // 0x4457f0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4457f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4457f4:
    // 0x4457f4: 0xe5282b  sltu        $a1, $a3, $a1
    ctx->pc = 0x4457f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4457f8:
    // 0x4457f8: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x4457f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_4457fc:
    // 0x4457fc: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x4457fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
label_445800:
    // 0x445800: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x445800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_445804:
    // 0x445804: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x445804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_445808:
    // 0x445808: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
label_44580c:
    if (ctx->pc == 0x44580Cu) {
        ctx->pc = 0x44580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445808u;
        // 0x44580c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445810u;
        goto label_445810;
    }
    ctx->pc = 0x445808u;
    {
        const bool branch_taken_0x445808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x44580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445808u;
        // 0x44580c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445808) {
            ctx->pc = 0x445780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445780;
        }
    }
    ctx->pc = 0x445810u;
label_445810:
    // 0x445810: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x445810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_445814:
    // 0x445814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x445814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_445818:
    // 0x445818: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_44581c:
    if (ctx->pc == 0x44581Cu) {
        ctx->pc = 0x44581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445818u;
        // 0x44581c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445820u;
        goto label_445820;
    }
    ctx->pc = 0x445818u;
    {
        const bool branch_taken_0x445818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445818u;
        // 0x44581c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445818) {
            ctx->pc = 0x4458BCu;
            goto label_4458bc;
        }
    }
    ctx->pc = 0x445820u;
label_445820:
    // 0x445820: 0x8e0b0008  lw          $t3, 0x8($s0)
    ctx->pc = 0x445820u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_445824:
    // 0x445824: 0x240d0028  addiu       $t5, $zero, 0x28
    ctx->pc = 0x445824u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_445828:
    // 0x445828: 0x240c0028  addiu       $t4, $zero, 0x28
    ctx->pc = 0x445828u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_44582c:
    // 0x44582c: 0xed1018  mult        $v0, $a3, $t5
    ctx->pc = 0x44582cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_445830:
    // 0x445830: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x445830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_445834:
    // 0x445834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x445834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445838:
    // 0x445838: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x445838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_44583c:
    // 0x44583c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x44583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_445840:
    // 0x445840: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_445844:
    if (ctx->pc == 0x445844u) {
        ctx->pc = 0x445844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445840u;
        // 0x445844: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445848u;
        goto label_445848;
    }
    ctx->pc = 0x445840u;
    {
        const bool branch_taken_0x445840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445840u;
        // 0x445844: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445840) {
            ctx->pc = 0x4458A4u;
            goto label_4458a4;
        }
    }
    ctx->pc = 0x445848u;
label_445848:
    // 0x445848: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x445848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_44584c:
    // 0x44584c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x44584cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_445850:
    // 0x445850: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x445850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_445854:
    // 0x445854: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x445854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445858:
    // 0x445858: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x445858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_44585c:
    // 0x44585c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x44585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_445860:
    // 0x445860: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x445860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_445864:
    // 0x445864: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x445864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_445868:
    // 0x445868: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x445868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_44586c:
    // 0x44586c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_445870:
    if (ctx->pc == 0x445870u) {
        ctx->pc = 0x445870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44586Cu;
        // 0x445870: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445874u;
        goto label_445874;
    }
    ctx->pc = 0x44586Cu;
    {
        const bool branch_taken_0x44586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44586c) {
            ctx->pc = 0x445870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44586Cu;
            // 0x445870: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44588Cu;
            goto label_44588c;
        }
    }
    ctx->pc = 0x445874u;
label_445874:
    // 0x445874: 0x146a0003  bne         $v1, $t2, . + 4 + (0x3 << 2)
label_445878:
    if (ctx->pc == 0x445878u) {
        ctx->pc = 0x445878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445874u;
        // 0x445878: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44587Cu;
        goto label_44587c;
    }
    ctx->pc = 0x445874u;
    {
        const bool branch_taken_0x445874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x445878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445874u;
        // 0x445878: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445874) {
            ctx->pc = 0x445884u;
            goto label_445884;
        }
    }
    ctx->pc = 0x44587Cu;
label_44587c:
    // 0x44587c: 0x10000002  b           . + 4 + (0x2 << 2)
label_445880:
    if (ctx->pc == 0x445880u) {
        ctx->pc = 0x445880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44587Cu;
        // 0x445880: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445884u;
        goto label_445884;
    }
    ctx->pc = 0x44587Cu;
    {
        const bool branch_taken_0x44587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44587Cu;
        // 0x445880: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44587c) {
            ctx->pc = 0x445888u;
            goto label_445888;
        }
    }
    ctx->pc = 0x445884u;
label_445884:
    // 0x445884: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x445884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_445888:
    // 0x445888: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x445888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44588c:
    // 0x44588c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44588cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_445890:
    // 0x445890: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x445890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_445894:
    // 0x445894: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x445894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_445898:
    // 0x445898: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x445898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44589c:
    // 0x44589c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_4458a0:
    if (ctx->pc == 0x4458A0u) {
        ctx->pc = 0x4458A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44589Cu;
        // 0x4458a0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4458A4u;
        goto label_4458a4;
    }
    ctx->pc = 0x44589Cu;
    {
        const bool branch_taken_0x44589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4458A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44589Cu;
        // 0x4458a0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44589c) {
            ctx->pc = 0x445858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445858;
        }
    }
    ctx->pc = 0x4458A4u;
label_4458a4:
    // 0x4458a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4458a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4458a8:
    // 0x4458a8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4458a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4458ac:
    // 0x4458ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4458acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4458b0:
    // 0x4458b0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4458b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4458b4:
    // 0x4458b4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_4458b8:
    if (ctx->pc == 0x4458B8u) {
        ctx->pc = 0x4458B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4458B4u;
        // 0x4458b8: 0xed1018  mult        $v0, $a3, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4458BCu;
        goto label_4458bc;
    }
    ctx->pc = 0x4458B4u;
    {
        const bool branch_taken_0x4458b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4458B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4458B4u;
        // 0x4458b8: 0xed1018  mult        $v0, $a3, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4458b4) {
            ctx->pc = 0x445830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445830;
        }
    }
    ctx->pc = 0x4458BCu;
label_4458bc:
    // 0x4458bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4458bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4458c0:
    // 0x4458c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4458c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4458c4:
    // 0x4458c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4458c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4458c8:
    // 0x4458c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4458c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4458cc:
    // 0x4458cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4458ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4458d0:
    // 0x4458d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4458d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4458d4:
    // 0x4458d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4458d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4458d8:
    // 0x4458d8: 0x3e00008  jr          $ra
label_4458dc:
    if (ctx->pc == 0x4458DCu) {
        ctx->pc = 0x4458DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4458D8u;
        // 0x4458dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4458E0u;
        goto label_4458e0;
    }
    ctx->pc = 0x4458D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4458DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4458D8u;
        // 0x4458dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4458D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4458E0u;
label_4458e0:
    // 0x4458e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4458e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4458e4:
    // 0x4458e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4458e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4458e8:
    // 0x4458e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4458e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4458ec:
    // 0x4458ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4458ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4458f0:
    // 0x4458f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4458f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4458f4:
    // 0x4458f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4458f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4458f8:
    // 0x4458f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4458f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4458fc:
    // 0x4458fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4458fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_445900:
    // 0x445900: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x445900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_445904:
    // 0x445904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x445904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_445908:
    // 0x445908: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x445908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_44590c:
    // 0x44590c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x44590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_445910:
    // 0x445910: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x445910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_445914:
    // 0x445914: 0x10a20037  beq         $a1, $v0, . + 4 + (0x37 << 2)
label_445918:
    if (ctx->pc == 0x445918u) {
        ctx->pc = 0x445918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445914u;
        // 0x445918: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44591Cu;
        goto label_44591c;
    }
    ctx->pc = 0x445914u;
    {
        const bool branch_taken_0x445914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x445918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445914u;
        // 0x445918: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445914) {
            ctx->pc = 0x4459F4u;
            goto label_4459f4;
        }
    }
    ctx->pc = 0x44591Cu;
label_44591c:
    // 0x44591c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x44591cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_445920:
    // 0x445920: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x445920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_445924:
    // 0x445924: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x445924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_445928:
    // 0x445928: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x445928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44592c:
    // 0x44592c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_445930:
    if (ctx->pc == 0x445930u) {
        ctx->pc = 0x445930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44592Cu;
        // 0x445930: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445934u;
        goto label_445934;
    }
    ctx->pc = 0x44592Cu;
    {
        const bool branch_taken_0x44592c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44592c) {
            ctx->pc = 0x445930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44592Cu;
            // 0x445930: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445954u;
            goto label_445954;
        }
    }
    ctx->pc = 0x445934u;
label_445934:
    // 0x445934: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x445934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_445938:
    // 0x445938: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x445938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_44593c:
    // 0x44593c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x44593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_445940:
    // 0x445940: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x445940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_445944:
    // 0x445944: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x445944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_445948:
    // 0x445948: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x445948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_44594c:
    // 0x44594c: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x44594cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_445950:
    // 0x445950: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x445950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_445954:
    // 0x445954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x445954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_445958:
    // 0x445958: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x445958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_44595c:
    // 0x44595c: 0x30820006  andi        $v0, $a0, 0x6
    ctx->pc = 0x44595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
label_445960:
    // 0x445960: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
label_445964:
    if (ctx->pc == 0x445964u) {
        ctx->pc = 0x445964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445960u;
        // 0x445964: 0xa6440000  sh          $a0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445968u;
        goto label_445968;
    }
    ctx->pc = 0x445960u;
    {
        const bool branch_taken_0x445960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x445964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445960u;
        // 0x445964: 0xa6440000  sh          $a0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445960) {
            ctx->pc = 0x4459E4u;
            goto label_4459e4;
        }
    }
    ctx->pc = 0x445968u;
label_445968:
    // 0x445968: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x445968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_44596c:
    // 0x44596c: 0x3082fffd  andi        $v0, $a0, 0xFFFD
    ctx->pc = 0x44596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65533);
label_445970:
    // 0x445970: 0x96510002  lhu         $s1, 0x2($s2)
    ctx->pc = 0x445970u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_445974:
    // 0x445974: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x445974u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_445978:
    // 0x445978: 0x2110018  mult        $zero, $s0, $s1
    ctx->pc = 0x445978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_44597c:
    // 0x44597c: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x44597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
label_445980:
    // 0x445980: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x445980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_445984:
    // 0x445984: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x445984u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_445988:
    // 0x445988: 0x2812  mflo        $a1
    ctx->pc = 0x445988u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_44598c:
    // 0x44598c: 0xc113084  jal         func_44C210
label_445990:
    if (ctx->pc == 0x445990u) {
        ctx->pc = 0x445990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44598Cu;
        // 0x445990: 0x8e530010  lw          $s3, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445994u;
        goto label_445994;
    }
    ctx->pc = 0x44598Cu;
    SET_GPR_U32(ctx, 31, 0x445994u);
    ctx->pc = 0x445990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44598Cu;
    // 0x445990: 0x8e530010  lw          $s3, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C210u, 0x44598Cu, 0x445994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445994u;
label_445994:
    // 0x445994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x445994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445998:
    // 0x445998: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x445998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_44599c:
    // 0x44599c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x44599cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4459a0:
    // 0x4459a0: 0xa6510002  sh          $s1, 0x2($s2)
    ctx->pc = 0x4459a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 17));
label_4459a4:
    // 0x4459a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4459a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4459a8:
    // 0x4459a8: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x4459a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_4459ac:
    // 0x4459ac: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x4459acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_4459b0:
    // 0x4459b0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x4459b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_4459b4:
    // 0x4459b4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_4459b8:
    if (ctx->pc == 0x4459B8u) {
        ctx->pc = 0x4459B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4459B4u;
        // 0x4459b8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4459BCu;
        goto label_4459bc;
    }
    ctx->pc = 0x4459B4u;
    {
        const bool branch_taken_0x4459b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4459B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4459B4u;
        // 0x4459b8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4459b4) {
            ctx->pc = 0x4459CCu;
            goto label_4459cc;
        }
    }
    ctx->pc = 0x4459BCu;
label_4459bc:
    // 0x4459bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4459bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4459c0:
    // 0x4459c0: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x4459c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
label_4459c4:
    // 0x4459c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_4459c8:
    if (ctx->pc == 0x4459C8u) {
        ctx->pc = 0x4459C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4459C4u;
        // 0x4459c8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4459CCu;
        goto label_4459cc;
    }
    ctx->pc = 0x4459C4u;
    {
        const bool branch_taken_0x4459c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4459C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4459C4u;
        // 0x4459c8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4459c4) {
            ctx->pc = 0x4459F4u;
            goto label_4459f4;
        }
    }
    ctx->pc = 0x4459CCu;
label_4459cc:
    // 0x4459cc: 0x96460002  lhu         $a2, 0x2($s2)
    ctx->pc = 0x4459ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4459d0:
    // 0x4459d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4459d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4459d4:
    // 0x4459d4: 0x2660018  mult        $zero, $s3, $a2
    ctx->pc = 0x4459d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4459d8:
    // 0x4459d8: 0x3012  mflo        $a2
    ctx->pc = 0x4459d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4459dc:
    // 0x4459dc: 0xc0bb778  jal         func_2EDDE0
label_4459e0:
    if (ctx->pc == 0x4459E0u) {
        ctx->pc = 0x4459E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4459DCu;
        // 0x4459e0: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4459E4u;
        goto label_4459e4;
    }
    ctx->pc = 0x4459DCu;
    SET_GPR_U32(ctx, 31, 0x4459E4u);
    ctx->pc = 0x4459E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4459DCu;
    // 0x4459e0: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4459DCu, 0x4459E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4459E4u;
label_4459e4:
    // 0x4459e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4459e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4459e8:
    // 0x4459e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4459e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4459ec:
    // 0x4459ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_4459f0:
    if (ctx->pc == 0x4459F0u) {
        ctx->pc = 0x4459F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4459ECu;
        // 0x4459f0: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4459F4u;
        goto label_4459f4;
    }
    ctx->pc = 0x4459ECu;
    {
        const bool branch_taken_0x4459ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4459F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4459ECu;
        // 0x4459f0: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4459ec) {
            ctx->pc = 0x4459F8u;
            goto label_4459f8;
        }
    }
    ctx->pc = 0x4459F4u;
label_4459f4:
    // 0x4459f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4459f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4459f8:
    // 0x4459f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4459f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4459fc:
    // 0x4459fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4459fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445a00:
    // 0x445a00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x445a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445a04:
    // 0x445a04: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x445a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445a08:
    // 0x445a08: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x445a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445a0c:
    // 0x445a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_445a10:
    // 0x445a10: 0x3e00008  jr          $ra
label_445a14:
    if (ctx->pc == 0x445A14u) {
        ctx->pc = 0x445A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445A10u;
        // 0x445a14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445A18u;
        goto label_445a18;
    }
    ctx->pc = 0x445A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445A10u;
        // 0x445a14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445A18u;
label_445a18:
    // 0x445a18: 0xaf84af24  sw          $a0, -0x50DC($gp)
    ctx->pc = 0x445a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946596), GPR_U32(ctx, 4));
label_445a1c:
    // 0x445a1c: 0x3e00008  jr          $ra
label_445a20:
    if (ctx->pc == 0x445A20u) {
        ctx->pc = 0x445A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445A1Cu;
        // 0x445a20: 0xaf85af28  sw          $a1, -0x50D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445A24u;
        goto label_445a24;
    }
    ctx->pc = 0x445A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445A1Cu;
        // 0x445a20: 0xaf85af28  sw          $a1, -0x50D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445A24u;
label_445a24:
    // 0x445a24: 0x0  nop
    ctx->pc = 0x445a24u;
    // NOP
    ctx->pc = 0x445a28u;
}
