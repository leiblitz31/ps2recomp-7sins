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

// Function: sub_00322F40
// Address: 0x322f40 - 0x323230
void sub_00322F40_0x322f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322F40_0x322f40");
#endif

    switch (ctx->pc) {
        case 0x322f40u: goto label_322f40;
        case 0x322f44u: goto label_322f44;
        case 0x322f48u: goto label_322f48;
        case 0x322f4cu: goto label_322f4c;
        case 0x322f50u: goto label_322f50;
        case 0x322f54u: goto label_322f54;
        case 0x322f58u: goto label_322f58;
        case 0x322f5cu: goto label_322f5c;
        case 0x322f60u: goto label_322f60;
        case 0x322f64u: goto label_322f64;
        case 0x322f68u: goto label_322f68;
        case 0x322f6cu: goto label_322f6c;
        case 0x322f70u: goto label_322f70;
        case 0x322f74u: goto label_322f74;
        case 0x322f78u: goto label_322f78;
        case 0x322f7cu: goto label_322f7c;
        case 0x322f80u: goto label_322f80;
        case 0x322f84u: goto label_322f84;
        case 0x322f88u: goto label_322f88;
        case 0x322f8cu: goto label_322f8c;
        case 0x322f90u: goto label_322f90;
        case 0x322f94u: goto label_322f94;
        case 0x322f98u: goto label_322f98;
        case 0x322f9cu: goto label_322f9c;
        case 0x322fa0u: goto label_322fa0;
        case 0x322fa4u: goto label_322fa4;
        case 0x322fa8u: goto label_322fa8;
        case 0x322facu: goto label_322fac;
        case 0x322fb0u: goto label_322fb0;
        case 0x322fb4u: goto label_322fb4;
        case 0x322fb8u: goto label_322fb8;
        case 0x322fbcu: goto label_322fbc;
        case 0x322fc0u: goto label_322fc0;
        case 0x322fc4u: goto label_322fc4;
        case 0x322fc8u: goto label_322fc8;
        case 0x322fccu: goto label_322fcc;
        case 0x322fd0u: goto label_322fd0;
        case 0x322fd4u: goto label_322fd4;
        case 0x322fd8u: goto label_322fd8;
        case 0x322fdcu: goto label_322fdc;
        case 0x322fe0u: goto label_322fe0;
        case 0x322fe4u: goto label_322fe4;
        case 0x322fe8u: goto label_322fe8;
        case 0x322fecu: goto label_322fec;
        case 0x322ff0u: goto label_322ff0;
        case 0x322ff4u: goto label_322ff4;
        case 0x322ff8u: goto label_322ff8;
        case 0x322ffcu: goto label_322ffc;
        case 0x323000u: goto label_323000;
        case 0x323004u: goto label_323004;
        case 0x323008u: goto label_323008;
        case 0x32300cu: goto label_32300c;
        case 0x323010u: goto label_323010;
        case 0x323014u: goto label_323014;
        case 0x323018u: goto label_323018;
        case 0x32301cu: goto label_32301c;
        case 0x323020u: goto label_323020;
        case 0x323024u: goto label_323024;
        case 0x323028u: goto label_323028;
        case 0x32302cu: goto label_32302c;
        case 0x323030u: goto label_323030;
        case 0x323034u: goto label_323034;
        case 0x323038u: goto label_323038;
        case 0x32303cu: goto label_32303c;
        case 0x323040u: goto label_323040;
        case 0x323044u: goto label_323044;
        case 0x323048u: goto label_323048;
        case 0x32304cu: goto label_32304c;
        case 0x323050u: goto label_323050;
        case 0x323054u: goto label_323054;
        case 0x323058u: goto label_323058;
        case 0x32305cu: goto label_32305c;
        case 0x323060u: goto label_323060;
        case 0x323064u: goto label_323064;
        case 0x323068u: goto label_323068;
        case 0x32306cu: goto label_32306c;
        case 0x323070u: goto label_323070;
        case 0x323074u: goto label_323074;
        case 0x323078u: goto label_323078;
        case 0x32307cu: goto label_32307c;
        case 0x323080u: goto label_323080;
        case 0x323084u: goto label_323084;
        case 0x323088u: goto label_323088;
        case 0x32308cu: goto label_32308c;
        case 0x323090u: goto label_323090;
        case 0x323094u: goto label_323094;
        case 0x323098u: goto label_323098;
        case 0x32309cu: goto label_32309c;
        case 0x3230a0u: goto label_3230a0;
        case 0x3230a4u: goto label_3230a4;
        case 0x3230a8u: goto label_3230a8;
        case 0x3230acu: goto label_3230ac;
        case 0x3230b0u: goto label_3230b0;
        case 0x3230b4u: goto label_3230b4;
        case 0x3230b8u: goto label_3230b8;
        case 0x3230bcu: goto label_3230bc;
        case 0x3230c0u: goto label_3230c0;
        case 0x3230c4u: goto label_3230c4;
        case 0x3230c8u: goto label_3230c8;
        case 0x3230ccu: goto label_3230cc;
        case 0x3230d0u: goto label_3230d0;
        case 0x3230d4u: goto label_3230d4;
        case 0x3230d8u: goto label_3230d8;
        case 0x3230dcu: goto label_3230dc;
        case 0x3230e0u: goto label_3230e0;
        case 0x3230e4u: goto label_3230e4;
        case 0x3230e8u: goto label_3230e8;
        case 0x3230ecu: goto label_3230ec;
        case 0x3230f0u: goto label_3230f0;
        case 0x3230f4u: goto label_3230f4;
        case 0x3230f8u: goto label_3230f8;
        case 0x3230fcu: goto label_3230fc;
        case 0x323100u: goto label_323100;
        case 0x323104u: goto label_323104;
        case 0x323108u: goto label_323108;
        case 0x32310cu: goto label_32310c;
        case 0x323110u: goto label_323110;
        case 0x323114u: goto label_323114;
        case 0x323118u: goto label_323118;
        case 0x32311cu: goto label_32311c;
        case 0x323120u: goto label_323120;
        case 0x323124u: goto label_323124;
        case 0x323128u: goto label_323128;
        case 0x32312cu: goto label_32312c;
        case 0x323130u: goto label_323130;
        case 0x323134u: goto label_323134;
        case 0x323138u: goto label_323138;
        case 0x32313cu: goto label_32313c;
        case 0x323140u: goto label_323140;
        case 0x323144u: goto label_323144;
        case 0x323148u: goto label_323148;
        case 0x32314cu: goto label_32314c;
        case 0x323150u: goto label_323150;
        case 0x323154u: goto label_323154;
        case 0x323158u: goto label_323158;
        case 0x32315cu: goto label_32315c;
        case 0x323160u: goto label_323160;
        case 0x323164u: goto label_323164;
        case 0x323168u: goto label_323168;
        case 0x32316cu: goto label_32316c;
        case 0x323170u: goto label_323170;
        case 0x323174u: goto label_323174;
        case 0x323178u: goto label_323178;
        case 0x32317cu: goto label_32317c;
        case 0x323180u: goto label_323180;
        case 0x323184u: goto label_323184;
        case 0x323188u: goto label_323188;
        case 0x32318cu: goto label_32318c;
        case 0x323190u: goto label_323190;
        case 0x323194u: goto label_323194;
        case 0x323198u: goto label_323198;
        case 0x32319cu: goto label_32319c;
        case 0x3231a0u: goto label_3231a0;
        case 0x3231a4u: goto label_3231a4;
        case 0x3231a8u: goto label_3231a8;
        case 0x3231acu: goto label_3231ac;
        case 0x3231b0u: goto label_3231b0;
        case 0x3231b4u: goto label_3231b4;
        case 0x3231b8u: goto label_3231b8;
        case 0x3231bcu: goto label_3231bc;
        case 0x3231c0u: goto label_3231c0;
        case 0x3231c4u: goto label_3231c4;
        case 0x3231c8u: goto label_3231c8;
        case 0x3231ccu: goto label_3231cc;
        case 0x3231d0u: goto label_3231d0;
        case 0x3231d4u: goto label_3231d4;
        case 0x3231d8u: goto label_3231d8;
        case 0x3231dcu: goto label_3231dc;
        case 0x3231e0u: goto label_3231e0;
        case 0x3231e4u: goto label_3231e4;
        case 0x3231e8u: goto label_3231e8;
        case 0x3231ecu: goto label_3231ec;
        case 0x3231f0u: goto label_3231f0;
        case 0x3231f4u: goto label_3231f4;
        case 0x3231f8u: goto label_3231f8;
        case 0x3231fcu: goto label_3231fc;
        case 0x323200u: goto label_323200;
        case 0x323204u: goto label_323204;
        case 0x323208u: goto label_323208;
        case 0x32320cu: goto label_32320c;
        case 0x323210u: goto label_323210;
        case 0x323214u: goto label_323214;
        case 0x323218u: goto label_323218;
        case 0x32321cu: goto label_32321c;
        case 0x323220u: goto label_323220;
        case 0x323224u: goto label_323224;
        case 0x323228u: goto label_323228;
        case 0x32322cu: goto label_32322c;
        default: break;
    }

    ctx->pc = 0x322f40u;

label_322f40:
    // 0x322f40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x322f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_322f44:
    // 0x322f44: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_322f48:
    // 0x322f48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x322f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_322f4c:
    // 0x322f4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x322f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_322f50:
    // 0x322f50: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x322f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_322f54:
    // 0x322f54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x322f54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322f58:
    // 0x322f58: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x322f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_322f5c:
    // 0x322f5c: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x322f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_322f60:
    // 0x322f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322f64:
    // 0x322f64: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x322f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_322f68:
    // 0x322f68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x322f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_322f6c:
    // 0x322f6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x322f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_322f70:
    // 0x322f70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x322f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_322f74:
    // 0x322f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_322f78:
    // 0x322f78: 0x40f809  jalr        $v0
label_322f7c:
    if (ctx->pc == 0x322F7Cu) {
        ctx->pc = 0x322F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F78u;
        // 0x322f7c: 0x24a59598  addiu       $a1, $a1, -0x6A68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F80u;
        goto label_322f80;
    }
    ctx->pc = 0x322F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322F80u);
        ctx->pc = 0x322F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F78u;
        // 0x322f7c: 0x24a59598  addiu       $a1, $a1, -0x6A68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F78u, 0x322F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322F80u;
label_322f80:
    // 0x322f80: 0x504000a0  beql        $v0, $zero, . + 4 + (0xA0 << 2)
label_322f84:
    if (ctx->pc == 0x322F84u) {
        ctx->pc = 0x322F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F80u;
        // 0x322f84: 0xaea00014  sw          $zero, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F88u;
        goto label_322f88;
    }
    ctx->pc = 0x322F80u;
    {
        const bool branch_taken_0x322f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f80) {
            ctx->pc = 0x322F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322F80u;
            // 0x322f84: 0xaea00014  sw          $zero, 0x14($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323204u;
            goto label_323204;
        }
    }
    ctx->pc = 0x322F88u;
label_322f88:
    // 0x322f88: 0xc0c8ef0  jal         func_323BC0
label_322f8c:
    if (ctx->pc == 0x322F8Cu) {
        ctx->pc = 0x322F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F88u;
        // 0x322f8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F90u;
        goto label_322f90;
    }
    ctx->pc = 0x322F88u;
    SET_GPR_U32(ctx, 31, 0x322F90u);
    ctx->pc = 0x322F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F88u;
    // 0x322f8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC0u, 0x322F88u, 0x322F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F90u;
label_322f90:
    // 0x322f90: 0xc1082ca  jal         func_420B28
label_322f94:
    if (ctx->pc == 0x322F94u) {
        ctx->pc = 0x322F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F90u;
        // 0x322f94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F98u;
        goto label_322f98;
    }
    ctx->pc = 0x322F90u;
    SET_GPR_U32(ctx, 31, 0x322F98u);
    ctx->pc = 0x322F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F90u;
    // 0x322f94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x322F90u, 0x322F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F98u;
label_322f98:
    // 0x322f98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_322f9c:
    if (ctx->pc == 0x322F9Cu) {
        ctx->pc = 0x322F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F98u;
        // 0x322f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FA0u;
        goto label_322fa0;
    }
    ctx->pc = 0x322F98u;
    {
        const bool branch_taken_0x322f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F98u;
        // 0x322f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f98) {
            ctx->pc = 0x322FACu;
            goto label_322fac;
        }
    }
    ctx->pc = 0x322FA0u;
label_322fa0:
    // 0x322fa0: 0xc10828e  jal         func_420A38
label_322fa4:
    if (ctx->pc == 0x322FA4u) {
        ctx->pc = 0x322FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FA0u;
        // 0x322fa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FA8u;
        goto label_322fa8;
    }
    ctx->pc = 0x322FA0u;
    SET_GPR_U32(ctx, 31, 0x322FA8u);
    ctx->pc = 0x322FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FA0u;
    // 0x322fa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A38u, 0x322FA0u, 0x322FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FA8u;
label_322fa8:
    // 0x322fa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322fac:
    // 0x322fac: 0x56200092  bnel        $s1, $zero, . + 4 + (0x92 << 2)
label_322fb0:
    if (ctx->pc == 0x322FB0u) {
        ctx->pc = 0x322FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FACu;
        // 0x322fb0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FB4u;
        goto label_322fb4;
    }
    ctx->pc = 0x322FACu;
    {
        const bool branch_taken_0x322fac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x322fac) {
            ctx->pc = 0x322FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322FACu;
            // 0x322fb0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3231F8u;
            goto label_3231f8;
        }
    }
    ctx->pc = 0x322FB4u;
label_322fb4:
    // 0x322fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322fb8:
    // 0x322fb8: 0xc107fa4  jal         func_41FE90
label_322fbc:
    if (ctx->pc == 0x322FBCu) {
        ctx->pc = 0x322FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FB8u;
        // 0x322fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FC0u;
        goto label_322fc0;
    }
    ctx->pc = 0x322FB8u;
    SET_GPR_U32(ctx, 31, 0x322FC0u);
    ctx->pc = 0x322FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FB8u;
    // 0x322fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x322FB8u, 0x322FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FC0u;
label_322fc0:
    // 0x322fc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322fc4:
    // 0x322fc4: 0x5620008c  bnel        $s1, $zero, . + 4 + (0x8C << 2)
label_322fc8:
    if (ctx->pc == 0x322FC8u) {
        ctx->pc = 0x322FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FC4u;
        // 0x322fc8: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FCCu;
        goto label_322fcc;
    }
    ctx->pc = 0x322FC4u;
    {
        const bool branch_taken_0x322fc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x322fc4) {
            ctx->pc = 0x322FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322FC4u;
            // 0x322fc8: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3231F8u;
            goto label_3231f8;
        }
    }
    ctx->pc = 0x322FCCu;
label_322fcc:
    // 0x322fcc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x322fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_322fd0:
    // 0x322fd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_322fd4:
    if (ctx->pc == 0x322FD4u) {
        ctx->pc = 0x322FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FD0u;
        // 0x322fd4: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FD8u;
        goto label_322fd8;
    }
    ctx->pc = 0x322FD0u;
    {
        const bool branch_taken_0x322fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322fd0) {
            ctx->pc = 0x322FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322FD0u;
            // 0x322fd4: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322FE8u;
            goto label_322fe8;
        }
    }
    ctx->pc = 0x322FD8u;
label_322fd8:
    // 0x322fd8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_322fdc:
    // 0x322fdc: 0x8c43b204  lw          $v1, -0x4DFC($v0)
    ctx->pc = 0x322fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947332)));
label_322fe0:
    // 0x322fe0: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x322fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_322fe4:
    // 0x322fe4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x322fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_322fe8:
    // 0x322fe8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x322fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322fec:
    // 0x322fec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322ff0:
    // 0x322ff0: 0xc10746c  jal         func_41D1B0
label_322ff4:
    if (ctx->pc == 0x322FF4u) {
        ctx->pc = 0x322FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FF0u;
        // 0x322ff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FF8u;
        goto label_322ff8;
    }
    ctx->pc = 0x322FF0u;
    SET_GPR_U32(ctx, 31, 0x322FF8u);
    ctx->pc = 0x322FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FF0u;
    // 0x322ff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x322FF0u, 0x322FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FF8u;
label_322ff8:
    // 0x322ff8: 0xc10820a  jal         func_420828
label_322ffc:
    if (ctx->pc == 0x322FFCu) {
        ctx->pc = 0x322FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FF8u;
        // 0x322ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323000u;
        goto label_323000;
    }
    ctx->pc = 0x322FF8u;
    SET_GPR_U32(ctx, 31, 0x323000u);
    ctx->pc = 0x322FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FF8u;
    // 0x322ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x322FF8u, 0x323000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323000u;
label_323000:
    // 0x323000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323004:
    // 0x323004: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x323004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323008:
    // 0x323008: 0xc10815c  jal         func_420570
label_32300c:
    if (ctx->pc == 0x32300Cu) {
        ctx->pc = 0x32300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323008u;
        // 0x32300c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323010u;
        goto label_323010;
    }
    ctx->pc = 0x323008u;
    SET_GPR_U32(ctx, 31, 0x323010u);
    ctx->pc = 0x32300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323008u;
    // 0x32300c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x323008u, 0x323010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323010u;
label_323010:
    // 0x323010: 0xc1082ca  jal         func_420B28
label_323014:
    if (ctx->pc == 0x323014u) {
        ctx->pc = 0x323018u;
        goto label_323018;
    }
    ctx->pc = 0x323010u;
    SET_GPR_U32(ctx, 31, 0x323018u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x323010u, 0x323018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323018u;
label_323018:
    // 0x323018: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_32301c:
    if (ctx->pc == 0x32301Cu) {
        ctx->pc = 0x32301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323018u;
        // 0x32301c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323020u;
        goto label_323020;
    }
    ctx->pc = 0x323018u;
    {
        const bool branch_taken_0x323018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323018u;
        // 0x32301c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323018) {
            ctx->pc = 0x323038u;
            goto label_323038;
        }
    }
    ctx->pc = 0x323020u;
label_323020:
    // 0x323020: 0xc1082ca  jal         func_420B28
label_323024:
    if (ctx->pc == 0x323024u) {
        ctx->pc = 0x323028u;
        goto label_323028;
    }
    ctx->pc = 0x323020u;
    SET_GPR_U32(ctx, 31, 0x323028u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x323020u, 0x323028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323028u;
label_323028:
    // 0x323028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32302c:
    // 0x32302c: 0xc10826c  jal         func_4209B0
label_323030:
    if (ctx->pc == 0x323030u) {
        ctx->pc = 0x323030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32302Cu;
        // 0x323030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323034u;
        goto label_323034;
    }
    ctx->pc = 0x32302Cu;
    SET_GPR_U32(ctx, 31, 0x323034u);
    ctx->pc = 0x323030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32302Cu;
    // 0x323030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x32302Cu, 0x323034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323034u;
label_323034:
    // 0x323034: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x323034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_323038:
    // 0x323038: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x323038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32303c:
    // 0x32303c: 0x24479590  addiu       $a3, $v0, -0x6A70
    ctx->pc = 0x32303cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
label_323040:
    // 0x323040: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x323040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_323044:
    // 0x323044: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x323044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_323048:
    // 0x323048: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x323048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32304c:
    // 0x32304c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x32304cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_323050:
    // 0x323050: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x323050u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_323054:
    // 0x323054: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x323054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_323058:
    // 0x323058: 0x8e920010  lw          $s2, 0x10($s4)
    ctx->pc = 0x323058u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_32305c:
    // 0x32305c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_323060:
    // 0x323060: 0xc107034  jal         func_41C0D0
label_323064:
    if (ctx->pc == 0x323064u) {
        ctx->pc = 0x323064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323060u;
        // 0x323064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323068u;
        goto label_323068;
    }
    ctx->pc = 0x323060u;
    SET_GPR_U32(ctx, 31, 0x323068u);
    ctx->pc = 0x323064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323060u;
    // 0x323064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x323060u, 0x323068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323068u;
label_323068:
    // 0x323068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x323068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32306c:
    // 0x32306c: 0xc107078  jal         func_41C1E0
label_323070:
    if (ctx->pc == 0x323070u) {
        ctx->pc = 0x323070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32306Cu;
        // 0x323070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323074u;
        goto label_323074;
    }
    ctx->pc = 0x32306Cu;
    SET_GPR_U32(ctx, 31, 0x323074u);
    ctx->pc = 0x323070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32306Cu;
    // 0x323070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x32306Cu, 0x323074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323074u;
label_323074:
    // 0x323074: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x323074u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_323078:
    // 0x323078: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x323078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32307c:
    // 0x32307c: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
label_323080:
    if (ctx->pc == 0x323080u) {
        ctx->pc = 0x323080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32307Cu;
        // 0x323080: 0x8e0f0014  lw          $t7, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323084u;
        goto label_323084;
    }
    ctx->pc = 0x32307Cu;
    {
        const bool branch_taken_0x32307c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x323080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32307Cu;
        // 0x323080: 0x8e0f0014  lw          $t7, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32307c) {
            ctx->pc = 0x3231E0u;
            goto label_3231e0;
        }
    }
    ctx->pc = 0x323084u;
label_323084:
    // 0x323084: 0x6c1018  mult        $v0, $v1, $t4
    ctx->pc = 0x323084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_323088:
    // 0x323088: 0x30680001  andi        $t0, $v1, 0x1
    ctx->pc = 0x323088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_32308c:
    // 0x32308c: 0x2682021  addu        $a0, $s3, $t0
    ctx->pc = 0x32308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_323090:
    // 0x323090: 0x4f3021  addu        $a2, $v0, $t7
    ctx->pc = 0x323090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_323094:
    // 0x323094: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x323094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_323098:
    // 0x323098: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_32309c:
    if (ctx->pc == 0x32309Cu) {
        ctx->pc = 0x32309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323098u;
        // 0x32309c: 0x246b0001  addiu       $t3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230A0u;
        goto label_3230a0;
    }
    ctx->pc = 0x323098u;
    {
        const bool branch_taken_0x323098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323098u;
        // 0x32309c: 0x246b0001  addiu       $t3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323098) {
            ctx->pc = 0x3231D0u;
            goto label_3231d0;
        }
    }
    ctx->pc = 0x3230A0u;
label_3230a0:
    // 0x3230a0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3230a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3230a4:
    // 0x3230a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3230a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3230a8:
    // 0x3230a8: 0x1481023  subu        $v0, $t2, $t0
    ctx->pc = 0x3230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_3230ac:
    // 0x3230ac: 0x10a182a  slt         $v1, $t0, $t2
    ctx->pc = 0x3230acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3230b0:
    // 0x3230b0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3230b4:
    if (ctx->pc == 0x3230B4u) {
        ctx->pc = 0x3230B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230B0u;
        // 0x3230b4: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230B8u;
        goto label_3230b8;
    }
    ctx->pc = 0x3230B0u;
    {
        const bool branch_taken_0x3230b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230B0u;
        // 0x3230b4: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230b0) {
            ctx->pc = 0x323118u;
            goto label_323118;
        }
    }
    ctx->pc = 0x3230B8u;
label_3230b8:
    // 0x3230b8: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_3230bc:
    if (ctx->pc == 0x3230BCu) {
        ctx->pc = 0x3230BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230B8u;
        // 0x3230bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230C0u;
        goto label_3230c0;
    }
    ctx->pc = 0x3230B8u;
    {
        const bool branch_taken_0x3230b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230B8u;
        // 0x3230bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230b8) {
            ctx->pc = 0x323144u;
            goto label_323144;
        }
    }
    ctx->pc = 0x3230C0u;
label_3230c0:
    // 0x3230c0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3230c4:
    if (ctx->pc == 0x3230C4u) {
        ctx->pc = 0x3230C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230C0u;
        // 0x3230c4: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230C8u;
        goto label_3230c8;
    }
    ctx->pc = 0x3230C0u;
    {
        const bool branch_taken_0x3230c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3230C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230C0u;
        // 0x3230c4: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230c0) {
            ctx->pc = 0x32311Cu;
            goto label_32311c;
        }
    }
    ctx->pc = 0x3230C8u;
label_3230c8:
    // 0x3230c8: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3230c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3230cc:
    // 0x3230cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3230d0:
    if (ctx->pc == 0x3230D0u) {
        ctx->pc = 0x3230D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230CCu;
        // 0x3230d0: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230D4u;
        goto label_3230d4;
    }
    ctx->pc = 0x3230CCu;
    {
        const bool branch_taken_0x3230cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3230D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230CCu;
        // 0x3230d0: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230cc) {
            ctx->pc = 0x3230F8u;
            goto label_3230f8;
        }
    }
    ctx->pc = 0x3230D4u;
label_3230d4:
    // 0x3230d4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3230d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3230d8:
    // 0x3230d8: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x3230d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3230dc:
    // 0x3230dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3230dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3230e0:
    // 0x3230e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3230e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3230e4:
    // 0x3230e4: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x3230e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_3230e8:
    // 0x3230e8: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x3230e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_3230ec:
    // 0x3230ec: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x3230ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3230f0:
    // 0x3230f0: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x3230f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3230f4:
    // 0x3230f4: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x3230f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_3230f8:
    // 0x3230f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3230f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3230fc:
    // 0x3230fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3230fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_323100:
    // 0x323100: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x323100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_323104:
    // 0x323104: 0x886e0003  lwl         $t6, 0x3($v1)
    ctx->pc = 0x323104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
label_323108:
    // 0x323108: 0x986e0000  lwr         $t6, 0x0($v1)
    ctx->pc = 0x323108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
label_32310c:
    // 0x32310c: 0xa8ae0003  swl         $t6, 0x3($a1)
    ctx->pc = 0x32310cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_323110:
    // 0x323110: 0xb8ae0000  swr         $t6, 0x0($a1)
    ctx->pc = 0x323110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_323114:
    // 0x323114: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x323114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_323118:
    // 0x323118: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x323118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_32311c:
    // 0x32311c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_323120:
    // 0x323120: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x323120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_323124:
    // 0x323124: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x323124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_323128:
    // 0x323128: 0x88670003  lwl         $a3, 0x3($v1)
    ctx->pc = 0x323128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_32312c:
    // 0x32312c: 0x98670000  lwr         $a3, 0x0($v1)
    ctx->pc = 0x32312cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_323130:
    // 0x323130: 0xa8a70003  swl         $a3, 0x3($a1)
    ctx->pc = 0x323130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_323134:
    // 0x323134: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x323134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_323138:
    // 0x323138: 0xb8a70000  swr         $a3, 0x0($a1)
    ctx->pc = 0x323138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_32313c:
    // 0x32313c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_323140:
    if (ctx->pc == 0x323140u) {
        ctx->pc = 0x323140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32313Cu;
        // 0x323140: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323144u;
        goto label_323144;
    }
    ctx->pc = 0x32313Cu;
    {
        const bool branch_taken_0x32313c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32313Cu;
        // 0x323140: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32313c) {
            ctx->pc = 0x3231D0u;
            goto label_3231d0;
        }
    }
    ctx->pc = 0x323144u;
label_323144:
    // 0x323144: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x323144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_323148:
    // 0x323148: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x323148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_32314c:
    // 0x32314c: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x32314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_323150:
    // 0x323150: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x323150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_323154:
    // 0x323154: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x323154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_323158:
    // 0x323158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x323158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32315c:
    // 0x32315c: 0x3a33821  addu        $a3, $sp, $v1
    ctx->pc = 0x32315cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_323160:
    // 0x323160: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x323160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_323164:
    // 0x323164: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x323164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_323168:
    // 0x323168: 0x88e20003  lwl         $v0, 0x3($a3)
    ctx->pc = 0x323168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_32316c:
    // 0x32316c: 0x98e20000  lwr         $v0, 0x0($a3)
    ctx->pc = 0x32316cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_323170:
    // 0x323170: 0xa9220003  swl         $v0, 0x3($t1)
    ctx->pc = 0x323170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_323174:
    // 0x323174: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x323174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_323178:
    // 0x323178: 0xb9220000  swr         $v0, 0x0($t1)
    ctx->pc = 0x323178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_32317c:
    // 0x32317c: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x32317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_323180:
    // 0x323180: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x323180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_323184:
    // 0x323184: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x323184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_323188:
    // 0x323188: 0x88c20003  lwl         $v0, 0x3($a2)
    ctx->pc = 0x323188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_32318c:
    // 0x32318c: 0x98c20000  lwr         $v0, 0x0($a2)
    ctx->pc = 0x32318cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_323190:
    // 0x323190: 0xa9220007  swl         $v0, 0x7($t1)
    ctx->pc = 0x323190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_323194:
    // 0x323194: 0xb9220004  swr         $v0, 0x4($t1)
    ctx->pc = 0x323194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_323198:
    // 0x323198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x323198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32319c:
    // 0x32319c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x32319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_3231a0:
    // 0x3231a0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3231a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3231a4:
    // 0x3231a4: 0x88ae0003  lwl         $t6, 0x3($a1)
    ctx->pc = 0x3231a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
label_3231a8:
    // 0x3231a8: 0x98ae0000  lwr         $t6, 0x0($a1)
    ctx->pc = 0x3231a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
label_3231ac:
    // 0x3231ac: 0xa92e000b  swl         $t6, 0xB($t1)
    ctx->pc = 0x3231acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3231b0:
    // 0x3231b0: 0xb92e0008  swr         $t6, 0x8($t1)
    ctx->pc = 0x3231b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3231b4:
    // 0x3231b4: 0x88470003  lwl         $a3, 0x3($v0)
    ctx->pc = 0x3231b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_3231b8:
    // 0x3231b8: 0x98470000  lwr         $a3, 0x0($v0)
    ctx->pc = 0x3231b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_3231bc:
    // 0x3231bc: 0xa927000f  swl         $a3, 0xF($t1)
    ctx->pc = 0x3231bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3231c0:
    // 0x3231c0: 0xb927000c  swr         $a3, 0xC($t1)
    ctx->pc = 0x3231c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3231c4:
    // 0x3231c4: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3231c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_3231c8:
    // 0x3231c8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_3231cc:
    if (ctx->pc == 0x3231CCu) {
        ctx->pc = 0x3231CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231C8u;
        // 0x3231cc: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231D0u;
        goto label_3231d0;
    }
    ctx->pc = 0x3231C8u;
    {
        const bool branch_taken_0x3231c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3231CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231C8u;
        // 0x3231cc: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231c8) {
            ctx->pc = 0x323148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323148;
        }
    }
    ctx->pc = 0x3231D0u;
label_3231d0:
    // 0x3231d0: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x3231d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3231d4:
    // 0x3231d4: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x3231d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3231d8:
    // 0x3231d8: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_3231dc:
    if (ctx->pc == 0x3231DCu) {
        ctx->pc = 0x3231DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231D8u;
        // 0x3231dc: 0x6c1018  mult        $v0, $v1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231E0u;
        goto label_3231e0;
    }
    ctx->pc = 0x3231D8u;
    {
        const bool branch_taken_0x3231d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3231DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231D8u;
        // 0x3231dc: 0x6c1018  mult        $v0, $v1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231d8) {
            ctx->pc = 0x323088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323088;
        }
    }
    ctx->pc = 0x3231E0u;
label_3231e0:
    // 0x3231e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3231e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3231e4:
    // 0x3231e4: 0xc1073c2  jal         func_41CF08
label_3231e8:
    if (ctx->pc == 0x3231E8u) {
        ctx->pc = 0x3231E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231E4u;
        // 0x3231e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231ECu;
        goto label_3231ec;
    }
    ctx->pc = 0x3231E4u;
    SET_GPR_U32(ctx, 31, 0x3231ECu);
    ctx->pc = 0x3231E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231E4u;
    // 0x3231e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3231E4u, 0x3231ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231ECu;
label_3231ec:
    // 0x3231ec: 0xc10705c  jal         func_41C170
label_3231f0:
    if (ctx->pc == 0x3231F0u) {
        ctx->pc = 0x3231F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231ECu;
        // 0x3231f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231F4u;
        goto label_3231f4;
    }
    ctx->pc = 0x3231ECu;
    SET_GPR_U32(ctx, 31, 0x3231F4u);
    ctx->pc = 0x3231F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231ECu;
    // 0x3231f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3231ECu, 0x3231F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231F4u;
label_3231f4:
    // 0x3231f4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3231f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3231f8:
    // 0x3231f8: 0xaeb10014  sw          $s1, 0x14($s5)
    ctx->pc = 0x3231f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 17));
label_3231fc:
    // 0x3231fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3231fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_323200:
    // 0x323200: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x323200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_323204:
    // 0x323204: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x323204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_323208:
    // 0x323208: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x323208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32320c:
    // 0x32320c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x32320cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_323210:
    // 0x323210: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x323210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_323214:
    // 0x323214: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x323214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_323218:
    // 0x323218: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x323218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32321c:
    // 0x32321c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x32321cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_323220:
    // 0x323220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_323224:
    // 0x323224: 0x3e00008  jr          $ra
label_323228:
    if (ctx->pc == 0x323228u) {
        ctx->pc = 0x323228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323224u;
        // 0x323228: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32322Cu;
        goto label_32322c;
    }
    ctx->pc = 0x323224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323224u;
        // 0x323228: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32322Cu;
label_32322c:
    // 0x32322c: 0x0  nop
    ctx->pc = 0x32322cu;
    // NOP
    ctx->pc = 0x323230u;
}
