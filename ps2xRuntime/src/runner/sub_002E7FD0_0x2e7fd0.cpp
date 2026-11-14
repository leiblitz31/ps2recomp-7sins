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

// Function: sub_002E7FD0
// Address: 0x2e7fd0 - 0x2e81c0
void sub_002E7FD0_0x2e7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7FD0_0x2e7fd0");
#endif

    switch (ctx->pc) {
        case 0x2e7fd0u: goto label_2e7fd0;
        case 0x2e7fd4u: goto label_2e7fd4;
        case 0x2e7fd8u: goto label_2e7fd8;
        case 0x2e7fdcu: goto label_2e7fdc;
        case 0x2e7fe0u: goto label_2e7fe0;
        case 0x2e7fe4u: goto label_2e7fe4;
        case 0x2e7fe8u: goto label_2e7fe8;
        case 0x2e7fecu: goto label_2e7fec;
        case 0x2e7ff0u: goto label_2e7ff0;
        case 0x2e7ff4u: goto label_2e7ff4;
        case 0x2e7ff8u: goto label_2e7ff8;
        case 0x2e7ffcu: goto label_2e7ffc;
        case 0x2e8000u: goto label_2e8000;
        case 0x2e8004u: goto label_2e8004;
        case 0x2e8008u: goto label_2e8008;
        case 0x2e800cu: goto label_2e800c;
        case 0x2e8010u: goto label_2e8010;
        case 0x2e8014u: goto label_2e8014;
        case 0x2e8018u: goto label_2e8018;
        case 0x2e801cu: goto label_2e801c;
        case 0x2e8020u: goto label_2e8020;
        case 0x2e8024u: goto label_2e8024;
        case 0x2e8028u: goto label_2e8028;
        case 0x2e802cu: goto label_2e802c;
        case 0x2e8030u: goto label_2e8030;
        case 0x2e8034u: goto label_2e8034;
        case 0x2e8038u: goto label_2e8038;
        case 0x2e803cu: goto label_2e803c;
        case 0x2e8040u: goto label_2e8040;
        case 0x2e8044u: goto label_2e8044;
        case 0x2e8048u: goto label_2e8048;
        case 0x2e804cu: goto label_2e804c;
        case 0x2e8050u: goto label_2e8050;
        case 0x2e8054u: goto label_2e8054;
        case 0x2e8058u: goto label_2e8058;
        case 0x2e805cu: goto label_2e805c;
        case 0x2e8060u: goto label_2e8060;
        case 0x2e8064u: goto label_2e8064;
        case 0x2e8068u: goto label_2e8068;
        case 0x2e806cu: goto label_2e806c;
        case 0x2e8070u: goto label_2e8070;
        case 0x2e8074u: goto label_2e8074;
        case 0x2e8078u: goto label_2e8078;
        case 0x2e807cu: goto label_2e807c;
        case 0x2e8080u: goto label_2e8080;
        case 0x2e8084u: goto label_2e8084;
        case 0x2e8088u: goto label_2e8088;
        case 0x2e808cu: goto label_2e808c;
        case 0x2e8090u: goto label_2e8090;
        case 0x2e8094u: goto label_2e8094;
        case 0x2e8098u: goto label_2e8098;
        case 0x2e809cu: goto label_2e809c;
        case 0x2e80a0u: goto label_2e80a0;
        case 0x2e80a4u: goto label_2e80a4;
        case 0x2e80a8u: goto label_2e80a8;
        case 0x2e80acu: goto label_2e80ac;
        case 0x2e80b0u: goto label_2e80b0;
        case 0x2e80b4u: goto label_2e80b4;
        case 0x2e80b8u: goto label_2e80b8;
        case 0x2e80bcu: goto label_2e80bc;
        case 0x2e80c0u: goto label_2e80c0;
        case 0x2e80c4u: goto label_2e80c4;
        case 0x2e80c8u: goto label_2e80c8;
        case 0x2e80ccu: goto label_2e80cc;
        case 0x2e80d0u: goto label_2e80d0;
        case 0x2e80d4u: goto label_2e80d4;
        case 0x2e80d8u: goto label_2e80d8;
        case 0x2e80dcu: goto label_2e80dc;
        case 0x2e80e0u: goto label_2e80e0;
        case 0x2e80e4u: goto label_2e80e4;
        case 0x2e80e8u: goto label_2e80e8;
        case 0x2e80ecu: goto label_2e80ec;
        case 0x2e80f0u: goto label_2e80f0;
        case 0x2e80f4u: goto label_2e80f4;
        case 0x2e80f8u: goto label_2e80f8;
        case 0x2e80fcu: goto label_2e80fc;
        case 0x2e8100u: goto label_2e8100;
        case 0x2e8104u: goto label_2e8104;
        case 0x2e8108u: goto label_2e8108;
        case 0x2e810cu: goto label_2e810c;
        case 0x2e8110u: goto label_2e8110;
        case 0x2e8114u: goto label_2e8114;
        case 0x2e8118u: goto label_2e8118;
        case 0x2e811cu: goto label_2e811c;
        case 0x2e8120u: goto label_2e8120;
        case 0x2e8124u: goto label_2e8124;
        case 0x2e8128u: goto label_2e8128;
        case 0x2e812cu: goto label_2e812c;
        case 0x2e8130u: goto label_2e8130;
        case 0x2e8134u: goto label_2e8134;
        case 0x2e8138u: goto label_2e8138;
        case 0x2e813cu: goto label_2e813c;
        case 0x2e8140u: goto label_2e8140;
        case 0x2e8144u: goto label_2e8144;
        case 0x2e8148u: goto label_2e8148;
        case 0x2e814cu: goto label_2e814c;
        case 0x2e8150u: goto label_2e8150;
        case 0x2e8154u: goto label_2e8154;
        case 0x2e8158u: goto label_2e8158;
        case 0x2e815cu: goto label_2e815c;
        case 0x2e8160u: goto label_2e8160;
        case 0x2e8164u: goto label_2e8164;
        case 0x2e8168u: goto label_2e8168;
        case 0x2e816cu: goto label_2e816c;
        case 0x2e8170u: goto label_2e8170;
        case 0x2e8174u: goto label_2e8174;
        case 0x2e8178u: goto label_2e8178;
        case 0x2e817cu: goto label_2e817c;
        case 0x2e8180u: goto label_2e8180;
        case 0x2e8184u: goto label_2e8184;
        case 0x2e8188u: goto label_2e8188;
        case 0x2e818cu: goto label_2e818c;
        case 0x2e8190u: goto label_2e8190;
        case 0x2e8194u: goto label_2e8194;
        case 0x2e8198u: goto label_2e8198;
        case 0x2e819cu: goto label_2e819c;
        case 0x2e81a0u: goto label_2e81a0;
        case 0x2e81a4u: goto label_2e81a4;
        case 0x2e81a8u: goto label_2e81a8;
        case 0x2e81acu: goto label_2e81ac;
        case 0x2e81b0u: goto label_2e81b0;
        case 0x2e81b4u: goto label_2e81b4;
        case 0x2e81b8u: goto label_2e81b8;
        case 0x2e81bcu: goto label_2e81bc;
        default: break;
    }

    ctx->pc = 0x2e7fd0u;

label_2e7fd0:
    // 0x2e7fd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2e7fd4:
    // 0x2e7fd4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e7fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2e7fd8:
    // 0x2e7fd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e7fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2e7fdc:
    // 0x2e7fdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e7fe0:
    // 0x2e7fe0: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x2e7fe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2e7fe4:
    // 0x2e7fe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e7fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e7fe8:
    // 0x2e7fe8: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x2e7fe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_2e7fec:
    // 0x2e7fec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e7fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e7ff0:
    // 0x2e7ff0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e7ff0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ff4:
    // 0x2e7ff4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e7ff8:
    // 0x2e7ff8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e7ff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ffc:
    // 0x2e7ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e8000:
    // 0x2e8000: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e8000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e8004:
    // 0x2e8004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e8008:
    // 0x2e8008: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e800c:
    // 0x2e800c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e8010:
    // 0x2e8010: 0x27b1009c  addiu       $s1, $sp, 0x9C
    ctx->pc = 0x2e8010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2e8014:
    // 0x2e8014: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2e8014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2e8018:
    // 0x2e8018: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2e8018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_2e801c:
    // 0x2e801c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e801cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e8020:
    // 0x2e8020: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e8020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8024:
    // 0x2e8024: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x2e8024u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_2e8028:
    // 0x2e8028: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2e8028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_2e802c:
    // 0x2e802c: 0x73182b  sltu        $v1, $v1, $s3
    ctx->pc = 0x2e802cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2e8030:
    // 0x2e8030: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_2e8034:
    if (ctx->pc == 0x2E8034u) {
        ctx->pc = 0x2E8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8030u;
        // 0x2e8034: 0xaef30000  sw          $s3, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8038u;
        goto label_2e8038;
    }
    ctx->pc = 0x2E8030u;
    {
        const bool branch_taken_0x2e8030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8030u;
        // 0x2e8034: 0xaef30000  sw          $s3, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8030) {
            ctx->pc = 0x2E80A0u;
            goto label_2e80a0;
        }
    }
    ctx->pc = 0x2E8038u;
label_2e8038:
    // 0x2e8038: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2e8038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2e803c:
    // 0x2e803c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e803cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8040:
    // 0x2e8040: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2e8040u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e8044:
    // 0x2e8044: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_2e8048:
    if (ctx->pc == 0x2E8048u) {
        ctx->pc = 0x2E804Cu;
        goto label_2e804c;
    }
    ctx->pc = 0x2E8044u;
    {
        const bool branch_taken_0x2e8044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8044) {
            ctx->pc = 0x2E8098u;
            goto label_2e8098;
        }
    }
    ctx->pc = 0x2E804Cu;
label_2e804c:
    // 0x2e804c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8050:
    // 0x2e8050: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2e8054:
    if (ctx->pc == 0x2E8054u) {
        ctx->pc = 0x2E8058u;
        goto label_2e8058;
    }
    ctx->pc = 0x2E8050u;
    {
        const bool branch_taken_0x2e8050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8050) {
            ctx->pc = 0x2E8098u;
            goto label_2e8098;
        }
    }
    ctx->pc = 0x2E8058u;
label_2e8058:
    // 0x2e8058: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e8058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e805c:
    // 0x2e805c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2e805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2e8060:
    // 0x2e8060: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2e8060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e8064:
    // 0x2e8064: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2e8068:
    if (ctx->pc == 0x2E8068u) {
        ctx->pc = 0x2E8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8064u;
        // 0x2e8068: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E806Cu;
        goto label_2e806c;
    }
    ctx->pc = 0x2E8064u;
    {
        const bool branch_taken_0x2e8064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8064u;
        // 0x2e8068: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8064) {
            ctx->pc = 0x2E8098u;
            goto label_2e8098;
        }
    }
    ctx->pc = 0x2E806Cu;
label_2e806c:
    // 0x2e806c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2e806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e8070:
    // 0x2e8070: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e8074:
    // 0x2e8074: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8078:
    // 0x2e8078: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x2e8078u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2e807c:
    // 0x2e807c: 0x40f809  jalr        $v0
label_2e8080:
    if (ctx->pc == 0x2E8080u) {
        ctx->pc = 0x2E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E807Cu;
        // 0x2e8080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8084u;
        goto label_2e8084;
    }
    ctx->pc = 0x2E807Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8084u);
        ctx->pc = 0x2E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E807Cu;
        // 0x2e8080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E807Cu, 0x2E8084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8084u;
label_2e8084:
    // 0x2e8084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e8084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8088:
    // 0x2e8088: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e8088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e808c:
    // 0x2e808c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2e8090:
    if (ctx->pc == 0x2E8090u) {
        ctx->pc = 0x2E8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E808Cu;
        // 0x2e8090: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8094u;
        goto label_2e8094;
    }
    ctx->pc = 0x2E808Cu;
    {
        const bool branch_taken_0x2e808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E808Cu;
        // 0x2e8090: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e808c) {
            ctx->pc = 0x2E806Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e806c;
        }
    }
    ctx->pc = 0x2E8094u;
label_2e8094:
    // 0x2e8094: 0x0  nop
    ctx->pc = 0x2e8094u;
    // NOP
label_2e8098:
    // 0x2e8098: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e809c:
    if (ctx->pc == 0x2E809Cu) {
        ctx->pc = 0x2E809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8098u;
        // 0x2e809c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80A0u;
        goto label_2e80a0;
    }
    ctx->pc = 0x2E8098u;
    {
        const bool branch_taken_0x2e8098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8098u;
        // 0x2e809c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8098) {
            ctx->pc = 0x2E80CCu;
            goto label_2e80cc;
        }
    }
    ctx->pc = 0x2E80A0u;
label_2e80a0:
    // 0x2e80a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e80a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e80a4:
    // 0x2e80a4: 0x2a0f809  jalr        $s5
label_2e80a8:
    if (ctx->pc == 0x2E80A8u) {
        ctx->pc = 0x2E80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80A4u;
        // 0x2e80a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80ACu;
        goto label_2e80ac;
    }
    ctx->pc = 0x2E80A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2E80ACu);
        ctx->pc = 0x2E80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80A4u;
        // 0x2e80a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E80A4u, 0x2E80ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E80ACu;
label_2e80ac:
    // 0x2e80ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e80acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e80b0:
    // 0x2e80b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e80b4:
    // 0x2e80b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2e80b8:
    // 0x2e80b8: 0x73182b  sltu        $v1, $v1, $s3
    ctx->pc = 0x2e80b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2e80bc:
    // 0x2e80bc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_2e80c0:
    if (ctx->pc == 0x2E80C0u) {
        ctx->pc = 0x2E80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80BCu;
        // 0x2e80c0: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80C4u;
        goto label_2e80c4;
    }
    ctx->pc = 0x2E80BCu;
    {
        const bool branch_taken_0x2e80bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80BCu;
        // 0x2e80c0: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80bc) {
            ctx->pc = 0x2E80A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e80a0;
        }
    }
    ctx->pc = 0x2E80C4u;
label_2e80c4:
    // 0x2e80c4: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_2e80c8:
    if (ctx->pc == 0x2E80C8u) {
        ctx->pc = 0x2E80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80C4u;
        // 0x2e80c8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80CCu;
        goto label_2e80cc;
    }
    ctx->pc = 0x2E80C4u;
    {
        const bool branch_taken_0x2e80c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80C4u;
        // 0x2e80c8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80c4) {
            ctx->pc = 0x2E803Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e803c;
        }
    }
    ctx->pc = 0x2E80CCu;
label_2e80cc:
    // 0x2e80cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e80ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e80d0:
    // 0x2e80d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e80d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e80d4:
    // 0x2e80d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e80d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e80d8:
    // 0x2e80d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e80d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e80dc:
    // 0x2e80dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e80dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e80e0:
    // 0x2e80e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e80e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e80e4:
    // 0x2e80e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e80e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e80e8:
    // 0x2e80e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e80e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e80ec:
    // 0x2e80ec: 0x3e00008  jr          $ra
label_2e80f0:
    if (ctx->pc == 0x2E80F0u) {
        ctx->pc = 0x2E80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80ECu;
        // 0x2e80f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80F4u;
        goto label_2e80f4;
    }
    ctx->pc = 0x2E80ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80ECu;
        // 0x2e80f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E80ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E80F4u;
label_2e80f4:
    // 0x2e80f4: 0x0  nop
    ctx->pc = 0x2e80f4u;
    // NOP
label_2e80f8:
    // 0x2e80f8: 0x0  nop
    ctx->pc = 0x2e80f8u;
    // NOP
label_2e80fc:
    // 0x2e80fc: 0x0  nop
    ctx->pc = 0x2e80fcu;
    // NOP
label_2e8100:
    // 0x2e8100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e8104:
    // 0x2e8104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e8104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e8108:
    // 0x2e8108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e810c:
    // 0x2e810c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e8110:
    // 0x2e8110: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8114:
    // 0x2e8114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e8118:
    // 0x2e8118: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_2e811c:
    if (ctx->pc == 0x2E811Cu) {
        ctx->pc = 0x2E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8118u;
        // 0x2e811c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8120u;
        goto label_2e8120;
    }
    ctx->pc = 0x2E8118u;
    {
        const bool branch_taken_0x2e8118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8118u;
        // 0x2e811c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8118) {
            ctx->pc = 0x2E81A0u;
            goto label_2e81a0;
        }
    }
    ctx->pc = 0x2E8120u;
label_2e8120:
    // 0x2e8120: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2e8120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2e8124:
    // 0x2e8124: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2e8124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2e8128:
    // 0x2e8128: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x2e8128u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e812c:
    // 0x2e812c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_2e8130:
    if (ctx->pc == 0x2E8130u) {
        ctx->pc = 0x2E8134u;
        goto label_2e8134;
    }
    ctx->pc = 0x2E812Cu;
    {
        const bool branch_taken_0x2e812c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e812c) {
            ctx->pc = 0x2E8188u;
            goto label_2e8188;
        }
    }
    ctx->pc = 0x2E8134u;
label_2e8134:
    // 0x2e8134: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2e8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2e8138:
    // 0x2e8138: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2e813c:
    if (ctx->pc == 0x2E813Cu) {
        ctx->pc = 0x2E8140u;
        goto label_2e8140;
    }
    ctx->pc = 0x2E8138u;
    {
        const bool branch_taken_0x2e8138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8138) {
            ctx->pc = 0x2E8188u;
            goto label_2e8188;
        }
    }
    ctx->pc = 0x2E8140u;
label_2e8140:
    // 0x2e8140: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8144:
    // 0x2e8144: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e8144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8148:
    // 0x2e8148: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2e8148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e814c:
    // 0x2e814c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2e8150:
    if (ctx->pc == 0x2E8150u) {
        ctx->pc = 0x2E8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E814Cu;
        // 0x2e8150: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8154u;
        goto label_2e8154;
    }
    ctx->pc = 0x2E814Cu;
    {
        const bool branch_taken_0x2e814c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E814Cu;
        // 0x2e8150: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e814c) {
            ctx->pc = 0x2E8188u;
            goto label_2e8188;
        }
    }
    ctx->pc = 0x2E8154u;
label_2e8154:
    // 0x2e8154: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e8154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8158:
    // 0x2e8158: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e8158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e815c:
    // 0x2e815c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2e815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2e8160:
    // 0x2e8160: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2e8160u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2e8164:
    // 0x2e8164: 0x40f809  jalr        $v0
label_2e8168:
    if (ctx->pc == 0x2E8168u) {
        ctx->pc = 0x2E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8164u;
        // 0x2e8168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E816Cu;
        goto label_2e816c;
    }
    ctx->pc = 0x2E8164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E816Cu);
        ctx->pc = 0x2E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8164u;
        // 0x2e8168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8164u, 0x2E816Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E816Cu;
label_2e816c:
    // 0x2e816c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2e816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2e8170:
    // 0x2e8170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e8170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e8174:
    // 0x2e8174: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2e8174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2e8178:
    // 0x2e8178: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2e817c:
    // 0x2e817c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2e8180:
    if (ctx->pc == 0x2E8180u) {
        ctx->pc = 0x2E8184u;
        goto label_2e8184;
    }
    ctx->pc = 0x2E817Cu;
    {
        const bool branch_taken_0x2e817c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e817c) {
            ctx->pc = 0x2E8154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8154;
        }
    }
    ctx->pc = 0x2E8184u;
label_2e8184:
    // 0x2e8184: 0x0  nop
    ctx->pc = 0x2e8184u;
    // NOP
label_2e8188:
    // 0x2e8188: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2e8188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2e818c:
    // 0x2e818c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e818cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2e8190:
    // 0x2e8190: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2e8194:
    if (ctx->pc == 0x2E8194u) {
        ctx->pc = 0x2E8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8190u;
        // 0x2e8194: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8198u;
        goto label_2e8198;
    }
    ctx->pc = 0x2E8190u;
    {
        const bool branch_taken_0x2e8190 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8190u;
        // 0x2e8194: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8190) {
            ctx->pc = 0x2E81A4u;
            goto label_2e81a4;
        }
    }
    ctx->pc = 0x2E8198u;
label_2e8198:
    // 0x2e8198: 0xc0ba070  jal         func_2E81C0
label_2e819c:
    if (ctx->pc == 0x2E819Cu) {
        ctx->pc = 0x2E819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8198u;
        // 0x2e819c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81A0u;
        goto label_2e81a0;
    }
    ctx->pc = 0x2E8198u;
    SET_GPR_U32(ctx, 31, 0x2E81A0u);
    ctx->pc = 0x2E819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8198u;
    // 0x2e819c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E8198u, 0x2E81A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81A0u;
label_2e81a0:
    // 0x2e81a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e81a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e81a4:
    // 0x2e81a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e81a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e81a8:
    // 0x2e81a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e81a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e81ac:
    // 0x2e81ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e81acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e81b0:
    // 0x2e81b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e81b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e81b4:
    // 0x2e81b4: 0x3e00008  jr          $ra
label_2e81b8:
    if (ctx->pc == 0x2E81B8u) {
        ctx->pc = 0x2E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81B4u;
        // 0x2e81b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81BCu;
        goto label_2e81bc;
    }
    ctx->pc = 0x2E81B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81B4u;
        // 0x2e81b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E81B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E81BCu;
label_2e81bc:
    // 0x2e81bc: 0x0  nop
    ctx->pc = 0x2e81bcu;
    // NOP
    ctx->pc = 0x2e81c0u;
}
