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

// Function: sub_0037D7A0
// Address: 0x37d7a0 - 0x37dbc0
void sub_0037D7A0_0x37d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D7A0_0x37d7a0");
#endif

    switch (ctx->pc) {
        case 0x37d7a0u: goto label_37d7a0;
        case 0x37d7a4u: goto label_37d7a4;
        case 0x37d7a8u: goto label_37d7a8;
        case 0x37d7acu: goto label_37d7ac;
        case 0x37d7b0u: goto label_37d7b0;
        case 0x37d7b4u: goto label_37d7b4;
        case 0x37d7b8u: goto label_37d7b8;
        case 0x37d7bcu: goto label_37d7bc;
        case 0x37d7c0u: goto label_37d7c0;
        case 0x37d7c4u: goto label_37d7c4;
        case 0x37d7c8u: goto label_37d7c8;
        case 0x37d7ccu: goto label_37d7cc;
        case 0x37d7d0u: goto label_37d7d0;
        case 0x37d7d4u: goto label_37d7d4;
        case 0x37d7d8u: goto label_37d7d8;
        case 0x37d7dcu: goto label_37d7dc;
        case 0x37d7e0u: goto label_37d7e0;
        case 0x37d7e4u: goto label_37d7e4;
        case 0x37d7e8u: goto label_37d7e8;
        case 0x37d7ecu: goto label_37d7ec;
        case 0x37d7f0u: goto label_37d7f0;
        case 0x37d7f4u: goto label_37d7f4;
        case 0x37d7f8u: goto label_37d7f8;
        case 0x37d7fcu: goto label_37d7fc;
        case 0x37d800u: goto label_37d800;
        case 0x37d804u: goto label_37d804;
        case 0x37d808u: goto label_37d808;
        case 0x37d80cu: goto label_37d80c;
        case 0x37d810u: goto label_37d810;
        case 0x37d814u: goto label_37d814;
        case 0x37d818u: goto label_37d818;
        case 0x37d81cu: goto label_37d81c;
        case 0x37d820u: goto label_37d820;
        case 0x37d824u: goto label_37d824;
        case 0x37d828u: goto label_37d828;
        case 0x37d82cu: goto label_37d82c;
        case 0x37d830u: goto label_37d830;
        case 0x37d834u: goto label_37d834;
        case 0x37d838u: goto label_37d838;
        case 0x37d83cu: goto label_37d83c;
        case 0x37d840u: goto label_37d840;
        case 0x37d844u: goto label_37d844;
        case 0x37d848u: goto label_37d848;
        case 0x37d84cu: goto label_37d84c;
        case 0x37d850u: goto label_37d850;
        case 0x37d854u: goto label_37d854;
        case 0x37d858u: goto label_37d858;
        case 0x37d85cu: goto label_37d85c;
        case 0x37d860u: goto label_37d860;
        case 0x37d864u: goto label_37d864;
        case 0x37d868u: goto label_37d868;
        case 0x37d86cu: goto label_37d86c;
        case 0x37d870u: goto label_37d870;
        case 0x37d874u: goto label_37d874;
        case 0x37d878u: goto label_37d878;
        case 0x37d87cu: goto label_37d87c;
        case 0x37d880u: goto label_37d880;
        case 0x37d884u: goto label_37d884;
        case 0x37d888u: goto label_37d888;
        case 0x37d88cu: goto label_37d88c;
        case 0x37d890u: goto label_37d890;
        case 0x37d894u: goto label_37d894;
        case 0x37d898u: goto label_37d898;
        case 0x37d89cu: goto label_37d89c;
        case 0x37d8a0u: goto label_37d8a0;
        case 0x37d8a4u: goto label_37d8a4;
        case 0x37d8a8u: goto label_37d8a8;
        case 0x37d8acu: goto label_37d8ac;
        case 0x37d8b0u: goto label_37d8b0;
        case 0x37d8b4u: goto label_37d8b4;
        case 0x37d8b8u: goto label_37d8b8;
        case 0x37d8bcu: goto label_37d8bc;
        case 0x37d8c0u: goto label_37d8c0;
        case 0x37d8c4u: goto label_37d8c4;
        case 0x37d8c8u: goto label_37d8c8;
        case 0x37d8ccu: goto label_37d8cc;
        case 0x37d8d0u: goto label_37d8d0;
        case 0x37d8d4u: goto label_37d8d4;
        case 0x37d8d8u: goto label_37d8d8;
        case 0x37d8dcu: goto label_37d8dc;
        case 0x37d8e0u: goto label_37d8e0;
        case 0x37d8e4u: goto label_37d8e4;
        case 0x37d8e8u: goto label_37d8e8;
        case 0x37d8ecu: goto label_37d8ec;
        case 0x37d8f0u: goto label_37d8f0;
        case 0x37d8f4u: goto label_37d8f4;
        case 0x37d8f8u: goto label_37d8f8;
        case 0x37d8fcu: goto label_37d8fc;
        case 0x37d900u: goto label_37d900;
        case 0x37d904u: goto label_37d904;
        case 0x37d908u: goto label_37d908;
        case 0x37d90cu: goto label_37d90c;
        case 0x37d910u: goto label_37d910;
        case 0x37d914u: goto label_37d914;
        case 0x37d918u: goto label_37d918;
        case 0x37d91cu: goto label_37d91c;
        case 0x37d920u: goto label_37d920;
        case 0x37d924u: goto label_37d924;
        case 0x37d928u: goto label_37d928;
        case 0x37d92cu: goto label_37d92c;
        case 0x37d930u: goto label_37d930;
        case 0x37d934u: goto label_37d934;
        case 0x37d938u: goto label_37d938;
        case 0x37d93cu: goto label_37d93c;
        case 0x37d940u: goto label_37d940;
        case 0x37d944u: goto label_37d944;
        case 0x37d948u: goto label_37d948;
        case 0x37d94cu: goto label_37d94c;
        case 0x37d950u: goto label_37d950;
        case 0x37d954u: goto label_37d954;
        case 0x37d958u: goto label_37d958;
        case 0x37d95cu: goto label_37d95c;
        case 0x37d960u: goto label_37d960;
        case 0x37d964u: goto label_37d964;
        case 0x37d968u: goto label_37d968;
        case 0x37d96cu: goto label_37d96c;
        case 0x37d970u: goto label_37d970;
        case 0x37d974u: goto label_37d974;
        case 0x37d978u: goto label_37d978;
        case 0x37d97cu: goto label_37d97c;
        case 0x37d980u: goto label_37d980;
        case 0x37d984u: goto label_37d984;
        case 0x37d988u: goto label_37d988;
        case 0x37d98cu: goto label_37d98c;
        case 0x37d990u: goto label_37d990;
        case 0x37d994u: goto label_37d994;
        case 0x37d998u: goto label_37d998;
        case 0x37d99cu: goto label_37d99c;
        case 0x37d9a0u: goto label_37d9a0;
        case 0x37d9a4u: goto label_37d9a4;
        case 0x37d9a8u: goto label_37d9a8;
        case 0x37d9acu: goto label_37d9ac;
        case 0x37d9b0u: goto label_37d9b0;
        case 0x37d9b4u: goto label_37d9b4;
        case 0x37d9b8u: goto label_37d9b8;
        case 0x37d9bcu: goto label_37d9bc;
        case 0x37d9c0u: goto label_37d9c0;
        case 0x37d9c4u: goto label_37d9c4;
        case 0x37d9c8u: goto label_37d9c8;
        case 0x37d9ccu: goto label_37d9cc;
        case 0x37d9d0u: goto label_37d9d0;
        case 0x37d9d4u: goto label_37d9d4;
        case 0x37d9d8u: goto label_37d9d8;
        case 0x37d9dcu: goto label_37d9dc;
        case 0x37d9e0u: goto label_37d9e0;
        case 0x37d9e4u: goto label_37d9e4;
        case 0x37d9e8u: goto label_37d9e8;
        case 0x37d9ecu: goto label_37d9ec;
        case 0x37d9f0u: goto label_37d9f0;
        case 0x37d9f4u: goto label_37d9f4;
        case 0x37d9f8u: goto label_37d9f8;
        case 0x37d9fcu: goto label_37d9fc;
        case 0x37da00u: goto label_37da00;
        case 0x37da04u: goto label_37da04;
        case 0x37da08u: goto label_37da08;
        case 0x37da0cu: goto label_37da0c;
        case 0x37da10u: goto label_37da10;
        case 0x37da14u: goto label_37da14;
        case 0x37da18u: goto label_37da18;
        case 0x37da1cu: goto label_37da1c;
        case 0x37da20u: goto label_37da20;
        case 0x37da24u: goto label_37da24;
        case 0x37da28u: goto label_37da28;
        case 0x37da2cu: goto label_37da2c;
        case 0x37da30u: goto label_37da30;
        case 0x37da34u: goto label_37da34;
        case 0x37da38u: goto label_37da38;
        case 0x37da3cu: goto label_37da3c;
        case 0x37da40u: goto label_37da40;
        case 0x37da44u: goto label_37da44;
        case 0x37da48u: goto label_37da48;
        case 0x37da4cu: goto label_37da4c;
        case 0x37da50u: goto label_37da50;
        case 0x37da54u: goto label_37da54;
        case 0x37da58u: goto label_37da58;
        case 0x37da5cu: goto label_37da5c;
        case 0x37da60u: goto label_37da60;
        case 0x37da64u: goto label_37da64;
        case 0x37da68u: goto label_37da68;
        case 0x37da6cu: goto label_37da6c;
        case 0x37da70u: goto label_37da70;
        case 0x37da74u: goto label_37da74;
        case 0x37da78u: goto label_37da78;
        case 0x37da7cu: goto label_37da7c;
        case 0x37da80u: goto label_37da80;
        case 0x37da84u: goto label_37da84;
        case 0x37da88u: goto label_37da88;
        case 0x37da8cu: goto label_37da8c;
        case 0x37da90u: goto label_37da90;
        case 0x37da94u: goto label_37da94;
        case 0x37da98u: goto label_37da98;
        case 0x37da9cu: goto label_37da9c;
        case 0x37daa0u: goto label_37daa0;
        case 0x37daa4u: goto label_37daa4;
        case 0x37daa8u: goto label_37daa8;
        case 0x37daacu: goto label_37daac;
        case 0x37dab0u: goto label_37dab0;
        case 0x37dab4u: goto label_37dab4;
        case 0x37dab8u: goto label_37dab8;
        case 0x37dabcu: goto label_37dabc;
        case 0x37dac0u: goto label_37dac0;
        case 0x37dac4u: goto label_37dac4;
        case 0x37dac8u: goto label_37dac8;
        case 0x37daccu: goto label_37dacc;
        case 0x37dad0u: goto label_37dad0;
        case 0x37dad4u: goto label_37dad4;
        case 0x37dad8u: goto label_37dad8;
        case 0x37dadcu: goto label_37dadc;
        case 0x37dae0u: goto label_37dae0;
        case 0x37dae4u: goto label_37dae4;
        case 0x37dae8u: goto label_37dae8;
        case 0x37daecu: goto label_37daec;
        case 0x37daf0u: goto label_37daf0;
        case 0x37daf4u: goto label_37daf4;
        case 0x37daf8u: goto label_37daf8;
        case 0x37dafcu: goto label_37dafc;
        case 0x37db00u: goto label_37db00;
        case 0x37db04u: goto label_37db04;
        case 0x37db08u: goto label_37db08;
        case 0x37db0cu: goto label_37db0c;
        case 0x37db10u: goto label_37db10;
        case 0x37db14u: goto label_37db14;
        case 0x37db18u: goto label_37db18;
        case 0x37db1cu: goto label_37db1c;
        case 0x37db20u: goto label_37db20;
        case 0x37db24u: goto label_37db24;
        case 0x37db28u: goto label_37db28;
        case 0x37db2cu: goto label_37db2c;
        case 0x37db30u: goto label_37db30;
        case 0x37db34u: goto label_37db34;
        case 0x37db38u: goto label_37db38;
        case 0x37db3cu: goto label_37db3c;
        case 0x37db40u: goto label_37db40;
        case 0x37db44u: goto label_37db44;
        case 0x37db48u: goto label_37db48;
        case 0x37db4cu: goto label_37db4c;
        case 0x37db50u: goto label_37db50;
        case 0x37db54u: goto label_37db54;
        case 0x37db58u: goto label_37db58;
        case 0x37db5cu: goto label_37db5c;
        case 0x37db60u: goto label_37db60;
        case 0x37db64u: goto label_37db64;
        case 0x37db68u: goto label_37db68;
        case 0x37db6cu: goto label_37db6c;
        case 0x37db70u: goto label_37db70;
        case 0x37db74u: goto label_37db74;
        case 0x37db78u: goto label_37db78;
        case 0x37db7cu: goto label_37db7c;
        case 0x37db80u: goto label_37db80;
        case 0x37db84u: goto label_37db84;
        case 0x37db88u: goto label_37db88;
        case 0x37db8cu: goto label_37db8c;
        case 0x37db90u: goto label_37db90;
        case 0x37db94u: goto label_37db94;
        case 0x37db98u: goto label_37db98;
        case 0x37db9cu: goto label_37db9c;
        case 0x37dba0u: goto label_37dba0;
        case 0x37dba4u: goto label_37dba4;
        case 0x37dba8u: goto label_37dba8;
        case 0x37dbacu: goto label_37dbac;
        case 0x37dbb0u: goto label_37dbb0;
        case 0x37dbb4u: goto label_37dbb4;
        case 0x37dbb8u: goto label_37dbb8;
        case 0x37dbbcu: goto label_37dbbc;
        default: break;
    }

    ctx->pc = 0x37d7a0u;

label_37d7a0:
    // 0x37d7a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_37d7a4:
    // 0x37d7a4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_37d7a8:
    // 0x37d7a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_37d7ac:
    // 0x37d7ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37d7acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37d7b0:
    // 0x37d7b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_37d7b4:
    // 0x37d7b4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_37d7b8:
    // 0x37d7b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_37d7bc:
    // 0x37d7bc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x37d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_37d7c0:
    // 0x37d7c0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x37d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_37d7c4:
    // 0x37d7c4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x37d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_37d7c8:
    // 0x37d7c8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x37d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_37d7cc:
    // 0x37d7cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37d7d0:
    // 0x37d7d0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x37d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_37d7d4:
    // 0x37d7d4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_37d7d8:
    if (ctx->pc == 0x37D7D8u) {
        ctx->pc = 0x37D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D7D4u;
        // 0x37d7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D7DCu;
        goto label_37d7dc;
    }
    ctx->pc = 0x37D7D4u;
    {
        const bool branch_taken_0x37d7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D7D4u;
        // 0x37d7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d7d4) {
            ctx->pc = 0x37D8E0u;
            goto label_37d8e0;
        }
    }
    ctx->pc = 0x37D7DCu;
label_37d7dc:
    // 0x37d7dc: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x37d7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_37d7e0:
    // 0x37d7e0: 0x241e0120  addiu       $fp, $zero, 0x120
    ctx->pc = 0x37d7e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_37d7e4:
    // 0x37d7e4: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x37d7e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_37d7e8:
    // 0x37d7e8: 0x24170024  addiu       $s7, $zero, 0x24
    ctx->pc = 0x37d7e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_37d7ec:
    // 0x37d7ec: 0xbe2018  mult        $a0, $a1, $fp
    ctx->pc = 0x37d7ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37d7f0:
    // 0x37d7f0: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x37d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_37d7f4:
    // 0x37d7f4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x37d7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37d7f8:
    // 0x37d7f8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x37d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_37d7fc:
    // 0x37d7fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_37d800:
    // 0x37d800: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_37d804:
    if (ctx->pc == 0x37D804u) {
        ctx->pc = 0x37D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D800u;
        // 0x37d804: 0x24b60001  addiu       $s6, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D808u;
        goto label_37d808;
    }
    ctx->pc = 0x37D800u;
    {
        const bool branch_taken_0x37d800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D800u;
        // 0x37d804: 0x24b60001  addiu       $s6, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d800) {
            ctx->pc = 0x37D8CCu;
            goto label_37d8cc;
        }
    }
    ctx->pc = 0x37D808u;
label_37d808:
    // 0x37d808: 0xc0c855a  jal         func_321568
label_37d80c:
    if (ctx->pc == 0x37D80Cu) {
        ctx->pc = 0x37D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D808u;
        // 0x37d80c: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D810u;
        goto label_37d810;
    }
    ctx->pc = 0x37D808u;
    SET_GPR_U32(ctx, 31, 0x37D810u);
    ctx->pc = 0x37D80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D808u;
    // 0x37d80c: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321568u, 0x37D808u, 0x37D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D810u;
label_37d810:
    // 0x37d810: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x37d810u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_37d814:
    // 0x37d814: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37d814u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d818:
    // 0x37d818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d81c:
    // 0x37d81c: 0x10000003  b           . + 4 + (0x3 << 2)
label_37d820:
    if (ctx->pc == 0x37D820u) {
        ctx->pc = 0x37D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D81Cu;
        // 0x37d820: 0x26510060  addiu       $s1, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D824u;
        goto label_37d824;
    }
    ctx->pc = 0x37D81Cu;
    {
        const bool branch_taken_0x37d81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D81Cu;
        // 0x37d820: 0x26510060  addiu       $s1, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d81c) {
            ctx->pc = 0x37D82Cu;
            goto label_37d82c;
        }
    }
    ctx->pc = 0x37D824u;
label_37d824:
    // 0x37d824: 0x0  nop
    ctx->pc = 0x37d824u;
    // NOP
label_37d828:
    // 0x37d828: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x37d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_37d82c:
    // 0x37d82c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x37d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_37d830:
    // 0x37d830: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x37d830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37d834:
    // 0x37d834: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37d838:
    if (ctx->pc == 0x37D838u) {
        ctx->pc = 0x37D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D834u;
        // 0x37d838: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D83Cu;
        goto label_37d83c;
    }
    ctx->pc = 0x37D834u;
    {
        const bool branch_taken_0x37d834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D834u;
        // 0x37d838: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d834) {
            ctx->pc = 0x37D87Cu;
            goto label_37d87c;
        }
    }
    ctx->pc = 0x37D83Cu;
label_37d83c:
    // 0x37d83c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x37d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_37d840:
    // 0x37d840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37d844:
    // 0x37d844: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37d848:
    // 0x37d848: 0x1054fff7  beq         $v0, $s4, . + 4 + (-0x9 << 2)
label_37d84c:
    if (ctx->pc == 0x37D84Cu) {
        ctx->pc = 0x37D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D848u;
        // 0x37d84c: 0x572018  mult        $a0, $v0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D850u;
        goto label_37d850;
    }
    ctx->pc = 0x37D848u;
    {
        const bool branch_taken_0x37d848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x37D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D848u;
        // 0x37d84c: 0x572018  mult        $a0, $v0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d848) {
            ctx->pc = 0x37D828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d828;
        }
    }
    ctx->pc = 0x37D850u;
label_37d850:
    // 0x37d850: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x37d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_37d854:
    // 0x37d854: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x37d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_37d858:
    // 0x37d858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37d858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37d85c:
    // 0x37d85c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x37d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_37d860:
    // 0x37d860: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37d860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_37d864:
    // 0x37d864: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_37d868:
    if (ctx->pc == 0x37D868u) {
        ctx->pc = 0x37D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D864u;
        // 0x37d868: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D86Cu;
        goto label_37d86c;
    }
    ctx->pc = 0x37D864u;
    {
        const bool branch_taken_0x37d864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D864u;
        // 0x37d868: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d864) {
            ctx->pc = 0x37D82Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d82c;
        }
    }
    ctx->pc = 0x37D86Cu;
label_37d86c:
    // 0x37d86c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37d870:
    // 0x37d870: 0xc0de61a  jal         func_379868
label_37d874:
    if (ctx->pc == 0x37D874u) {
        ctx->pc = 0x37D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D870u;
        // 0x37d874: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D878u;
        goto label_37d878;
    }
    ctx->pc = 0x37D870u;
    SET_GPR_U32(ctx, 31, 0x37D878u);
    ctx->pc = 0x37D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D870u;
    // 0x37d874: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x37D870u, 0x37D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D878u;
label_37d878:
    // 0x37d878: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37d878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d87c:
    // 0x37d87c: 0xc0c855a  jal         func_321568
label_37d880:
    if (ctx->pc == 0x37D880u) {
        ctx->pc = 0x37D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D87Cu;
        // 0x37d880: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D884u;
        goto label_37d884;
    }
    ctx->pc = 0x37D87Cu;
    SET_GPR_U32(ctx, 31, 0x37D884u);
    ctx->pc = 0x37D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D87Cu;
    // 0x37d880: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321568u, 0x37D87Cu, 0x37D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D884u;
label_37d884:
    // 0x37d884: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x37d884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_37d888:
    // 0x37d888: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37d88c:
    // 0x37d88c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37d890:
    // 0x37d890: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x37d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_37d894:
    // 0x37d894: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x37d894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37d898:
    // 0x37d898: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_37d89c:
    if (ctx->pc == 0x37D89Cu) {
        ctx->pc = 0x37D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D898u;
        // 0x37d89c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D8A0u;
        goto label_37d8a0;
    }
    ctx->pc = 0x37D898u;
    {
        const bool branch_taken_0x37d898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D898u;
        // 0x37d89c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d898) {
            ctx->pc = 0x37D8A8u;
            goto label_37d8a8;
        }
    }
    ctx->pc = 0x37D8A0u;
label_37d8a0:
    // 0x37d8a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_37d8a4:
    if (ctx->pc == 0x37D8A4u) {
        ctx->pc = 0x37D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8A0u;
        // 0x37d8a4: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D8A8u;
        goto label_37d8a8;
    }
    ctx->pc = 0x37D8A0u;
    {
        const bool branch_taken_0x37d8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8A0u;
        // 0x37d8a4: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d8a0) {
            ctx->pc = 0x37D8B4u;
            goto label_37d8b4;
        }
    }
    ctx->pc = 0x37D8A8u;
label_37d8a8:
    // 0x37d8a8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x37d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_37d8ac:
    // 0x37d8ac: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x37d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_37d8b0:
    // 0x37d8b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37d8b4:
    // 0x37d8b4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x37d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_37d8b8:
    // 0x37d8b8: 0x8e07010c  lw          $a3, 0x10C($s0)
    ctx->pc = 0x37d8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_37d8bc:
    // 0x37d8bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37d8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37d8c0:
    // 0x37d8c0: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x37d8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_37d8c4:
    // 0x37d8c4: 0xc0e0722  jal         func_381C88
label_37d8c8:
    if (ctx->pc == 0x37D8C8u) {
        ctx->pc = 0x37D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8C4u;
        // 0x37d8c8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D8CCu;
        goto label_37d8cc;
    }
    ctx->pc = 0x37D8C4u;
    SET_GPR_U32(ctx, 31, 0x37D8CCu);
    ctx->pc = 0x37D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D8C4u;
    // 0x37d8c8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C88u, 0x37D8C4u, 0x37D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D8CCu;
label_37d8cc:
    // 0x37d8cc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x37d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_37d8d0:
    // 0x37d8d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37d8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37d8d4:
    // 0x37d8d4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x37d8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37d8d8:
    // 0x37d8d8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_37d8dc:
    if (ctx->pc == 0x37D8DCu) {
        ctx->pc = 0x37D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8D8u;
        // 0x37d8dc: 0xbe2018  mult        $a0, $a1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D8E0u;
        goto label_37d8e0;
    }
    ctx->pc = 0x37D8D8u;
    {
        const bool branch_taken_0x37d8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8D8u;
        // 0x37d8dc: 0xbe2018  mult        $a0, $a1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d8d8) {
            ctx->pc = 0x37D7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d7f0;
        }
    }
    ctx->pc = 0x37D8E0u;
label_37d8e0:
    // 0x37d8e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37d8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37d8e4:
    // 0x37d8e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x37d8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37d8e8:
    // 0x37d8e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x37d8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37d8ec:
    // 0x37d8ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x37d8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37d8f0:
    // 0x37d8f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x37d8f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37d8f4:
    // 0x37d8f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37d8f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37d8f8:
    // 0x37d8f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x37d8f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37d8fc:
    // 0x37d8fc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x37d8fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37d900:
    // 0x37d900: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x37d900u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37d904:
    // 0x37d904: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x37d904u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37d908:
    // 0x37d908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37d90c:
    // 0x37d90c: 0x3e00008  jr          $ra
label_37d910:
    if (ctx->pc == 0x37D910u) {
        ctx->pc = 0x37D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D90Cu;
        // 0x37d910: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D914u;
        goto label_37d914;
    }
    ctx->pc = 0x37D90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D90Cu;
        // 0x37d910: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D914u;
label_37d914:
    // 0x37d914: 0x0  nop
    ctx->pc = 0x37d914u;
    // NOP
label_37d918:
    // 0x37d918: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37d918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_37d91c:
    // 0x37d91c: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x37d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_37d920:
    // 0x37d920: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_37d924:
    // 0x37d924: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37d924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37d928:
    // 0x37d928: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37d928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37d92c:
    // 0x37d92c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x37d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_37d930:
    // 0x37d930: 0x242a818  mult        $s5, $s2, $v0
    ctx->pc = 0x37d930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_37d934:
    // 0x37d934: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x37d934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_37d938:
    // 0x37d938: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_37d93c:
    // 0x37d93c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x37d93cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37d940:
    // 0x37d940: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x37d940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_37d944:
    // 0x37d944: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_37d948:
    // 0x37d948: 0x2c2a018  mult        $s4, $s6, $v0
    ctx->pc = 0x37d948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_37d94c:
    // 0x37d94c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_37d950:
    // 0x37d950: 0x26b30094  addiu       $s3, $s5, 0x94
    ctx->pc = 0x37d950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
label_37d954:
    // 0x37d954: 0x122300  sll         $a0, $s2, 12
    ctx->pc = 0x37d954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
label_37d958:
    // 0x37d958: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37d958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37d95c:
    // 0x37d95c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x37d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_37d960:
    // 0x37d960: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_37d964:
    // 0x37d964: 0x34a5001c  ori         $a1, $a1, 0x1C
    ctx->pc = 0x37d964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28);
label_37d968:
    // 0x37d968: 0x2748021  addu        $s0, $s3, $s4
    ctx->pc = 0x37d968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_37d96c:
    // 0x37d96c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x37d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_37d970:
    // 0x37d970: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x37d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_37d974:
    // 0x37d974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37d978:
    // 0x37d978: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x37d978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_37d97c:
    // 0x37d97c: 0x40f809  jalr        $v0
label_37d980:
    if (ctx->pc == 0x37D980u) {
        ctx->pc = 0x37D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D97Cu;
        // 0x37d980: 0x12b980  sll         $s7, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D984u;
        goto label_37d984;
    }
    ctx->pc = 0x37D97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D984u);
        ctx->pc = 0x37D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D97Cu;
        // 0x37d980: 0x12b980  sll         $s7, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D97Cu, 0x37D984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D984u;
label_37d984:
    // 0x37d984: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37d984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d988:
    // 0x37d988: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
label_37d98c:
    if (ctx->pc == 0x37D98Cu) {
        ctx->pc = 0x37D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D988u;
        // 0x37d98c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D990u;
        goto label_37d990;
    }
    ctx->pc = 0x37D988u;
    {
        const bool branch_taken_0x37d988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D988u;
        // 0x37d98c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d988) {
            ctx->pc = 0x37DB68u;
            goto label_37db68;
        }
    }
    ctx->pc = 0x37D990u;
label_37d990:
    // 0x37d990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37d994:
    // 0x37d994: 0xc0bb7e6  jal         func_2EDF98
label_37d998:
    if (ctx->pc == 0x37D998u) {
        ctx->pc = 0x37D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D994u;
        // 0x37d998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D99Cu;
        goto label_37d99c;
    }
    ctx->pc = 0x37D994u;
    SET_GPR_U32(ctx, 31, 0x37D99Cu);
    ctx->pc = 0x37D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D994u;
    // 0x37d998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37D994u, 0x37D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D99Cu;
label_37d99c:
    // 0x37d99c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x37d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_37d9a0:
    // 0x37d9a0: 0x262200a3  addiu       $v0, $s1, 0xA3
    ctx->pc = 0x37d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 163));
label_37d9a4:
    // 0x37d9a4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x37d9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_37d9a8:
    // 0x37d9a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x37d9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37d9ac:
    // 0x37d9ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x37d9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_37d9b0:
    // 0x37d9b0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x37d9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_37d9b4:
    // 0x37d9b4: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x37d9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37d9b8:
    // 0x37d9b8: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x37d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_37d9bc:
    // 0x37d9bc: 0xc0bb7e6  jal         func_2EDF98
label_37d9c0:
    if (ctx->pc == 0x37D9C0u) {
        ctx->pc = 0x37D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9BCu;
        // 0x37d9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D9C4u;
        goto label_37d9c4;
    }
    ctx->pc = 0x37D9BCu;
    SET_GPR_U32(ctx, 31, 0x37D9C4u);
    ctx->pc = 0x37D9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D9BCu;
    // 0x37d9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37D9BCu, 0x37D9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D9C4u;
label_37d9c4:
    // 0x37d9c4: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
label_37d9c8:
    if (ctx->pc == 0x37D9C8u) {
        ctx->pc = 0x37D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9C4u;
        // 0x37d9c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D9CCu;
        goto label_37d9cc;
    }
    ctx->pc = 0x37D9C4u;
    {
        const bool branch_taken_0x37d9c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9C4u;
        // 0x37d9c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d9c4) {
            ctx->pc = 0x37DA70u;
            goto label_37da70;
        }
    }
    ctx->pc = 0x37D9CCu;
label_37d9cc:
    // 0x37d9cc: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x37d9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_37d9d0:
    // 0x37d9d0: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x37d9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_37d9d4:
    // 0x37d9d4: 0x32450003  andi        $a1, $s2, 0x3
    ctx->pc = 0x37d9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_37d9d8:
    // 0x37d9d8: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
label_37d9dc:
    if (ctx->pc == 0x37D9DCu) {
        ctx->pc = 0x37D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9D8u;
        // 0x37d9dc: 0x24e30104  addiu       $v1, $a3, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D9E0u;
        goto label_37d9e0;
    }
    ctx->pc = 0x37D9D8u;
    {
        const bool branch_taken_0x37d9d8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x37D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9D8u;
        // 0x37d9dc: 0x24e30104  addiu       $v1, $a3, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d9d8) {
            ctx->pc = 0x37DA20u;
            goto label_37da20;
        }
    }
    ctx->pc = 0x37D9E0u;
label_37d9e0:
    // 0x37d9e0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_37d9e4:
    if (ctx->pc == 0x37D9E4u) {
        ctx->pc = 0x37D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9E0u;
        // 0x37d9e4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D9E8u;
        goto label_37d9e8;
    }
    ctx->pc = 0x37D9E0u;
    {
        const bool branch_taken_0x37d9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9E0u;
        // 0x37d9e4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d9e0) {
            ctx->pc = 0x37DA40u;
            goto label_37da40;
        }
    }
    ctx->pc = 0x37D9E8u;
label_37d9e8:
    // 0x37d9e8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x37d9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_37d9ec:
    // 0x37d9ec: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_37d9f0:
    if (ctx->pc == 0x37D9F0u) {
        ctx->pc = 0x37D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9ECu;
        // 0x37d9f0: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D9F4u;
        goto label_37d9f4;
    }
    ctx->pc = 0x37D9ECu;
    {
        const bool branch_taken_0x37d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d9ec) {
            ctx->pc = 0x37D9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D9ECu;
            // 0x37d9f0: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DA24u;
            goto label_37da24;
        }
    }
    ctx->pc = 0x37D9F4u;
label_37d9f4:
    // 0x37d9f4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x37d9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_37d9f8:
    // 0x37d9f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_37d9fc:
    if (ctx->pc == 0x37D9FCu) {
        ctx->pc = 0x37D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9F8u;
        // 0x37d9fc: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DA00u;
        goto label_37da00;
    }
    ctx->pc = 0x37D9F8u;
    {
        const bool branch_taken_0x37d9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d9f8) {
            ctx->pc = 0x37D9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D9F8u;
            // 0x37d9fc: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DA14u;
            goto label_37da14;
        }
    }
    ctx->pc = 0x37DA00u;
label_37da00:
    // 0x37da00: 0xacf00104  sw          $s0, 0x104($a3)
    ctx->pc = 0x37da00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 260), GPR_U32(ctx, 16));
label_37da04:
    // 0x37da04: 0x24e30224  addiu       $v1, $a3, 0x224
    ctx->pc = 0x37da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 548));
label_37da08:
    // 0x37da08: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x37da08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_37da0c:
    // 0x37da0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37da10:
    // 0x37da10: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x37da10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_37da14:
    // 0x37da14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37da18:
    // 0x37da18: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x37da18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_37da1c:
    // 0x37da1c: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x37da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_37da20:
    // 0x37da20: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x37da20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_37da24:
    // 0x37da24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37da28:
    // 0x37da28: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x37da28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_37da2c:
    // 0x37da2c: 0x92282b  sltu        $a1, $a0, $s2
    ctx->pc = 0x37da2cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_37da30:
    // 0x37da30: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_37da34:
    if (ctx->pc == 0x37DA34u) {
        ctx->pc = 0x37DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA30u;
        // 0x37da34: 0x24630120  addiu       $v1, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DA38u;
        goto label_37da38;
    }
    ctx->pc = 0x37DA30u;
    {
        const bool branch_taken_0x37da30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA30u;
        // 0x37da34: 0x24630120  addiu       $v1, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da30) {
            ctx->pc = 0x37DA70u;
            goto label_37da70;
        }
    }
    ctx->pc = 0x37DA38u;
label_37da38:
    // 0x37da38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x37da38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37da3c:
    // 0x37da3c: 0x0  nop
    ctx->pc = 0x37da3cu;
    // NOP
label_37da40:
    // 0x37da40: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x37da40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_37da44:
    // 0x37da44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x37da44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_37da48:
    // 0x37da48: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x37da48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_37da4c:
    // 0x37da4c: 0x92282b  sltu        $a1, $a0, $s2
    ctx->pc = 0x37da4cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_37da50:
    // 0x37da50: 0xac500120  sw          $s0, 0x120($v0)
    ctx->pc = 0x37da50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 16));
label_37da54:
    // 0x37da54: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x37da54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_37da58:
    // 0x37da58: 0xac500240  sw          $s0, 0x240($v0)
    ctx->pc = 0x37da58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 16));
label_37da5c:
    // 0x37da5c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x37da5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_37da60:
    // 0x37da60: 0xac500360  sw          $s0, 0x360($v0)
    ctx->pc = 0x37da60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 864), GPR_U32(ctx, 16));
label_37da64:
    // 0x37da64: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x37da64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_37da68:
    // 0x37da68: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_37da6c:
    if (ctx->pc == 0x37DA6Cu) {
        ctx->pc = 0x37DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA68u;
        // 0x37da6c: 0x24420480  addiu       $v0, $v0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DA70u;
        goto label_37da70;
    }
    ctx->pc = 0x37DA68u;
    {
        const bool branch_taken_0x37da68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA68u;
        // 0x37da6c: 0x24420480  addiu       $v0, $v0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da68) {
            ctx->pc = 0x37DA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37da40;
        }
    }
    ctx->pc = 0x37DA70u;
label_37da70:
    // 0x37da70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_37da74:
    // 0x37da74: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x37da74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_37da78:
    // 0x37da78: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x37da78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_37da7c:
    // 0x37da7c: 0xae370068  sw          $s7, 0x68($s1)
    ctx->pc = 0x37da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 23));
label_37da80:
    // 0x37da80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37da80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_37da84:
    // 0x37da84: 0xae300060  sw          $s0, 0x60($s1)
    ctx->pc = 0x37da84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
label_37da88:
    // 0x37da88: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x37da88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_37da8c:
    // 0x37da8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37da8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37da90:
    // 0x37da90: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x37da90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_37da94:
    // 0x37da94: 0xc0df7d8  jal         func_37DF60
label_37da98:
    if (ctx->pc == 0x37DA98u) {
        ctx->pc = 0x37DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA94u;
        // 0x37da98: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DA9Cu;
        goto label_37da9c;
    }
    ctx->pc = 0x37DA94u;
    SET_GPR_U32(ctx, 31, 0x37DA9Cu);
    ctx->pc = 0x37DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DA94u;
    // 0x37da98: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF60u, 0x37DA94u, 0x37DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DA9Cu;
label_37da9c:
    // 0x37da9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37da9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37daa0:
    // 0x37daa0: 0xc0df6f0  jal         func_37DBC0
label_37daa4:
    if (ctx->pc == 0x37DAA4u) {
        ctx->pc = 0x37DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAA0u;
        // 0x37daa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DAA8u;
        goto label_37daa8;
    }
    ctx->pc = 0x37DAA0u;
    SET_GPR_U32(ctx, 31, 0x37DAA8u);
    ctx->pc = 0x37DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DAA0u;
    // 0x37daa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DBC0u, 0x37DAA0u, 0x37DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DAA8u;
label_37daa8:
    // 0x37daa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37daa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37daac:
    // 0x37daac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37daacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_37dab0:
    // 0x37dab0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_37dab4:
    // 0x37dab4: 0x2463e068  addiu       $v1, $v1, -0x1F98
    ctx->pc = 0x37dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959208));
label_37dab8:
    // 0x37dab8: 0x2442f008  addiu       $v0, $v0, -0xFF8
    ctx->pc = 0x37dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
label_37dabc:
    // 0x37dabc: 0xae36000c  sw          $s6, 0xC($s1)
    ctx->pc = 0x37dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 22));
label_37dac0:
    // 0x37dac0: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x37dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_37dac4:
    // 0x37dac4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37dac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37dac8:
    // 0x37dac8: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x37dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_37dacc:
    // 0x37dacc: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_37dad0:
    if (ctx->pc == 0x37DAD0u) {
        ctx->pc = 0x37DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DACCu;
        // 0x37dad0: 0xae320010  sw          $s2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DAD4u;
        goto label_37dad4;
    }
    ctx->pc = 0x37DACCu;
    {
        const bool branch_taken_0x37dacc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DACCu;
        // 0x37dad0: 0xae320010  sw          $s2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dacc) {
            ctx->pc = 0x37DB58u;
            goto label_37db58;
        }
    }
    ctx->pc = 0x37DAD4u;
label_37dad4:
    // 0x37dad4: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x37dad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_37dad8:
    // 0x37dad8: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x37dad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_37dadc:
    // 0x37dadc: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_37dae0:
    if (ctx->pc == 0x37DAE0u) {
        ctx->pc = 0x37DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DADCu;
        // 0x37dae0: 0x24c50100  addiu       $a1, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DAE4u;
        goto label_37dae4;
    }
    ctx->pc = 0x37DADCu;
    {
        const bool branch_taken_0x37dadc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x37DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DADCu;
        // 0x37dae0: 0x24c50100  addiu       $a1, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dadc) {
            ctx->pc = 0x37DB1Cu;
            goto label_37db1c;
        }
    }
    ctx->pc = 0x37DAE4u;
label_37dae4:
    // 0x37dae4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_37dae8:
    if (ctx->pc == 0x37DAE8u) {
        ctx->pc = 0x37DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAE4u;
        // 0x37dae8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DAECu;
        goto label_37daec;
    }
    ctx->pc = 0x37DAE4u;
    {
        const bool branch_taken_0x37dae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAE4u;
        // 0x37dae8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dae4) {
            ctx->pc = 0x37DB38u;
            goto label_37db38;
        }
    }
    ctx->pc = 0x37DAECu;
label_37daec:
    // 0x37daec: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x37daecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_37daf0:
    // 0x37daf0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_37daf4:
    if (ctx->pc == 0x37DAF4u) {
        ctx->pc = 0x37DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAF0u;
        // 0x37daf4: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DAF8u;
        goto label_37daf8;
    }
    ctx->pc = 0x37DAF0u;
    {
        const bool branch_taken_0x37daf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37daf0) {
            ctx->pc = 0x37DAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DAF0u;
            // 0x37daf4: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DB20u;
            goto label_37db20;
        }
    }
    ctx->pc = 0x37DAF8u;
label_37daf8:
    // 0x37daf8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37daf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_37dafc:
    // 0x37dafc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_37db00:
    if (ctx->pc == 0x37DB00u) {
        ctx->pc = 0x37DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAFCu;
        // 0x37db00: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DB04u;
        goto label_37db04;
    }
    ctx->pc = 0x37DAFCu;
    {
        const bool branch_taken_0x37dafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37dafc) {
            ctx->pc = 0x37DB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DAFCu;
            // 0x37db00: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DB14u;
            goto label_37db14;
        }
    }
    ctx->pc = 0x37DB04u;
label_37db04:
    // 0x37db04: 0xacd10100  sw          $s1, 0x100($a2)
    ctx->pc = 0x37db04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 17));
label_37db08:
    // 0x37db08: 0x24c50220  addiu       $a1, $a2, 0x220
    ctx->pc = 0x37db08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
label_37db0c:
    // 0x37db0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37db10:
    // 0x37db10: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x37db10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
label_37db14:
    // 0x37db14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37db18:
    // 0x37db18: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x37db18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_37db1c:
    // 0x37db1c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x37db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
label_37db20:
    // 0x37db20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37db24:
    // 0x37db24: 0x92182b  sltu        $v1, $a0, $s2
    ctx->pc = 0x37db24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_37db28:
    // 0x37db28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_37db2c:
    if (ctx->pc == 0x37DB2Cu) {
        ctx->pc = 0x37DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB28u;
        // 0x37db2c: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DB30u;
        goto label_37db30;
    }
    ctx->pc = 0x37DB28u;
    {
        const bool branch_taken_0x37db28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB28u;
        // 0x37db2c: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db28) {
            ctx->pc = 0x37DB58u;
            goto label_37db58;
        }
    }
    ctx->pc = 0x37DB30u;
label_37db30:
    // 0x37db30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x37db30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37db34:
    // 0x37db34: 0x0  nop
    ctx->pc = 0x37db34u;
    // NOP
label_37db38:
    // 0x37db38: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x37db38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_37db3c:
    // 0x37db3c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x37db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_37db40:
    // 0x37db40: 0xac510120  sw          $s1, 0x120($v0)
    ctx->pc = 0x37db40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 17));
label_37db44:
    // 0x37db44: 0x92182b  sltu        $v1, $a0, $s2
    ctx->pc = 0x37db44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_37db48:
    // 0x37db48: 0xac510240  sw          $s1, 0x240($v0)
    ctx->pc = 0x37db48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 17));
label_37db4c:
    // 0x37db4c: 0xac510360  sw          $s1, 0x360($v0)
    ctx->pc = 0x37db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 864), GPR_U32(ctx, 17));
label_37db50:
    // 0x37db50: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_37db54:
    if (ctx->pc == 0x37DB54u) {
        ctx->pc = 0x37DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB50u;
        // 0x37db54: 0x24420480  addiu       $v0, $v0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DB58u;
        goto label_37db58;
    }
    ctx->pc = 0x37DB50u;
    {
        const bool branch_taken_0x37db50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB50u;
        // 0x37db54: 0x24420480  addiu       $v0, $v0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db50) {
            ctx->pc = 0x37DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37db38;
        }
    }
    ctx->pc = 0x37DB58u;
label_37db58:
    // 0x37db58: 0xc0e058a  jal         func_381628
label_37db5c:
    if (ctx->pc == 0x37DB5Cu) {
        ctx->pc = 0x37DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB58u;
        // 0x37db5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DB60u;
        goto label_37db60;
    }
    ctx->pc = 0x37DB58u;
    SET_GPR_U32(ctx, 31, 0x37DB60u);
    ctx->pc = 0x37DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB58u;
    // 0x37db5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381628u, 0x37DB58u, 0x37DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB60u;
label_37db60:
    // 0x37db60: 0x1000000b  b           . + 4 + (0xB << 2)
label_37db64:
    if (ctx->pc == 0x37DB64u) {
        ctx->pc = 0x37DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB60u;
        // 0x37db64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DB68u;
        goto label_37db68;
    }
    ctx->pc = 0x37DB60u;
    {
        const bool branch_taken_0x37db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB60u;
        // 0x37db64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db60) {
            ctx->pc = 0x37DB90u;
            goto label_37db90;
        }
    }
    ctx->pc = 0x37DB68u;
label_37db68:
    // 0x37db68: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x37db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_37db6c:
    // 0x37db6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37db70:
    // 0x37db70: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x37db70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_37db74:
    // 0x37db74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37db74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37db78:
    // 0x37db78: 0xc1035f6  jal         func_40D7D8
label_37db7c:
    if (ctx->pc == 0x37DB7Cu) {
        ctx->pc = 0x37DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB78u;
        // 0x37db7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DB80u;
        goto label_37db80;
    }
    ctx->pc = 0x37DB78u;
    SET_GPR_U32(ctx, 31, 0x37DB80u);
    ctx->pc = 0x37DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB78u;
    // 0x37db7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37DB78u, 0x37DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB80u;
label_37db80:
    // 0x37db80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37db80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37db84:
    // 0x37db84: 0xc103628  jal         func_40D8A0
label_37db88:
    if (ctx->pc == 0x37DB88u) {
        ctx->pc = 0x37DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB84u;
        // 0x37db88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DB8Cu;
        goto label_37db8c;
    }
    ctx->pc = 0x37DB84u;
    SET_GPR_U32(ctx, 31, 0x37DB8Cu);
    ctx->pc = 0x37DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB84u;
    // 0x37db88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37DB84u, 0x37DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB8Cu;
label_37db8c:
    // 0x37db8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37db8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37db90:
    // 0x37db90: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x37db90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37db94:
    // 0x37db94: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x37db94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37db98:
    // 0x37db98: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x37db98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37db9c:
    // 0x37db9c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x37db9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37dba0:
    // 0x37dba0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37dba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37dba4:
    // 0x37dba4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x37dba4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37dba8:
    // 0x37dba8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x37dba8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37dbac:
    // 0x37dbac: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x37dbacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37dbb0:
    // 0x37dbb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37dbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37dbb4:
    // 0x37dbb4: 0x3e00008  jr          $ra
label_37dbb8:
    if (ctx->pc == 0x37DBB8u) {
        ctx->pc = 0x37DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DBB4u;
        // 0x37dbb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DBBCu;
        goto label_37dbbc;
    }
    ctx->pc = 0x37DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DBB4u;
        // 0x37dbb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DBBCu;
label_37dbbc:
    // 0x37dbbc: 0x0  nop
    ctx->pc = 0x37dbbcu;
    // NOP
    ctx->pc = 0x37dbc0u;
}
