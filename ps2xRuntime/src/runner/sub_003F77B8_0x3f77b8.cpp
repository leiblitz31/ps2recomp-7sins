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

// Function: sub_003F77B8
// Address: 0x3f77b8 - 0x3f7a58
void sub_003F77B8_0x3f77b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F77B8_0x3f77b8");
#endif

    switch (ctx->pc) {
        case 0x3f77b8u: goto label_3f77b8;
        case 0x3f77bcu: goto label_3f77bc;
        case 0x3f77c0u: goto label_3f77c0;
        case 0x3f77c4u: goto label_3f77c4;
        case 0x3f77c8u: goto label_3f77c8;
        case 0x3f77ccu: goto label_3f77cc;
        case 0x3f77d0u: goto label_3f77d0;
        case 0x3f77d4u: goto label_3f77d4;
        case 0x3f77d8u: goto label_3f77d8;
        case 0x3f77dcu: goto label_3f77dc;
        case 0x3f77e0u: goto label_3f77e0;
        case 0x3f77e4u: goto label_3f77e4;
        case 0x3f77e8u: goto label_3f77e8;
        case 0x3f77ecu: goto label_3f77ec;
        case 0x3f77f0u: goto label_3f77f0;
        case 0x3f77f4u: goto label_3f77f4;
        case 0x3f77f8u: goto label_3f77f8;
        case 0x3f77fcu: goto label_3f77fc;
        case 0x3f7800u: goto label_3f7800;
        case 0x3f7804u: goto label_3f7804;
        case 0x3f7808u: goto label_3f7808;
        case 0x3f780cu: goto label_3f780c;
        case 0x3f7810u: goto label_3f7810;
        case 0x3f7814u: goto label_3f7814;
        case 0x3f7818u: goto label_3f7818;
        case 0x3f781cu: goto label_3f781c;
        case 0x3f7820u: goto label_3f7820;
        case 0x3f7824u: goto label_3f7824;
        case 0x3f7828u: goto label_3f7828;
        case 0x3f782cu: goto label_3f782c;
        case 0x3f7830u: goto label_3f7830;
        case 0x3f7834u: goto label_3f7834;
        case 0x3f7838u: goto label_3f7838;
        case 0x3f783cu: goto label_3f783c;
        case 0x3f7840u: goto label_3f7840;
        case 0x3f7844u: goto label_3f7844;
        case 0x3f7848u: goto label_3f7848;
        case 0x3f784cu: goto label_3f784c;
        case 0x3f7850u: goto label_3f7850;
        case 0x3f7854u: goto label_3f7854;
        case 0x3f7858u: goto label_3f7858;
        case 0x3f785cu: goto label_3f785c;
        case 0x3f7860u: goto label_3f7860;
        case 0x3f7864u: goto label_3f7864;
        case 0x3f7868u: goto label_3f7868;
        case 0x3f786cu: goto label_3f786c;
        case 0x3f7870u: goto label_3f7870;
        case 0x3f7874u: goto label_3f7874;
        case 0x3f7878u: goto label_3f7878;
        case 0x3f787cu: goto label_3f787c;
        case 0x3f7880u: goto label_3f7880;
        case 0x3f7884u: goto label_3f7884;
        case 0x3f7888u: goto label_3f7888;
        case 0x3f788cu: goto label_3f788c;
        case 0x3f7890u: goto label_3f7890;
        case 0x3f7894u: goto label_3f7894;
        case 0x3f7898u: goto label_3f7898;
        case 0x3f789cu: goto label_3f789c;
        case 0x3f78a0u: goto label_3f78a0;
        case 0x3f78a4u: goto label_3f78a4;
        case 0x3f78a8u: goto label_3f78a8;
        case 0x3f78acu: goto label_3f78ac;
        case 0x3f78b0u: goto label_3f78b0;
        case 0x3f78b4u: goto label_3f78b4;
        case 0x3f78b8u: goto label_3f78b8;
        case 0x3f78bcu: goto label_3f78bc;
        case 0x3f78c0u: goto label_3f78c0;
        case 0x3f78c4u: goto label_3f78c4;
        case 0x3f78c8u: goto label_3f78c8;
        case 0x3f78ccu: goto label_3f78cc;
        case 0x3f78d0u: goto label_3f78d0;
        case 0x3f78d4u: goto label_3f78d4;
        case 0x3f78d8u: goto label_3f78d8;
        case 0x3f78dcu: goto label_3f78dc;
        case 0x3f78e0u: goto label_3f78e0;
        case 0x3f78e4u: goto label_3f78e4;
        case 0x3f78e8u: goto label_3f78e8;
        case 0x3f78ecu: goto label_3f78ec;
        case 0x3f78f0u: goto label_3f78f0;
        case 0x3f78f4u: goto label_3f78f4;
        case 0x3f78f8u: goto label_3f78f8;
        case 0x3f78fcu: goto label_3f78fc;
        case 0x3f7900u: goto label_3f7900;
        case 0x3f7904u: goto label_3f7904;
        case 0x3f7908u: goto label_3f7908;
        case 0x3f790cu: goto label_3f790c;
        case 0x3f7910u: goto label_3f7910;
        case 0x3f7914u: goto label_3f7914;
        case 0x3f7918u: goto label_3f7918;
        case 0x3f791cu: goto label_3f791c;
        case 0x3f7920u: goto label_3f7920;
        case 0x3f7924u: goto label_3f7924;
        case 0x3f7928u: goto label_3f7928;
        case 0x3f792cu: goto label_3f792c;
        case 0x3f7930u: goto label_3f7930;
        case 0x3f7934u: goto label_3f7934;
        case 0x3f7938u: goto label_3f7938;
        case 0x3f793cu: goto label_3f793c;
        case 0x3f7940u: goto label_3f7940;
        case 0x3f7944u: goto label_3f7944;
        case 0x3f7948u: goto label_3f7948;
        case 0x3f794cu: goto label_3f794c;
        case 0x3f7950u: goto label_3f7950;
        case 0x3f7954u: goto label_3f7954;
        case 0x3f7958u: goto label_3f7958;
        case 0x3f795cu: goto label_3f795c;
        case 0x3f7960u: goto label_3f7960;
        case 0x3f7964u: goto label_3f7964;
        case 0x3f7968u: goto label_3f7968;
        case 0x3f796cu: goto label_3f796c;
        case 0x3f7970u: goto label_3f7970;
        case 0x3f7974u: goto label_3f7974;
        case 0x3f7978u: goto label_3f7978;
        case 0x3f797cu: goto label_3f797c;
        case 0x3f7980u: goto label_3f7980;
        case 0x3f7984u: goto label_3f7984;
        case 0x3f7988u: goto label_3f7988;
        case 0x3f798cu: goto label_3f798c;
        case 0x3f7990u: goto label_3f7990;
        case 0x3f7994u: goto label_3f7994;
        case 0x3f7998u: goto label_3f7998;
        case 0x3f799cu: goto label_3f799c;
        case 0x3f79a0u: goto label_3f79a0;
        case 0x3f79a4u: goto label_3f79a4;
        case 0x3f79a8u: goto label_3f79a8;
        case 0x3f79acu: goto label_3f79ac;
        case 0x3f79b0u: goto label_3f79b0;
        case 0x3f79b4u: goto label_3f79b4;
        case 0x3f79b8u: goto label_3f79b8;
        case 0x3f79bcu: goto label_3f79bc;
        case 0x3f79c0u: goto label_3f79c0;
        case 0x3f79c4u: goto label_3f79c4;
        case 0x3f79c8u: goto label_3f79c8;
        case 0x3f79ccu: goto label_3f79cc;
        case 0x3f79d0u: goto label_3f79d0;
        case 0x3f79d4u: goto label_3f79d4;
        case 0x3f79d8u: goto label_3f79d8;
        case 0x3f79dcu: goto label_3f79dc;
        case 0x3f79e0u: goto label_3f79e0;
        case 0x3f79e4u: goto label_3f79e4;
        case 0x3f79e8u: goto label_3f79e8;
        case 0x3f79ecu: goto label_3f79ec;
        case 0x3f79f0u: goto label_3f79f0;
        case 0x3f79f4u: goto label_3f79f4;
        case 0x3f79f8u: goto label_3f79f8;
        case 0x3f79fcu: goto label_3f79fc;
        case 0x3f7a00u: goto label_3f7a00;
        case 0x3f7a04u: goto label_3f7a04;
        case 0x3f7a08u: goto label_3f7a08;
        case 0x3f7a0cu: goto label_3f7a0c;
        case 0x3f7a10u: goto label_3f7a10;
        case 0x3f7a14u: goto label_3f7a14;
        case 0x3f7a18u: goto label_3f7a18;
        case 0x3f7a1cu: goto label_3f7a1c;
        case 0x3f7a20u: goto label_3f7a20;
        case 0x3f7a24u: goto label_3f7a24;
        case 0x3f7a28u: goto label_3f7a28;
        case 0x3f7a2cu: goto label_3f7a2c;
        case 0x3f7a30u: goto label_3f7a30;
        case 0x3f7a34u: goto label_3f7a34;
        case 0x3f7a38u: goto label_3f7a38;
        case 0x3f7a3cu: goto label_3f7a3c;
        case 0x3f7a40u: goto label_3f7a40;
        case 0x3f7a44u: goto label_3f7a44;
        case 0x3f7a48u: goto label_3f7a48;
        case 0x3f7a4cu: goto label_3f7a4c;
        case 0x3f7a50u: goto label_3f7a50;
        case 0x3f7a54u: goto label_3f7a54;
        default: break;
    }

    ctx->pc = 0x3f77b8u;

label_3f77b8:
    // 0x3f77b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f77b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3f77bc:
    // 0x3f77bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f77bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3f77c0:
    // 0x3f77c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f77c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3f77c4:
    // 0x3f77c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f77c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f77c8:
    // 0x3f77c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f77c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f77cc:
    // 0x3f77cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f77ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f77d0:
    // 0x3f77d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3f77d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3f77d4:
    // 0x3f77d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f77d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f77d8:
    // 0x3f77d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f77d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3f77dc:
    // 0x3f77dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f77dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3f77e0:
    // 0x3f77e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f77e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f77e4:
    // 0x3f77e4: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f77e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
label_3f77e8:
    // 0x3f77e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f77e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3f77ec:
    // 0x3f77ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3f77f0:
    if (ctx->pc == 0x3F77F0u) {
        ctx->pc = 0x3F77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77ECu;
        // 0x3f77f0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F77F4u;
        goto label_3f77f4;
    }
    ctx->pc = 0x3F77ECu;
    {
        const bool branch_taken_0x3f77ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77ECu;
        // 0x3f77f0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f77ec) {
            ctx->pc = 0x3F7818u;
            goto label_3f7818;
        }
    }
    ctx->pc = 0x3F77F4u;
label_3f77f4:
    // 0x3f77f4: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x3f77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_3f77f8:
    // 0x3f77f8: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3f77f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
label_3f77fc:
    // 0x3f77fc: 0xc0bb752  jal         func_2EDD48
label_3f7800:
    if (ctx->pc == 0x3F7800u) {
        ctx->pc = 0x3F7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77FCu;
        // 0x3f7800: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7804u;
        goto label_3f7804;
    }
    ctx->pc = 0x3F77FCu;
    SET_GPR_U32(ctx, 31, 0x3F7804u);
    ctx->pc = 0x3F7800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F77FCu;
    // 0x3f7800: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3F77FCu, 0x3F7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7804u;
label_3f7804:
    // 0x3f7804: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f7808:
    if (ctx->pc == 0x3F7808u) {
        ctx->pc = 0x3F7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7804u;
        // 0x3f7808: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F780Cu;
        goto label_3f780c;
    }
    ctx->pc = 0x3F7804u;
    {
        const bool branch_taken_0x3f7804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7804u;
        // 0x3f7808: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7804) {
            ctx->pc = 0x3F7818u;
            goto label_3f7818;
        }
    }
    ctx->pc = 0x3F780Cu;
label_3f780c:
    // 0x3f780c: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f780cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
label_3f7810:
    // 0x3f7810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f7810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f7814:
    // 0x3f7814: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x3f7814u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
label_3f7818:
    // 0x3f7818: 0x26450200  addiu       $a1, $s2, 0x200
    ctx->pc = 0x3f7818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_3f781c:
    // 0x3f781c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7820:
    // 0x3f7820: 0xc0fe7fe  jal         func_3F9FF8
label_3f7824:
    if (ctx->pc == 0x3F7824u) {
        ctx->pc = 0x3F7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7820u;
        // 0x3f7824: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7828u;
        goto label_3f7828;
    }
    ctx->pc = 0x3F7820u;
    SET_GPR_U32(ctx, 31, 0x3F7828u);
    ctx->pc = 0x3F7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7820u;
    // 0x3f7824: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9FF8u, 0x3F7820u, 0x3F7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7828u;
label_3f7828:
    // 0x3f7828: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f7828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
label_3f782c:
    // 0x3f782c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3f7830:
    // 0x3f7830: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3f7834:
    if (ctx->pc == 0x3F7834u) {
        ctx->pc = 0x3F7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7830u;
        // 0x3f7834: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7838u;
        goto label_3f7838;
    }
    ctx->pc = 0x3F7830u;
    {
        const bool branch_taken_0x3f7830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f7830) {
            ctx->pc = 0x3F7834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7830u;
            // 0x3f7834: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7870u;
            goto label_3f7870;
        }
    }
    ctx->pc = 0x3F7838u;
label_3f7838:
    // 0x3f7838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f783c:
    // 0x3f783c: 0xc0f8606  jal         func_3E1818
label_3f7840:
    if (ctx->pc == 0x3F7840u) {
        ctx->pc = 0x3F7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F783Cu;
        // 0x3f7840: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7844u;
        goto label_3f7844;
    }
    ctx->pc = 0x3F783Cu;
    SET_GPR_U32(ctx, 31, 0x3F7844u);
    ctx->pc = 0x3F7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F783Cu;
    // 0x3f7840: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1818u, 0x3F783Cu, 0x3F7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7844u;
label_3f7844:
    // 0x3f7844: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f7844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f7848:
    // 0x3f7848: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_3f784c:
    if (ctx->pc == 0x3F784Cu) {
        ctx->pc = 0x3F784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7848u;
        // 0x3f784c: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7850u;
        goto label_3f7850;
    }
    ctx->pc = 0x3F7848u;
    {
        const bool branch_taken_0x3f7848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f7848) {
            ctx->pc = 0x3F784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7848u;
            // 0x3f784c: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7870u;
            goto label_3f7870;
        }
    }
    ctx->pc = 0x3F7850u;
label_3f7850:
    // 0x3f7850: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x3f7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
label_3f7854:
    // 0x3f7854: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3f7858:
    if (ctx->pc == 0x3F7858u) {
        ctx->pc = 0x3F7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7854u;
        // 0x3f7858: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F785Cu;
        goto label_3f785c;
    }
    ctx->pc = 0x3F7854u;
    {
        const bool branch_taken_0x3f7854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f7854) {
            ctx->pc = 0x3F7858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7854u;
            // 0x3f7858: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7870u;
            goto label_3f7870;
        }
    }
    ctx->pc = 0x3F785Cu;
label_3f785c:
    // 0x3f785c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f785cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f7860:
    // 0x3f7860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7864:
    // 0x3f7864: 0xc0f8704  jal         func_3E1C10
label_3f7868:
    if (ctx->pc == 0x3F7868u) {
        ctx->pc = 0x3F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7864u;
        // 0x3f7868: 0x24a5f630  addiu       $a1, $a1, -0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F786Cu;
        goto label_3f786c;
    }
    ctx->pc = 0x3F7864u;
    SET_GPR_U32(ctx, 31, 0x3F786Cu);
    ctx->pc = 0x3F7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7864u;
    // 0x3f7868: 0x24a5f630  addiu       $a1, $a1, -0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F7864u, 0x3F786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F786Cu;
label_3f786c:
    // 0x3f786c: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x3f786cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
label_3f7870:
    // 0x3f7870: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3f7870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_3f7874:
    // 0x3f7874: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_3f7878:
    if (ctx->pc == 0x3F7878u) {
        ctx->pc = 0x3F7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7874u;
        // 0x3f7878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F787Cu;
        goto label_3f787c;
    }
    ctx->pc = 0x3F7874u;
    {
        const bool branch_taken_0x3f7874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7874u;
        // 0x3f7878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7874) {
            ctx->pc = 0x3F7954u;
            goto label_3f7954;
        }
    }
    ctx->pc = 0x3F787Cu;
label_3f787c:
    // 0x3f787c: 0xc0bc5c6  jal         func_2F1718
label_3f7880:
    if (ctx->pc == 0x3F7880u) {
        ctx->pc = 0x3F7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F787Cu;
        // 0x3f7880: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7884u;
        goto label_3f7884;
    }
    ctx->pc = 0x3F787Cu;
    SET_GPR_U32(ctx, 31, 0x3F7884u);
    ctx->pc = 0x3F7880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F787Cu;
    // 0x3f7880: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3F787Cu, 0x3F7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7884u;
label_3f7884:
    // 0x3f7884: 0x10883c  dsll32      $s1, $s0, 0
    ctx->pc = 0x3f7884u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 0));
label_3f7888:
    // 0x3f7888: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x3f7888u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_3f788c:
    // 0x3f788c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7890:
    // 0x3f7890: 0xc0f8ae2  jal         func_3E2B88
label_3f7894:
    if (ctx->pc == 0x3F7894u) {
        ctx->pc = 0x3F7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7890u;
        // 0x3f7894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7898u;
        goto label_3f7898;
    }
    ctx->pc = 0x3F7890u;
    SET_GPR_U32(ctx, 31, 0x3F7898u);
    ctx->pc = 0x3F7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7890u;
    // 0x3f7894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F7890u, 0x3F7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7898u;
label_3f7898:
    // 0x3f7898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f7898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f789c:
    // 0x3f789c: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x3f789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
label_3f78a0:
    // 0x3f78a0: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x3f78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
label_3f78a4:
    // 0x3f78a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f78a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f78a8:
    // 0x3f78a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f78a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f78ac:
    // 0x3f78ac: 0xc0f94da  jal         func_3E5368
label_3f78b0:
    if (ctx->pc == 0x3F78B0u) {
        ctx->pc = 0x3F78B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78ACu;
        // 0x3f78b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78B4u;
        goto label_3f78b4;
    }
    ctx->pc = 0x3F78ACu;
    SET_GPR_U32(ctx, 31, 0x3F78B4u);
    ctx->pc = 0x3F78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F78ACu;
    // 0x3f78b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F78ACu, 0x3F78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F78B4u;
label_3f78b4:
    // 0x3f78b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f78b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f78b8:
    // 0x3f78b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f78b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f78bc:
    // 0x3f78bc: 0xc0f85ec  jal         func_3E17B0
label_3f78c0:
    if (ctx->pc == 0x3F78C0u) {
        ctx->pc = 0x3F78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78BCu;
        // 0x3f78c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78C4u;
        goto label_3f78c4;
    }
    ctx->pc = 0x3F78BCu;
    SET_GPR_U32(ctx, 31, 0x3F78C4u);
    ctx->pc = 0x3F78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F78BCu;
    // 0x3f78c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F78BCu, 0x3F78C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F78C4u;
label_3f78c4:
    // 0x3f78c4: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x3f78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
label_3f78c8:
    // 0x3f78c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3f78cc:
    if (ctx->pc == 0x3F78CCu) {
        ctx->pc = 0x3F78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78C8u;
        // 0x3f78cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78D0u;
        goto label_3f78d0;
    }
    ctx->pc = 0x3F78C8u;
    {
        const bool branch_taken_0x3f78c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78C8u;
        // 0x3f78cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f78c8) {
            ctx->pc = 0x3F7930u;
            goto label_3f7930;
        }
    }
    ctx->pc = 0x3F78D0u;
label_3f78d0:
    // 0x3f78d0: 0x40f809  jalr        $v0
label_3f78d4:
    if (ctx->pc == 0x3F78D4u) {
        ctx->pc = 0x3F78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78D0u;
        // 0x3f78d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78D8u;
        goto label_3f78d8;
    }
    ctx->pc = 0x3F78D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F78D8u);
        ctx->pc = 0x3F78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78D0u;
        // 0x3f78d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F78D0u, 0x3F78D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F78D8u;
label_3f78d8:
    // 0x3f78d8: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
label_3f78dc:
    if (ctx->pc == 0x3F78DCu) {
        ctx->pc = 0x3F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78D8u;
        // 0x3f78dc: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78E0u;
        goto label_3f78e0;
    }
    ctx->pc = 0x3F78D8u;
    {
        const bool branch_taken_0x3f78d8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78D8u;
        // 0x3f78dc: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f78d8) {
            ctx->pc = 0x3F7944u;
            goto label_3f7944;
        }
    }
    ctx->pc = 0x3F78E0u;
label_3f78e0:
    // 0x3f78e0: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f78e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
label_3f78e4:
    // 0x3f78e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3f78e8:
    // 0x3f78e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3f78ec:
    if (ctx->pc == 0x3F78ECu) {
        ctx->pc = 0x3F78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78E8u;
        // 0x3f78ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78F0u;
        goto label_3f78f0;
    }
    ctx->pc = 0x3F78E8u;
    {
        const bool branch_taken_0x3f78e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78E8u;
        // 0x3f78ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f78e8) {
            ctx->pc = 0x3F7918u;
            goto label_3f7918;
        }
    }
    ctx->pc = 0x3F78F0u;
label_3f78f0:
    // 0x3f78f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f78f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f78f4:
    // 0x3f78f4: 0xc0f8606  jal         func_3E1818
label_3f78f8:
    if (ctx->pc == 0x3F78F8u) {
        ctx->pc = 0x3F78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78F4u;
        // 0x3f78f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78FCu;
        goto label_3f78fc;
    }
    ctx->pc = 0x3F78F4u;
    SET_GPR_U32(ctx, 31, 0x3F78FCu);
    ctx->pc = 0x3F78F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F78F4u;
    // 0x3f78f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1818u, 0x3F78F4u, 0x3F78FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F78FCu;
label_3f78fc:
    // 0x3f78fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f7900:
    // 0x3f7900: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_3f7904:
    if (ctx->pc == 0x3F7904u) {
        ctx->pc = 0x3F7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7900u;
        // 0x3f7904: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7908u;
        goto label_3f7908;
    }
    ctx->pc = 0x3F7900u;
    {
        const bool branch_taken_0x3f7900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7900u;
        // 0x3f7904: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7900) {
            ctx->pc = 0x3F7914u;
            goto label_3f7914;
        }
    }
    ctx->pc = 0x3F7908u;
label_3f7908:
    // 0x3f7908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f790c:
    // 0x3f790c: 0xc0f8704  jal         func_3E1C10
label_3f7910:
    if (ctx->pc == 0x3F7910u) {
        ctx->pc = 0x3F7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F790Cu;
        // 0x3f7910: 0x24a5f630  addiu       $a1, $a1, -0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7914u;
        goto label_3f7914;
    }
    ctx->pc = 0x3F790Cu;
    SET_GPR_U32(ctx, 31, 0x3F7914u);
    ctx->pc = 0x3F7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F790Cu;
    // 0x3f7910: 0x24a5f630  addiu       $a1, $a1, -0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F790Cu, 0x3F7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7914u;
label_3f7914:
    // 0x3f7914: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f7914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f7918:
    // 0x3f7918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f791c:
    // 0x3f791c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f791cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f7920:
    // 0x3f7920: 0xc0fef02  jal         func_3FBC08
label_3f7924:
    if (ctx->pc == 0x3F7924u) {
        ctx->pc = 0x3F7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7920u;
        // 0x3f7924: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7928u;
        goto label_3f7928;
    }
    ctx->pc = 0x3F7920u;
    SET_GPR_U32(ctx, 31, 0x3F7928u);
    ctx->pc = 0x3F7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7920u;
    // 0x3f7924: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FBC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FBC08u, 0x3F7920u, 0x3F7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7928u;
label_3f7928:
    // 0x3f7928: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f792c:
    if (ctx->pc == 0x3F792Cu) {
        ctx->pc = 0x3F792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7928u;
        // 0x3f792c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7930u;
        goto label_3f7930;
    }
    ctx->pc = 0x3F7928u;
    {
        const bool branch_taken_0x3f7928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7928u;
        // 0x3f792c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7928) {
            ctx->pc = 0x3F7944u;
            goto label_3f7944;
        }
    }
    ctx->pc = 0x3F7930u;
label_3f7930:
    // 0x3f7930: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f7930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f7934:
    // 0x3f7934: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f7934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f7938:
    // 0x3f7938: 0xc0fef02  jal         func_3FBC08
label_3f793c:
    if (ctx->pc == 0x3F793Cu) {
        ctx->pc = 0x3F793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7938u;
        // 0x3f793c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7940u;
        goto label_3f7940;
    }
    ctx->pc = 0x3F7938u;
    SET_GPR_U32(ctx, 31, 0x3F7940u);
    ctx->pc = 0x3F793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7938u;
    // 0x3f793c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FBC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FBC08u, 0x3F7938u, 0x3F7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7940u;
label_3f7940:
    // 0x3f7940: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3f7940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3f7944:
    // 0x3f7944: 0xc0f8b02  jal         func_3E2C08
label_3f7948:
    if (ctx->pc == 0x3F7948u) {
        ctx->pc = 0x3F7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7944u;
        // 0x3f7948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F794Cu;
        goto label_3f794c;
    }
    ctx->pc = 0x3F7944u;
    SET_GPR_U32(ctx, 31, 0x3F794Cu);
    ctx->pc = 0x3F7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7944u;
    // 0x3f7948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F7944u, 0x3F794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F794Cu;
label_3f794c:
    // 0x3f794c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3f7950:
    if (ctx->pc == 0x3F7950u) {
        ctx->pc = 0x3F7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F794Cu;
        // 0x3f7950: 0x8e54015c  lw          $s4, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7954u;
        goto label_3f7954;
    }
    ctx->pc = 0x3F794Cu;
    {
        const bool branch_taken_0x3f794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F794Cu;
        // 0x3f7950: 0x8e54015c  lw          $s4, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f794c) {
            ctx->pc = 0x3F795Cu;
            goto label_3f795c;
        }
    }
    ctx->pc = 0x3F7954u;
label_3f7954:
    // 0x3f7954: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3f7954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7958:
    // 0x3f7958: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f7958u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
label_3f795c:
    // 0x3f795c: 0x15983c  dsll32      $s3, $s5, 0
    ctx->pc = 0x3f795cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) << (32 + 0));
label_3f7960:
    // 0x3f7960: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f7960u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_3f7964:
    // 0x3f7964: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f7964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3f7968:
    // 0x3f7968: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3f796c:
    if (ctx->pc == 0x3F796Cu) {
        ctx->pc = 0x3F7970u;
        goto label_3f7970;
    }
    ctx->pc = 0x3F7968u;
    {
        const bool branch_taken_0x3f7968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7968) {
            ctx->pc = 0x3F79ACu;
            goto label_3f79ac;
        }
    }
    ctx->pc = 0x3F7970u;
label_3f7970:
    // 0x3f7970: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f7970u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f7974:
    // 0x3f7974: 0x0  nop
    ctx->pc = 0x3f7974u;
    // NOP
label_3f7978:
    // 0x3f7978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f797c:
    // 0x3f797c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f797cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
label_3f7980:
    // 0x3f7980: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f7980u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_3f7984:
    // 0x3f7984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7988:
    // 0x3f7988: 0xc0f94da  jal         func_3E5368
label_3f798c:
    if (ctx->pc == 0x3F798Cu) {
        ctx->pc = 0x3F798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7988u;
        // 0x3f798c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7990u;
        goto label_3f7990;
    }
    ctx->pc = 0x3F7988u;
    SET_GPR_U32(ctx, 31, 0x3F7990u);
    ctx->pc = 0x3F798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7988u;
    // 0x3f798c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F7988u, 0x3F7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7990u;
label_3f7990:
    // 0x3f7990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7994:
    // 0x3f7994: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f7994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7998:
    // 0x3f7998: 0xc0f85ec  jal         func_3E17B0
label_3f799c:
    if (ctx->pc == 0x3F799Cu) {
        ctx->pc = 0x3F799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7998u;
        // 0x3f799c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79A0u;
        goto label_3f79a0;
    }
    ctx->pc = 0x3F7998u;
    SET_GPR_U32(ctx, 31, 0x3F79A0u);
    ctx->pc = 0x3F799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7998u;
    // 0x3f799c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F7998u, 0x3F79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F79A0u;
label_3f79a0:
    // 0x3f79a0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f79a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3f79a4:
    // 0x3f79a4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_3f79a8:
    if (ctx->pc == 0x3F79A8u) {
        ctx->pc = 0x3F79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79A4u;
        // 0x3f79a8: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79ACu;
        goto label_3f79ac;
    }
    ctx->pc = 0x3F79A4u;
    {
        const bool branch_taken_0x3f79a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f79a4) {
            ctx->pc = 0x3F79A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F79A4u;
            // 0x3f79a8: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f7978;
        }
    }
    ctx->pc = 0x3F79ACu;
label_3f79ac:
    // 0x3f79ac: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_3f79b0:
    if (ctx->pc == 0x3F79B0u) {
        ctx->pc = 0x3F79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79ACu;
        // 0x3f79b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79B4u;
        goto label_3f79b4;
    }
    ctx->pc = 0x3F79ACu;
    {
        const bool branch_taken_0x3f79ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79ACu;
        // 0x3f79b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f79ac) {
            ctx->pc = 0x3F79D4u;
            goto label_3f79d4;
        }
    }
    ctx->pc = 0x3F79B4u;
label_3f79b4:
    // 0x3f79b4: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f79b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f79b8:
    // 0x3f79b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f79b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f79bc:
    // 0x3f79bc: 0xc0f94da  jal         func_3E5368
label_3f79c0:
    if (ctx->pc == 0x3F79C0u) {
        ctx->pc = 0x3F79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79BCu;
        // 0x3f79c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79C4u;
        goto label_3f79c4;
    }
    ctx->pc = 0x3F79BCu;
    SET_GPR_U32(ctx, 31, 0x3F79C4u);
    ctx->pc = 0x3F79C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F79BCu;
    // 0x3f79c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F79BCu, 0x3F79C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F79C4u;
label_3f79c4:
    // 0x3f79c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f79c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f79c8:
    // 0x3f79c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f79c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f79cc:
    // 0x3f79cc: 0xc0f85ec  jal         func_3E17B0
label_3f79d0:
    if (ctx->pc == 0x3F79D0u) {
        ctx->pc = 0x3F79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79CCu;
        // 0x3f79d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79D4u;
        goto label_3f79d4;
    }
    ctx->pc = 0x3F79CCu;
    SET_GPR_U32(ctx, 31, 0x3F79D4u);
    ctx->pc = 0x3F79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F79CCu;
    // 0x3f79d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F79CCu, 0x3F79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F79D4u;
label_3f79d4:
    // 0x3f79d4: 0xc0fe77c  jal         func_3F9DF0
label_3f79d8:
    if (ctx->pc == 0x3F79D8u) {
        ctx->pc = 0x3F79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79D4u;
        // 0x3f79d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79DCu;
        goto label_3f79dc;
    }
    ctx->pc = 0x3F79D4u;
    SET_GPR_U32(ctx, 31, 0x3F79DCu);
    ctx->pc = 0x3F79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F79D4u;
    // 0x3f79d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F79D4u, 0x3F79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F79DCu;
label_3f79dc:
    // 0x3f79dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3f79e0:
    if (ctx->pc == 0x3F79E0u) {
        ctx->pc = 0x3F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79DCu;
        // 0x3f79e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79E4u;
        goto label_3f79e4;
    }
    ctx->pc = 0x3F79DCu;
    {
        const bool branch_taken_0x3f79dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79DCu;
        // 0x3f79e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f79dc) {
            ctx->pc = 0x3F7A38u;
            goto label_3f7a38;
        }
    }
    ctx->pc = 0x3F79E4u;
label_3f79e4:
    // 0x3f79e4: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f79e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
label_3f79e8:
    // 0x3f79e8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f79e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3f79ec:
    // 0x3f79ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f79f0:
    if (ctx->pc == 0x3F79F0u) {
        ctx->pc = 0x3F79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79ECu;
        // 0x3f79f0: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79F4u;
        goto label_3f79f4;
    }
    ctx->pc = 0x3F79ECu;
    {
        const bool branch_taken_0x3f79ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79ECu;
        // 0x3f79f0: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f79ec) {
            ctx->pc = 0x3F7A08u;
            goto label_3f7a08;
        }
    }
    ctx->pc = 0x3F79F4u;
label_3f79f4:
    // 0x3f79f4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f79f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_3f79f8:
    // 0x3f79f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f79fc:
    if (ctx->pc == 0x3F79FCu) {
        ctx->pc = 0x3F79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79F8u;
        // 0x3f79fc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A00u;
        goto label_3f7a00;
    }
    ctx->pc = 0x3F79F8u;
    {
        const bool branch_taken_0x3f79f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79F8u;
        // 0x3f79fc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f79f8) {
            ctx->pc = 0x3F7A14u;
            goto label_3f7a14;
        }
    }
    ctx->pc = 0x3F7A00u;
label_3f7a00:
    // 0x3f7a00: 0x1000000a  b           . + 4 + (0xA << 2)
label_3f7a04:
    if (ctx->pc == 0x3F7A04u) {
        ctx->pc = 0x3F7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A00u;
        // 0x3f7a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A08u;
        goto label_3f7a08;
    }
    ctx->pc = 0x3F7A00u;
    {
        const bool branch_taken_0x3f7a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A00u;
        // 0x3f7a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7a00) {
            ctx->pc = 0x3F7A2Cu;
            goto label_3f7a2c;
        }
    }
    ctx->pc = 0x3F7A08u;
label_3f7a08:
    // 0x3f7a08: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f7a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3f7a0c:
    // 0x3f7a0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f7a10:
    if (ctx->pc == 0x3F7A10u) {
        ctx->pc = 0x3F7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A0Cu;
        // 0x3f7a10: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A14u;
        goto label_3f7a14;
    }
    ctx->pc = 0x3F7A0Cu;
    {
        const bool branch_taken_0x3f7a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A0Cu;
        // 0x3f7a10: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7a0c) {
            ctx->pc = 0x3F7A28u;
            goto label_3f7a28;
        }
    }
    ctx->pc = 0x3F7A14u;
label_3f7a14:
    // 0x3f7a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7a18:
    // 0x3f7a18: 0xc0f865c  jal         func_3E1970
label_3f7a1c:
    if (ctx->pc == 0x3F7A1Cu) {
        ctx->pc = 0x3F7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A18u;
        // 0x3f7a1c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A20u;
        goto label_3f7a20;
    }
    ctx->pc = 0x3F7A18u;
    SET_GPR_U32(ctx, 31, 0x3F7A20u);
    ctx->pc = 0x3F7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7A18u;
    // 0x3f7a1c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F7A18u, 0x3F7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7A20u;
label_3f7a20:
    // 0x3f7a20: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f7a24:
    if (ctx->pc == 0x3F7A24u) {
        ctx->pc = 0x3F7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A20u;
        // 0x3f7a24: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A28u;
        goto label_3f7a28;
    }
    ctx->pc = 0x3F7A20u;
    {
        const bool branch_taken_0x3f7a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A20u;
        // 0x3f7a24: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7a20) {
            ctx->pc = 0x3F7A38u;
            goto label_3f7a38;
        }
    }
    ctx->pc = 0x3F7A28u;
label_3f7a28:
    // 0x3f7a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7a2c:
    // 0x3f7a2c: 0xc0f8704  jal         func_3E1C10
label_3f7a30:
    if (ctx->pc == 0x3F7A30u) {
        ctx->pc = 0x3F7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A2Cu;
        // 0x3f7a30: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A34u;
        goto label_3f7a34;
    }
    ctx->pc = 0x3F7A2Cu;
    SET_GPR_U32(ctx, 31, 0x3F7A34u);
    ctx->pc = 0x3F7A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7A2Cu;
    // 0x3f7a30: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F7A2Cu, 0x3F7A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7A34u;
label_3f7a34:
    // 0x3f7a34: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f7a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f7a38:
    // 0x3f7a38: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f7a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f7a3c:
    // 0x3f7a3c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f7a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f7a40:
    // 0x3f7a40: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f7a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f7a44:
    // 0x3f7a44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f7a44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f7a48:
    // 0x3f7a48: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3f7a48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7a4c:
    // 0x3f7a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f7a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7a50:
    // 0x3f7a50: 0x3e00008  jr          $ra
label_3f7a54:
    if (ctx->pc == 0x3F7A54u) {
        ctx->pc = 0x3F7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A50u;
        // 0x3f7a54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A58u;
        goto label_fallthrough_0x3f7a50;
    }
    ctx->pc = 0x3F7A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A50u;
        // 0x3f7a54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7a50:
    ctx->pc = 0x3F7A58u;
}
