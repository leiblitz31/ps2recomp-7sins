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

// Function: sub_003BB6A0
// Address: 0x3bb6a0 - 0x3bba30
void sub_003BB6A0_0x3bb6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB6A0_0x3bb6a0");
#endif

    switch (ctx->pc) {
        case 0x3bb6a0u: goto label_3bb6a0;
        case 0x3bb6a4u: goto label_3bb6a4;
        case 0x3bb6a8u: goto label_3bb6a8;
        case 0x3bb6acu: goto label_3bb6ac;
        case 0x3bb6b0u: goto label_3bb6b0;
        case 0x3bb6b4u: goto label_3bb6b4;
        case 0x3bb6b8u: goto label_3bb6b8;
        case 0x3bb6bcu: goto label_3bb6bc;
        case 0x3bb6c0u: goto label_3bb6c0;
        case 0x3bb6c4u: goto label_3bb6c4;
        case 0x3bb6c8u: goto label_3bb6c8;
        case 0x3bb6ccu: goto label_3bb6cc;
        case 0x3bb6d0u: goto label_3bb6d0;
        case 0x3bb6d4u: goto label_3bb6d4;
        case 0x3bb6d8u: goto label_3bb6d8;
        case 0x3bb6dcu: goto label_3bb6dc;
        case 0x3bb6e0u: goto label_3bb6e0;
        case 0x3bb6e4u: goto label_3bb6e4;
        case 0x3bb6e8u: goto label_3bb6e8;
        case 0x3bb6ecu: goto label_3bb6ec;
        case 0x3bb6f0u: goto label_3bb6f0;
        case 0x3bb6f4u: goto label_3bb6f4;
        case 0x3bb6f8u: goto label_3bb6f8;
        case 0x3bb6fcu: goto label_3bb6fc;
        case 0x3bb700u: goto label_3bb700;
        case 0x3bb704u: goto label_3bb704;
        case 0x3bb708u: goto label_3bb708;
        case 0x3bb70cu: goto label_3bb70c;
        case 0x3bb710u: goto label_3bb710;
        case 0x3bb714u: goto label_3bb714;
        case 0x3bb718u: goto label_3bb718;
        case 0x3bb71cu: goto label_3bb71c;
        case 0x3bb720u: goto label_3bb720;
        case 0x3bb724u: goto label_3bb724;
        case 0x3bb728u: goto label_3bb728;
        case 0x3bb72cu: goto label_3bb72c;
        case 0x3bb730u: goto label_3bb730;
        case 0x3bb734u: goto label_3bb734;
        case 0x3bb738u: goto label_3bb738;
        case 0x3bb73cu: goto label_3bb73c;
        case 0x3bb740u: goto label_3bb740;
        case 0x3bb744u: goto label_3bb744;
        case 0x3bb748u: goto label_3bb748;
        case 0x3bb74cu: goto label_3bb74c;
        case 0x3bb750u: goto label_3bb750;
        case 0x3bb754u: goto label_3bb754;
        case 0x3bb758u: goto label_3bb758;
        case 0x3bb75cu: goto label_3bb75c;
        case 0x3bb760u: goto label_3bb760;
        case 0x3bb764u: goto label_3bb764;
        case 0x3bb768u: goto label_3bb768;
        case 0x3bb76cu: goto label_3bb76c;
        case 0x3bb770u: goto label_3bb770;
        case 0x3bb774u: goto label_3bb774;
        case 0x3bb778u: goto label_3bb778;
        case 0x3bb77cu: goto label_3bb77c;
        case 0x3bb780u: goto label_3bb780;
        case 0x3bb784u: goto label_3bb784;
        case 0x3bb788u: goto label_3bb788;
        case 0x3bb78cu: goto label_3bb78c;
        case 0x3bb790u: goto label_3bb790;
        case 0x3bb794u: goto label_3bb794;
        case 0x3bb798u: goto label_3bb798;
        case 0x3bb79cu: goto label_3bb79c;
        case 0x3bb7a0u: goto label_3bb7a0;
        case 0x3bb7a4u: goto label_3bb7a4;
        case 0x3bb7a8u: goto label_3bb7a8;
        case 0x3bb7acu: goto label_3bb7ac;
        case 0x3bb7b0u: goto label_3bb7b0;
        case 0x3bb7b4u: goto label_3bb7b4;
        case 0x3bb7b8u: goto label_3bb7b8;
        case 0x3bb7bcu: goto label_3bb7bc;
        case 0x3bb7c0u: goto label_3bb7c0;
        case 0x3bb7c4u: goto label_3bb7c4;
        case 0x3bb7c8u: goto label_3bb7c8;
        case 0x3bb7ccu: goto label_3bb7cc;
        case 0x3bb7d0u: goto label_3bb7d0;
        case 0x3bb7d4u: goto label_3bb7d4;
        case 0x3bb7d8u: goto label_3bb7d8;
        case 0x3bb7dcu: goto label_3bb7dc;
        case 0x3bb7e0u: goto label_3bb7e0;
        case 0x3bb7e4u: goto label_3bb7e4;
        case 0x3bb7e8u: goto label_3bb7e8;
        case 0x3bb7ecu: goto label_3bb7ec;
        case 0x3bb7f0u: goto label_3bb7f0;
        case 0x3bb7f4u: goto label_3bb7f4;
        case 0x3bb7f8u: goto label_3bb7f8;
        case 0x3bb7fcu: goto label_3bb7fc;
        case 0x3bb800u: goto label_3bb800;
        case 0x3bb804u: goto label_3bb804;
        case 0x3bb808u: goto label_3bb808;
        case 0x3bb80cu: goto label_3bb80c;
        case 0x3bb810u: goto label_3bb810;
        case 0x3bb814u: goto label_3bb814;
        case 0x3bb818u: goto label_3bb818;
        case 0x3bb81cu: goto label_3bb81c;
        case 0x3bb820u: goto label_3bb820;
        case 0x3bb824u: goto label_3bb824;
        case 0x3bb828u: goto label_3bb828;
        case 0x3bb82cu: goto label_3bb82c;
        case 0x3bb830u: goto label_3bb830;
        case 0x3bb834u: goto label_3bb834;
        case 0x3bb838u: goto label_3bb838;
        case 0x3bb83cu: goto label_3bb83c;
        case 0x3bb840u: goto label_3bb840;
        case 0x3bb844u: goto label_3bb844;
        case 0x3bb848u: goto label_3bb848;
        case 0x3bb84cu: goto label_3bb84c;
        case 0x3bb850u: goto label_3bb850;
        case 0x3bb854u: goto label_3bb854;
        case 0x3bb858u: goto label_3bb858;
        case 0x3bb85cu: goto label_3bb85c;
        case 0x3bb860u: goto label_3bb860;
        case 0x3bb864u: goto label_3bb864;
        case 0x3bb868u: goto label_3bb868;
        case 0x3bb86cu: goto label_3bb86c;
        case 0x3bb870u: goto label_3bb870;
        case 0x3bb874u: goto label_3bb874;
        case 0x3bb878u: goto label_3bb878;
        case 0x3bb87cu: goto label_3bb87c;
        case 0x3bb880u: goto label_3bb880;
        case 0x3bb884u: goto label_3bb884;
        case 0x3bb888u: goto label_3bb888;
        case 0x3bb88cu: goto label_3bb88c;
        case 0x3bb890u: goto label_3bb890;
        case 0x3bb894u: goto label_3bb894;
        case 0x3bb898u: goto label_3bb898;
        case 0x3bb89cu: goto label_3bb89c;
        case 0x3bb8a0u: goto label_3bb8a0;
        case 0x3bb8a4u: goto label_3bb8a4;
        case 0x3bb8a8u: goto label_3bb8a8;
        case 0x3bb8acu: goto label_3bb8ac;
        case 0x3bb8b0u: goto label_3bb8b0;
        case 0x3bb8b4u: goto label_3bb8b4;
        case 0x3bb8b8u: goto label_3bb8b8;
        case 0x3bb8bcu: goto label_3bb8bc;
        case 0x3bb8c0u: goto label_3bb8c0;
        case 0x3bb8c4u: goto label_3bb8c4;
        case 0x3bb8c8u: goto label_3bb8c8;
        case 0x3bb8ccu: goto label_3bb8cc;
        case 0x3bb8d0u: goto label_3bb8d0;
        case 0x3bb8d4u: goto label_3bb8d4;
        case 0x3bb8d8u: goto label_3bb8d8;
        case 0x3bb8dcu: goto label_3bb8dc;
        case 0x3bb8e0u: goto label_3bb8e0;
        case 0x3bb8e4u: goto label_3bb8e4;
        case 0x3bb8e8u: goto label_3bb8e8;
        case 0x3bb8ecu: goto label_3bb8ec;
        case 0x3bb8f0u: goto label_3bb8f0;
        case 0x3bb8f4u: goto label_3bb8f4;
        case 0x3bb8f8u: goto label_3bb8f8;
        case 0x3bb8fcu: goto label_3bb8fc;
        case 0x3bb900u: goto label_3bb900;
        case 0x3bb904u: goto label_3bb904;
        case 0x3bb908u: goto label_3bb908;
        case 0x3bb90cu: goto label_3bb90c;
        case 0x3bb910u: goto label_3bb910;
        case 0x3bb914u: goto label_3bb914;
        case 0x3bb918u: goto label_3bb918;
        case 0x3bb91cu: goto label_3bb91c;
        case 0x3bb920u: goto label_3bb920;
        case 0x3bb924u: goto label_3bb924;
        case 0x3bb928u: goto label_3bb928;
        case 0x3bb92cu: goto label_3bb92c;
        case 0x3bb930u: goto label_3bb930;
        case 0x3bb934u: goto label_3bb934;
        case 0x3bb938u: goto label_3bb938;
        case 0x3bb93cu: goto label_3bb93c;
        case 0x3bb940u: goto label_3bb940;
        case 0x3bb944u: goto label_3bb944;
        case 0x3bb948u: goto label_3bb948;
        case 0x3bb94cu: goto label_3bb94c;
        case 0x3bb950u: goto label_3bb950;
        case 0x3bb954u: goto label_3bb954;
        case 0x3bb958u: goto label_3bb958;
        case 0x3bb95cu: goto label_3bb95c;
        case 0x3bb960u: goto label_3bb960;
        case 0x3bb964u: goto label_3bb964;
        case 0x3bb968u: goto label_3bb968;
        case 0x3bb96cu: goto label_3bb96c;
        case 0x3bb970u: goto label_3bb970;
        case 0x3bb974u: goto label_3bb974;
        case 0x3bb978u: goto label_3bb978;
        case 0x3bb97cu: goto label_3bb97c;
        case 0x3bb980u: goto label_3bb980;
        case 0x3bb984u: goto label_3bb984;
        case 0x3bb988u: goto label_3bb988;
        case 0x3bb98cu: goto label_3bb98c;
        case 0x3bb990u: goto label_3bb990;
        case 0x3bb994u: goto label_3bb994;
        case 0x3bb998u: goto label_3bb998;
        case 0x3bb99cu: goto label_3bb99c;
        case 0x3bb9a0u: goto label_3bb9a0;
        case 0x3bb9a4u: goto label_3bb9a4;
        case 0x3bb9a8u: goto label_3bb9a8;
        case 0x3bb9acu: goto label_3bb9ac;
        case 0x3bb9b0u: goto label_3bb9b0;
        case 0x3bb9b4u: goto label_3bb9b4;
        case 0x3bb9b8u: goto label_3bb9b8;
        case 0x3bb9bcu: goto label_3bb9bc;
        case 0x3bb9c0u: goto label_3bb9c0;
        case 0x3bb9c4u: goto label_3bb9c4;
        case 0x3bb9c8u: goto label_3bb9c8;
        case 0x3bb9ccu: goto label_3bb9cc;
        case 0x3bb9d0u: goto label_3bb9d0;
        case 0x3bb9d4u: goto label_3bb9d4;
        case 0x3bb9d8u: goto label_3bb9d8;
        case 0x3bb9dcu: goto label_3bb9dc;
        case 0x3bb9e0u: goto label_3bb9e0;
        case 0x3bb9e4u: goto label_3bb9e4;
        case 0x3bb9e8u: goto label_3bb9e8;
        case 0x3bb9ecu: goto label_3bb9ec;
        case 0x3bb9f0u: goto label_3bb9f0;
        case 0x3bb9f4u: goto label_3bb9f4;
        case 0x3bb9f8u: goto label_3bb9f8;
        case 0x3bb9fcu: goto label_3bb9fc;
        case 0x3bba00u: goto label_3bba00;
        case 0x3bba04u: goto label_3bba04;
        case 0x3bba08u: goto label_3bba08;
        case 0x3bba0cu: goto label_3bba0c;
        case 0x3bba10u: goto label_3bba10;
        case 0x3bba14u: goto label_3bba14;
        case 0x3bba18u: goto label_3bba18;
        case 0x3bba1cu: goto label_3bba1c;
        case 0x3bba20u: goto label_3bba20;
        case 0x3bba24u: goto label_3bba24;
        case 0x3bba28u: goto label_3bba28;
        case 0x3bba2cu: goto label_3bba2c;
        default: break;
    }

    ctx->pc = 0x3bb6a0u;

label_3bb6a0:
    // 0x3bb6a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3bb6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3bb6a4:
    // 0x3bb6a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bb6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3bb6a8:
    // 0x3bb6a8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3bb6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3bb6ac:
    // 0x3bb6ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3bb6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bb6b0:
    // 0x3bb6b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bb6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bb6b4:
    // 0x3bb6b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3bb6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3bb6b8:
    // 0x3bb6b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3bb6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3bb6bc:
    // 0x3bb6bc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3bb6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3bb6c0:
    // 0x3bb6c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3bb6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3bb6c4:
    // 0x3bb6c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bb6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3bb6c8:
    // 0x3bb6c8: 0xc103468  jal         func_40D1A0
label_3bb6cc:
    if (ctx->pc == 0x3BB6CCu) {
        ctx->pc = 0x3BB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6C8u;
        // 0x3bb6cc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB6D0u;
        goto label_3bb6d0;
    }
    ctx->pc = 0x3BB6C8u;
    SET_GPR_U32(ctx, 31, 0x3BB6D0u);
    ctx->pc = 0x3BB6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB6C8u;
    // 0x3bb6cc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3BB6C8u, 0x3BB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB6D0u;
label_3bb6d0:
    // 0x3bb6d0: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_3bb6d4:
    if (ctx->pc == 0x3BB6D4u) {
        ctx->pc = 0x3BB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6D0u;
        // 0x3bb6d4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB6D8u;
        goto label_3bb6d8;
    }
    ctx->pc = 0x3BB6D0u;
    {
        const bool branch_taken_0x3bb6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6D0u;
        // 0x3bb6d4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6d0) {
            ctx->pc = 0x3BBA08u;
            goto label_3bba08;
        }
    }
    ctx->pc = 0x3BB6D8u;
label_3bb6d8:
    // 0x3bb6d8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3bb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3bb6dc:
    // 0x3bb6dc: 0x146200cb  bne         $v1, $v0, . + 4 + (0xCB << 2)
label_3bb6e0:
    if (ctx->pc == 0x3BB6E0u) {
        ctx->pc = 0x3BB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6DCu;
        // 0x3bb6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB6E4u;
        goto label_3bb6e4;
    }
    ctx->pc = 0x3BB6DCu;
    {
        const bool branch_taken_0x3bb6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6DCu;
        // 0x3bb6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6dc) {
            ctx->pc = 0x3BBA0Cu;
            goto label_3bba0c;
        }
    }
    ctx->pc = 0x3BB6E4u;
label_3bb6e4:
    // 0x3bb6e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bb6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bb6e8:
    // 0x3bb6e8: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x3bb6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_3bb6ec:
    // 0x3bb6ec: 0xc103468  jal         func_40D1A0
label_3bb6f0:
    if (ctx->pc == 0x3BB6F0u) {
        ctx->pc = 0x3BB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6ECu;
        // 0x3bb6f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB6F4u;
        goto label_3bb6f4;
    }
    ctx->pc = 0x3BB6ECu;
    SET_GPR_U32(ctx, 31, 0x3BB6F4u);
    ctx->pc = 0x3BB6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB6ECu;
    // 0x3bb6f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3BB6ECu, 0x3BB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB6F4u;
label_3bb6f4:
    // 0x3bb6f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3bb6f8:
    if (ctx->pc == 0x3BB6F8u) {
        ctx->pc = 0x3BB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6F4u;
        // 0x3bb6f8: 0x8f82ab6c  lw          $v0, -0x5494($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB6FCu;
        goto label_3bb6fc;
    }
    ctx->pc = 0x3BB6F4u;
    {
        const bool branch_taken_0x3bb6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6F4u;
        // 0x3bb6f8: 0x8f82ab6c  lw          $v0, -0x5494($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6f4) {
            ctx->pc = 0x3BB70Cu;
            goto label_3bb70c;
        }
    }
    ctx->pc = 0x3BB6FCu;
label_3bb6fc:
    // 0x3bb6fc: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_3bb700:
    if (ctx->pc == 0x3BB700u) {
        ctx->pc = 0x3BB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6FCu;
        // 0x3bb700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB704u;
        goto label_3bb704;
    }
    ctx->pc = 0x3BB6FCu;
    {
        const bool branch_taken_0x3bb6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6FCu;
        // 0x3bb700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6fc) {
            ctx->pc = 0x3BBA0Cu;
            goto label_3bba0c;
        }
    }
    ctx->pc = 0x3BB704u;
label_3bb704:
    // 0x3bb704: 0x10000042  b           . + 4 + (0x42 << 2)
label_3bb708:
    if (ctx->pc == 0x3BB708u) {
        ctx->pc = 0x3BB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB704u;
        // 0x3bb708: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB70Cu;
        goto label_3bb70c;
    }
    ctx->pc = 0x3BB704u;
    {
        const bool branch_taken_0x3bb704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB704u;
        // 0x3bb708: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb704) {
            ctx->pc = 0x3BB810u;
            goto label_3bb810;
        }
    }
    ctx->pc = 0x3BB70Cu;
label_3bb70c:
    // 0x3bb70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bb70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb710:
    // 0x3bb710: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x3bb710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3bb714:
    // 0x3bb714: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
label_3bb718:
    if (ctx->pc == 0x3BB718u) {
        ctx->pc = 0x3BB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB714u;
        // 0x3bb718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB71Cu;
        goto label_3bb71c;
    }
    ctx->pc = 0x3BB714u;
    {
        const bool branch_taken_0x3bb714 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB714u;
        // 0x3bb718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb714) {
            ctx->pc = 0x3BB7ECu;
            goto label_3bb7ec;
        }
    }
    ctx->pc = 0x3BB71Cu;
label_3bb71c:
    // 0x3bb71c: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x3bb71cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_3bb720:
    // 0x3bb720: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3bb720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bb724:
    // 0x3bb724: 0x2545dcd8  addiu       $a1, $t2, -0x2328
    ctx->pc = 0x3bb724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958296));
label_3bb728:
    // 0x3bb728: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x3bb728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_3bb72c:
    // 0x3bb72c: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
label_3bb730:
    if (ctx->pc == 0x3BB730u) {
        ctx->pc = 0x3BB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB72Cu;
        // 0x3bb730: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB734u;
        goto label_3bb734;
    }
    ctx->pc = 0x3BB72Cu;
    {
        const bool branch_taken_0x3bb72c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3BB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB72Cu;
        // 0x3bb730: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb72c) {
            ctx->pc = 0x3BB784u;
            goto label_3bb784;
        }
    }
    ctx->pc = 0x3BB734u;
label_3bb734:
    // 0x3bb734: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3bb738:
    if (ctx->pc == 0x3BB738u) {
        ctx->pc = 0x3BB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB734u;
        // 0x3bb738: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB73Cu;
        goto label_3bb73c;
    }
    ctx->pc = 0x3BB734u;
    {
        const bool branch_taken_0x3bb734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB734u;
        // 0x3bb738: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb734) {
            ctx->pc = 0x3BB7A4u;
            goto label_3bb7a4;
        }
    }
    ctx->pc = 0x3BB73Cu;
label_3bb73c:
    // 0x3bb73c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3bb740:
    if (ctx->pc == 0x3BB740u) {
        ctx->pc = 0x3BB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB73Cu;
        // 0x3bb740: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB744u;
        goto label_3bb744;
    }
    ctx->pc = 0x3BB73Cu;
    {
        const bool branch_taken_0x3bb73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb73c) {
            ctx->pc = 0x3BB740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB73Cu;
            // 0x3bb740: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB788u;
            goto label_3bb788;
        }
    }
    ctx->pc = 0x3BB744u;
label_3bb744:
    // 0x3bb744: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bb744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3bb748:
    // 0x3bb748: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3bb74c:
    if (ctx->pc == 0x3BB74Cu) {
        ctx->pc = 0x3BB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB748u;
        // 0x3bb74c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB750u;
        goto label_3bb750;
    }
    ctx->pc = 0x3BB748u;
    {
        const bool branch_taken_0x3bb748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb748) {
            ctx->pc = 0x3BB74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB748u;
            // 0x3bb74c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB770u;
            goto label_3bb770;
        }
    }
    ctx->pc = 0x3BB750u;
label_3bb750:
    // 0x3bb750: 0x8d42dcd8  lw          $v0, -0x2328($t2)
    ctx->pc = 0x3bb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294958296)));
label_3bb754:
    // 0x3bb754: 0x1047ffeb  beq         $v0, $a3, . + 4 + (-0x15 << 2)
label_3bb758:
    if (ctx->pc == 0x3BB758u) {
        ctx->pc = 0x3BB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB754u;
        // 0x3bb758: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB75Cu;
        goto label_3bb75c;
    }
    ctx->pc = 0x3BB754u;
    {
        const bool branch_taken_0x3bb754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB754u;
        // 0x3bb758: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb754) {
            ctx->pc = 0x3BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb704;
        }
    }
    ctx->pc = 0x3BB75Cu;
label_3bb75c:
    // 0x3bb75c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x3bb75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3bb760:
    // 0x3bb760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3bb760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bb764:
    // 0x3bb764: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3bb764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb768:
    // 0x3bb768: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3bb768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bb76c:
    // 0x3bb76c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bb770:
    // 0x3bb770: 0x1047ffe4  beq         $v0, $a3, . + 4 + (-0x1C << 2)
label_3bb774:
    if (ctx->pc == 0x3BB774u) {
        ctx->pc = 0x3BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB770u;
        // 0x3bb774: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB778u;
        goto label_3bb778;
    }
    ctx->pc = 0x3BB770u;
    {
        const bool branch_taken_0x3bb770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB770u;
        // 0x3bb774: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb770) {
            ctx->pc = 0x3BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb704;
        }
    }
    ctx->pc = 0x3BB778u;
label_3bb778:
    // 0x3bb778: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x3bb778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_3bb77c:
    // 0x3bb77c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x3bb77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3bb780:
    // 0x3bb780: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3bb780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3bb784:
    // 0x3bb784: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bb784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bb788:
    // 0x3bb788: 0x1047ffde  beq         $v0, $a3, . + 4 + (-0x22 << 2)
label_3bb78c:
    if (ctx->pc == 0x3BB78Cu) {
        ctx->pc = 0x3BB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB788u;
        // 0x3bb78c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB790u;
        goto label_3bb790;
    }
    ctx->pc = 0x3BB788u;
    {
        const bool branch_taken_0x3bb788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB788u;
        // 0x3bb78c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb788) {
            ctx->pc = 0x3BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb704;
        }
    }
    ctx->pc = 0x3BB790u;
label_3bb790:
    // 0x3bb790: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3bb790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3bb794:
    // 0x3bb794: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x3bb794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_3bb798:
    // 0x3bb798: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x3bb798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bb79c:
    // 0x3bb79c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3bb7a0:
    if (ctx->pc == 0x3BB7A0u) {
        ctx->pc = 0x3BB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB79Cu;
        // 0x3bb7a0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB7A4u;
        goto label_3bb7a4;
    }
    ctx->pc = 0x3BB79Cu;
    {
        const bool branch_taken_0x3bb79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB79Cu;
        // 0x3bb7a0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb79c) {
            ctx->pc = 0x3BB7ECu;
            goto label_3bb7ec;
        }
    }
    ctx->pc = 0x3BB7A4u;
label_3bb7a4:
    // 0x3bb7a4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3bb7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bb7a8:
    // 0x3bb7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bb7ac:
    // 0x3bb7ac: 0x1047ffd5  beq         $v0, $a3, . + 4 + (-0x2B << 2)
label_3bb7b0:
    if (ctx->pc == 0x3BB7B0u) {
        ctx->pc = 0x3BB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7ACu;
        // 0x3bb7b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB7B4u;
        goto label_3bb7b4;
    }
    ctx->pc = 0x3BB7ACu;
    {
        const bool branch_taken_0x3bb7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7ACu;
        // 0x3bb7b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7ac) {
            ctx->pc = 0x3BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb704;
        }
    }
    ctx->pc = 0x3BB7B4u;
label_3bb7b4:
    // 0x3bb7b4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3bb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3bb7b8:
    // 0x3bb7b8: 0x1047ffd2  beq         $v0, $a3, . + 4 + (-0x2E << 2)
label_3bb7bc:
    if (ctx->pc == 0x3BB7BCu) {
        ctx->pc = 0x3BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7B8u;
        // 0x3bb7bc: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB7C0u;
        goto label_3bb7c0;
    }
    ctx->pc = 0x3BB7B8u;
    {
        const bool branch_taken_0x3bb7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7B8u;
        // 0x3bb7bc: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7b8) {
            ctx->pc = 0x3BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb704;
        }
    }
    ctx->pc = 0x3BB7C0u;
label_3bb7c0:
    // 0x3bb7c0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x3bb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3bb7c4:
    // 0x3bb7c4: 0x1047ffcf  beq         $v0, $a3, . + 4 + (-0x31 << 2)
label_3bb7c8:
    if (ctx->pc == 0x3BB7C8u) {
        ctx->pc = 0x3BB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7C4u;
        // 0x3bb7c8: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB7CCu;
        goto label_3bb7cc;
    }
    ctx->pc = 0x3BB7C4u;
    {
        const bool branch_taken_0x3bb7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7C4u;
        // 0x3bb7c8: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7c4) {
            ctx->pc = 0x3BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb704;
        }
    }
    ctx->pc = 0x3BB7CCu;
label_3bb7cc:
    // 0x3bb7cc: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3bb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_3bb7d0:
    // 0x3bb7d0: 0x1047ffcc  beq         $v0, $a3, . + 4 + (-0x34 << 2)
label_3bb7d4:
    if (ctx->pc == 0x3BB7D4u) {
        ctx->pc = 0x3BB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7D0u;
        // 0x3bb7d4: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB7D8u;
        goto label_3bb7d8;
    }
    ctx->pc = 0x3BB7D0u;
    {
        const bool branch_taken_0x3bb7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7D0u;
        // 0x3bb7d4: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7d0) {
            ctx->pc = 0x3BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb704;
        }
    }
    ctx->pc = 0x3BB7D8u;
label_3bb7d8:
    // 0x3bb7d8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3bb7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3bb7dc:
    // 0x3bb7dc: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x3bb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3bb7e0:
    // 0x3bb7e0: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x3bb7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bb7e4:
    // 0x3bb7e4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3bb7e8:
    if (ctx->pc == 0x3BB7E8u) {
        ctx->pc = 0x3BB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7E4u;
        // 0x3bb7e8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB7ECu;
        goto label_3bb7ec;
    }
    ctx->pc = 0x3BB7E4u;
    {
        const bool branch_taken_0x3bb7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7E4u;
        // 0x3bb7e8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7e4) {
            ctx->pc = 0x3BB7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb7a8;
        }
    }
    ctx->pc = 0x3BB7ECu;
label_3bb7ec:
    // 0x3bb7ec: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x3bb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_3bb7f0:
    // 0x3bb7f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3bb7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bb7f4:
    // 0x3bb7f4: 0xc1035f6  jal         func_40D7D8
label_3bb7f8:
    if (ctx->pc == 0x3BB7F8u) {
        ctx->pc = 0x3BB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7F4u;
        // 0x3bb7f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB7FCu;
        goto label_3bb7fc;
    }
    ctx->pc = 0x3BB7F4u;
    SET_GPR_U32(ctx, 31, 0x3BB7FCu);
    ctx->pc = 0x3BB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7F4u;
    // 0x3bb7f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BB7F4u, 0x3BB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7FCu;
label_3bb7fc:
    // 0x3bb7fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bb7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bb800:
    // 0x3bb800: 0xc103628  jal         func_40D8A0
label_3bb804:
    if (ctx->pc == 0x3BB804u) {
        ctx->pc = 0x3BB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB800u;
        // 0x3bb804: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB808u;
        goto label_3bb808;
    }
    ctx->pc = 0x3BB800u;
    SET_GPR_U32(ctx, 31, 0x3BB808u);
    ctx->pc = 0x3BB804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB800u;
    // 0x3bb804: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BB800u, 0x3BB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB808u;
label_3bb808:
    // 0x3bb808: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3bb808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb80c:
    // 0x3bb80c: 0x0  nop
    ctx->pc = 0x3bb80cu;
    // NOP
label_3bb810:
    // 0x3bb810: 0x1260007d  beqz        $s3, . + 4 + (0x7D << 2)
label_3bb814:
    if (ctx->pc == 0x3BB814u) {
        ctx->pc = 0x3BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB810u;
        // 0x3bb814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB818u;
        goto label_3bb818;
    }
    ctx->pc = 0x3BB810u;
    {
        const bool branch_taken_0x3bb810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB810u;
        // 0x3bb814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb810) {
            ctx->pc = 0x3BBA08u;
            goto label_3bba08;
        }
    }
    ctx->pc = 0x3BB818u;
label_3bb818:
    // 0x3bb818: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x3bb818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_3bb81c:
    // 0x3bb81c: 0xc103468  jal         func_40D1A0
label_3bb820:
    if (ctx->pc == 0x3BB820u) {
        ctx->pc = 0x3BB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB81Cu;
        // 0x3bb820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB824u;
        goto label_3bb824;
    }
    ctx->pc = 0x3BB81Cu;
    SET_GPR_U32(ctx, 31, 0x3BB824u);
    ctx->pc = 0x3BB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB81Cu;
    // 0x3bb820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3BB81Cu, 0x3BB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB824u;
label_3bb824:
    // 0x3bb824: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_3bb828:
    if (ctx->pc == 0x3BB828u) {
        ctx->pc = 0x3BB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB824u;
        // 0x3bb828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB82Cu;
        goto label_3bb82c;
    }
    ctx->pc = 0x3BB824u;
    {
        const bool branch_taken_0x3bb824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB824u;
        // 0x3bb828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb824) {
            ctx->pc = 0x3BBA08u;
            goto label_3bba08;
        }
    }
    ctx->pc = 0x3BB82Cu;
label_3bb82c:
    // 0x3bb82c: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x3bb82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3bb830:
    // 0x3bb830: 0xc103468  jal         func_40D1A0
label_3bb834:
    if (ctx->pc == 0x3BB834u) {
        ctx->pc = 0x3BB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB830u;
        // 0x3bb834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB838u;
        goto label_3bb838;
    }
    ctx->pc = 0x3BB830u;
    SET_GPR_U32(ctx, 31, 0x3BB838u);
    ctx->pc = 0x3BB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB830u;
    // 0x3bb834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3BB830u, 0x3BB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB838u;
label_3bb838:
    // 0x3bb838: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_3bb83c:
    if (ctx->pc == 0x3BB83Cu) {
        ctx->pc = 0x3BB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB838u;
        // 0x3bb83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB840u;
        goto label_3bb840;
    }
    ctx->pc = 0x3BB838u;
    {
        const bool branch_taken_0x3bb838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB838u;
        // 0x3bb83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb838) {
            ctx->pc = 0x3BBA08u;
            goto label_3bba08;
        }
    }
    ctx->pc = 0x3BB840u;
label_3bb840:
    // 0x3bb840: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3bb840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3bb844:
    // 0x3bb844: 0xc103454  jal         func_40D150
label_3bb848:
    if (ctx->pc == 0x3BB848u) {
        ctx->pc = 0x3BB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB844u;
        // 0x3bb848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB84Cu;
        goto label_3bb84c;
    }
    ctx->pc = 0x3BB844u;
    SET_GPR_U32(ctx, 31, 0x3BB84Cu);
    ctx->pc = 0x3BB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB844u;
    // 0x3bb848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3BB844u, 0x3BB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB84Cu;
label_3bb84c:
    // 0x3bb84c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3bb850:
    if (ctx->pc == 0x3BB850u) {
        ctx->pc = 0x3BB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB84Cu;
        // 0x3bb850: 0x8f82ab6c  lw          $v0, -0x5494($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB854u;
        goto label_3bb854;
    }
    ctx->pc = 0x3BB84Cu;
    {
        const bool branch_taken_0x3bb84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB84Cu;
        // 0x3bb850: 0x8f82ab6c  lw          $v0, -0x5494($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb84c) {
            ctx->pc = 0x3BB864u;
            goto label_3bb864;
        }
    }
    ctx->pc = 0x3BB854u;
label_3bb854:
    // 0x3bb854: 0x1000006d  b           . + 4 + (0x6D << 2)
label_3bb858:
    if (ctx->pc == 0x3BB858u) {
        ctx->pc = 0x3BB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB854u;
        // 0x3bb858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB85Cu;
        goto label_3bb85c;
    }
    ctx->pc = 0x3BB854u;
    {
        const bool branch_taken_0x3bb854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB854u;
        // 0x3bb858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb854) {
            ctx->pc = 0x3BBA0Cu;
            goto label_3bba0c;
        }
    }
    ctx->pc = 0x3BB85Cu;
label_3bb85c:
    // 0x3bb85c: 0x10000046  b           . + 4 + (0x46 << 2)
label_3bb860:
    if (ctx->pc == 0x3BB860u) {
        ctx->pc = 0x3BB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB85Cu;
        // 0x3bb860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB864u;
        goto label_3bb864;
    }
    ctx->pc = 0x3BB85Cu;
    {
        const bool branch_taken_0x3bb85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB85Cu;
        // 0x3bb860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb85c) {
            ctx->pc = 0x3BB978u;
            goto label_3bb978;
        }
    }
    ctx->pc = 0x3BB864u;
label_3bb864:
    // 0x3bb864: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x3bb864u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3bb868:
    // 0x3bb868: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x3bb868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3bb86c:
    // 0x3bb86c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bb86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb870:
    // 0x3bb870: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x3bb870u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3bb874:
    // 0x3bb874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bb874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb878:
    // 0x3bb878: 0x8fb4002c  lw          $s4, 0x2C($sp)
    ctx->pc = 0x3bb878u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3bb87c:
    // 0x3bb87c: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
label_3bb880:
    if (ctx->pc == 0x3BB880u) {
        ctx->pc = 0x3BB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB87Cu;
        // 0x3bb880: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB884u;
        goto label_3bb884;
    }
    ctx->pc = 0x3BB87Cu;
    {
        const bool branch_taken_0x3bb87c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB87Cu;
        // 0x3bb880: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb87c) {
            ctx->pc = 0x3BB954u;
            goto label_3bb954;
        }
    }
    ctx->pc = 0x3BB884u;
label_3bb884:
    // 0x3bb884: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x3bb884u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_3bb888:
    // 0x3bb888: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3bb888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bb88c:
    // 0x3bb88c: 0x2545dcd8  addiu       $a1, $t2, -0x2328
    ctx->pc = 0x3bb88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958296));
label_3bb890:
    // 0x3bb890: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x3bb890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3bb894:
    // 0x3bb894: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
label_3bb898:
    if (ctx->pc == 0x3BB898u) {
        ctx->pc = 0x3BB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB894u;
        // 0x3bb898: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB89Cu;
        goto label_3bb89c;
    }
    ctx->pc = 0x3BB894u;
    {
        const bool branch_taken_0x3bb894 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3BB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB894u;
        // 0x3bb898: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb894) {
            ctx->pc = 0x3BB8ECu;
            goto label_3bb8ec;
        }
    }
    ctx->pc = 0x3BB89Cu;
label_3bb89c:
    // 0x3bb89c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3bb8a0:
    if (ctx->pc == 0x3BB8A0u) {
        ctx->pc = 0x3BB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB89Cu;
        // 0x3bb8a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB8A4u;
        goto label_3bb8a4;
    }
    ctx->pc = 0x3BB89Cu;
    {
        const bool branch_taken_0x3bb89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB89Cu;
        // 0x3bb8a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb89c) {
            ctx->pc = 0x3BB90Cu;
            goto label_3bb90c;
        }
    }
    ctx->pc = 0x3BB8A4u;
label_3bb8a4:
    // 0x3bb8a4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3bb8a8:
    if (ctx->pc == 0x3BB8A8u) {
        ctx->pc = 0x3BB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8A4u;
        // 0x3bb8a8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB8ACu;
        goto label_3bb8ac;
    }
    ctx->pc = 0x3BB8A4u;
    {
        const bool branch_taken_0x3bb8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8a4) {
            ctx->pc = 0x3BB8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB8A4u;
            // 0x3bb8a8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB8F0u;
            goto label_3bb8f0;
        }
    }
    ctx->pc = 0x3BB8ACu;
label_3bb8ac:
    // 0x3bb8ac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bb8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3bb8b0:
    // 0x3bb8b0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3bb8b4:
    if (ctx->pc == 0x3BB8B4u) {
        ctx->pc = 0x3BB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8B0u;
        // 0x3bb8b4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB8B8u;
        goto label_3bb8b8;
    }
    ctx->pc = 0x3BB8B0u;
    {
        const bool branch_taken_0x3bb8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8b0) {
            ctx->pc = 0x3BB8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB8B0u;
            // 0x3bb8b4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB8D8u;
            goto label_3bb8d8;
        }
    }
    ctx->pc = 0x3BB8B8u;
label_3bb8b8:
    // 0x3bb8b8: 0x8d42dcd8  lw          $v0, -0x2328($t2)
    ctx->pc = 0x3bb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294958296)));
label_3bb8bc:
    // 0x3bb8bc: 0x1047ffe7  beq         $v0, $a3, . + 4 + (-0x19 << 2)
label_3bb8c0:
    if (ctx->pc == 0x3BB8C0u) {
        ctx->pc = 0x3BB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8BCu;
        // 0x3bb8c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB8C4u;
        goto label_3bb8c4;
    }
    ctx->pc = 0x3BB8BCu;
    {
        const bool branch_taken_0x3bb8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8BCu;
        // 0x3bb8c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8bc) {
            ctx->pc = 0x3BB85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb85c;
        }
    }
    ctx->pc = 0x3BB8C4u;
label_3bb8c4:
    // 0x3bb8c4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x3bb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3bb8c8:
    // 0x3bb8c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3bb8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bb8cc:
    // 0x3bb8cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3bb8ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb8d0:
    // 0x3bb8d0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3bb8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bb8d4:
    // 0x3bb8d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bb8d8:
    // 0x3bb8d8: 0x1047ffe0  beq         $v0, $a3, . + 4 + (-0x20 << 2)
label_3bb8dc:
    if (ctx->pc == 0x3BB8DCu) {
        ctx->pc = 0x3BB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8D8u;
        // 0x3bb8dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB8E0u;
        goto label_3bb8e0;
    }
    ctx->pc = 0x3BB8D8u;
    {
        const bool branch_taken_0x3bb8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8D8u;
        // 0x3bb8dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8d8) {
            ctx->pc = 0x3BB85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb85c;
        }
    }
    ctx->pc = 0x3BB8E0u;
label_3bb8e0:
    // 0x3bb8e0: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x3bb8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_3bb8e4:
    // 0x3bb8e4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x3bb8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3bb8e8:
    // 0x3bb8e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3bb8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3bb8ec:
    // 0x3bb8ec: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bb8f0:
    // 0x3bb8f0: 0x1047ffda  beq         $v0, $a3, . + 4 + (-0x26 << 2)
label_3bb8f4:
    if (ctx->pc == 0x3BB8F4u) {
        ctx->pc = 0x3BB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8F0u;
        // 0x3bb8f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB8F8u;
        goto label_3bb8f8;
    }
    ctx->pc = 0x3BB8F0u;
    {
        const bool branch_taken_0x3bb8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8F0u;
        // 0x3bb8f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8f0) {
            ctx->pc = 0x3BB85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb85c;
        }
    }
    ctx->pc = 0x3BB8F8u;
label_3bb8f8:
    // 0x3bb8f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3bb8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3bb8fc:
    // 0x3bb8fc: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x3bb8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_3bb900:
    // 0x3bb900: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x3bb900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bb904:
    // 0x3bb904: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3bb908:
    if (ctx->pc == 0x3BB908u) {
        ctx->pc = 0x3BB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB904u;
        // 0x3bb908: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB90Cu;
        goto label_3bb90c;
    }
    ctx->pc = 0x3BB904u;
    {
        const bool branch_taken_0x3bb904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB904u;
        // 0x3bb908: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb904) {
            ctx->pc = 0x3BB954u;
            goto label_3bb954;
        }
    }
    ctx->pc = 0x3BB90Cu;
label_3bb90c:
    // 0x3bb90c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3bb90cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bb910:
    // 0x3bb910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bb910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bb914:
    // 0x3bb914: 0x1047ffd1  beq         $v0, $a3, . + 4 + (-0x2F << 2)
label_3bb918:
    if (ctx->pc == 0x3BB918u) {
        ctx->pc = 0x3BB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB914u;
        // 0x3bb918: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB91Cu;
        goto label_3bb91c;
    }
    ctx->pc = 0x3BB914u;
    {
        const bool branch_taken_0x3bb914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB914u;
        // 0x3bb918: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb914) {
            ctx->pc = 0x3BB85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb85c;
        }
    }
    ctx->pc = 0x3BB91Cu;
label_3bb91c:
    // 0x3bb91c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3bb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3bb920:
    // 0x3bb920: 0x1047ffce  beq         $v0, $a3, . + 4 + (-0x32 << 2)
label_3bb924:
    if (ctx->pc == 0x3BB924u) {
        ctx->pc = 0x3BB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB920u;
        // 0x3bb924: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB928u;
        goto label_3bb928;
    }
    ctx->pc = 0x3BB920u;
    {
        const bool branch_taken_0x3bb920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB920u;
        // 0x3bb924: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb920) {
            ctx->pc = 0x3BB85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb85c;
        }
    }
    ctx->pc = 0x3BB928u;
label_3bb928:
    // 0x3bb928: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x3bb928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3bb92c:
    // 0x3bb92c: 0x1047ffcb  beq         $v0, $a3, . + 4 + (-0x35 << 2)
label_3bb930:
    if (ctx->pc == 0x3BB930u) {
        ctx->pc = 0x3BB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB92Cu;
        // 0x3bb930: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB934u;
        goto label_3bb934;
    }
    ctx->pc = 0x3BB92Cu;
    {
        const bool branch_taken_0x3bb92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB92Cu;
        // 0x3bb930: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb92c) {
            ctx->pc = 0x3BB85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb85c;
        }
    }
    ctx->pc = 0x3BB934u;
label_3bb934:
    // 0x3bb934: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3bb934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_3bb938:
    // 0x3bb938: 0x1047ffc8  beq         $v0, $a3, . + 4 + (-0x38 << 2)
label_3bb93c:
    if (ctx->pc == 0x3BB93Cu) {
        ctx->pc = 0x3BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB938u;
        // 0x3bb93c: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB940u;
        goto label_3bb940;
    }
    ctx->pc = 0x3BB938u;
    {
        const bool branch_taken_0x3bb938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB938u;
        // 0x3bb93c: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb938) {
            ctx->pc = 0x3BB85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb85c;
        }
    }
    ctx->pc = 0x3BB940u;
label_3bb940:
    // 0x3bb940: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3bb940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3bb944:
    // 0x3bb944: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x3bb944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3bb948:
    // 0x3bb948: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x3bb948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bb94c:
    // 0x3bb94c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3bb950:
    if (ctx->pc == 0x3BB950u) {
        ctx->pc = 0x3BB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB94Cu;
        // 0x3bb950: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB954u;
        goto label_3bb954;
    }
    ctx->pc = 0x3BB94Cu;
    {
        const bool branch_taken_0x3bb94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB94Cu;
        // 0x3bb950: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb94c) {
            ctx->pc = 0x3BB910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb910;
        }
    }
    ctx->pc = 0x3BB954u;
label_3bb954:
    // 0x3bb954: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x3bb954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_3bb958:
    // 0x3bb958: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3bb958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bb95c:
    // 0x3bb95c: 0xc1035f6  jal         func_40D7D8
label_3bb960:
    if (ctx->pc == 0x3BB960u) {
        ctx->pc = 0x3BB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB95Cu;
        // 0x3bb960: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB964u;
        goto label_3bb964;
    }
    ctx->pc = 0x3BB95Cu;
    SET_GPR_U32(ctx, 31, 0x3BB964u);
    ctx->pc = 0x3BB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB95Cu;
    // 0x3bb960: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BB95Cu, 0x3BB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB964u;
label_3bb964:
    // 0x3bb964: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3bb964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3bb968:
    // 0x3bb968: 0xc103628  jal         func_40D8A0
label_3bb96c:
    if (ctx->pc == 0x3BB96Cu) {
        ctx->pc = 0x3BB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB968u;
        // 0x3bb96c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB970u;
        goto label_3bb970;
    }
    ctx->pc = 0x3BB968u;
    SET_GPR_U32(ctx, 31, 0x3BB970u);
    ctx->pc = 0x3BB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB968u;
    // 0x3bb96c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BB968u, 0x3BB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB970u;
label_3bb970:
    // 0x3bb970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bb970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb974:
    // 0x3bb974: 0x0  nop
    ctx->pc = 0x3bb974u;
    // NOP
label_3bb978:
    // 0x3bb978: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_3bb97c:
    if (ctx->pc == 0x3BB97Cu) {
        ctx->pc = 0x3BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB978u;
        // 0x3bb97c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB980u;
        goto label_3bb980;
    }
    ctx->pc = 0x3BB978u;
    {
        const bool branch_taken_0x3bb978 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb978) {
            ctx->pc = 0x3BB97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB978u;
            // 0x3bb97c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB988u;
            goto label_3bb988;
        }
    }
    ctx->pc = 0x3BB980u;
label_3bb980:
    // 0x3bb980: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3bb984:
    if (ctx->pc == 0x3BB984u) {
        ctx->pc = 0x3BB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB980u;
        // 0x3bb984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB988u;
        goto label_3bb988;
    }
    ctx->pc = 0x3BB980u;
    {
        const bool branch_taken_0x3bb980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB980u;
        // 0x3bb984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb980) {
            ctx->pc = 0x3BB9ECu;
            goto label_3bb9ec;
        }
    }
    ctx->pc = 0x3BB988u;
label_3bb988:
    // 0x3bb988: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3bb988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3bb98c:
    // 0x3bb98c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3bb98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3bb990:
    // 0x3bb990: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bb990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bb994:
    // 0x3bb994: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x3bb994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bb998:
    // 0x3bb998: 0x8cc2e988  lw          $v0, -0x1678($a2)
    ctx->pc = 0x3bb998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294961544)));
label_3bb99c:
    // 0x3bb99c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3bb99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3bb9a0:
    // 0x3bb9a0: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x3bb9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_3bb9a4:
    // 0x3bb9a4: 0x40f809  jalr        $v0
label_3bb9a8:
    if (ctx->pc == 0x3BB9A8u) {
        ctx->pc = 0x3BB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9A4u;
        // 0x3bb9a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB9ACu;
        goto label_3bb9ac;
    }
    ctx->pc = 0x3BB9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB9ACu);
        ctx->pc = 0x3BB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9A4u;
        // 0x3bb9a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB9A4u, 0x3BB9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB9ACu;
label_3bb9ac:
    // 0x3bb9ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bb9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb9b0:
    // 0x3bb9b0: 0xacb40008  sw          $s4, 0x8($a1)
    ctx->pc = 0x3bb9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 20));
label_3bb9b4:
    // 0x3bb9b4: 0x24a30018  addiu       $v1, $a1, 0x18
    ctx->pc = 0x3bb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_3bb9b8:
    // 0x3bb9b8: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x3bb9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_3bb9bc:
    // 0x3bb9bc: 0xe4b4000c  swc1        $f20, 0xC($a1)
    ctx->pc = 0x3bb9bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_3bb9c0:
    // 0x3bb9c0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3bb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3bb9c4:
    // 0x3bb9c4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x3bb9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_3bb9c8:
    // 0x3bb9c8: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_3bb9cc:
    if (ctx->pc == 0x3BB9CCu) {
        ctx->pc = 0x3BB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9C8u;
        // 0x3bb9cc: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB9D0u;
        goto label_3bb9d0;
    }
    ctx->pc = 0x3BB9C8u;
    {
        const bool branch_taken_0x3bb9c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9C8u;
        // 0x3bb9cc: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9c8) {
            ctx->pc = 0x3BB9E4u;
            goto label_3bb9e4;
        }
    }
    ctx->pc = 0x3BB9D0u;
label_3bb9d0:
    // 0x3bb9d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3bb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3bb9d4:
    // 0x3bb9d4: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x3bb9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bb9d8:
    // 0x3bb9d8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x3bb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3bb9dc:
    // 0x3bb9dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bb9e0:
    if (ctx->pc == 0x3BB9E0u) {
        ctx->pc = 0x3BB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9DCu;
        // 0x3bb9e0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB9E4u;
        goto label_3bb9e4;
    }
    ctx->pc = 0x3BB9DCu;
    {
        const bool branch_taken_0x3bb9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9DCu;
        // 0x3bb9e0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9dc) {
            ctx->pc = 0x3BB9E8u;
            goto label_3bb9e8;
        }
    }
    ctx->pc = 0x3BB9E4u;
label_3bb9e4:
    // 0x3bb9e4: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x3bb9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_3bb9e8:
    // 0x3bb9e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bb9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bb9ec:
    // 0x3bb9ec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3bb9f0:
    if (ctx->pc == 0x3BB9F0u) {
        ctx->pc = 0x3BB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9ECu;
        // 0x3bb9f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB9F4u;
        goto label_3bb9f4;
    }
    ctx->pc = 0x3BB9ECu;
    {
        const bool branch_taken_0x3bb9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9ECu;
        // 0x3bb9f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9ec) {
            ctx->pc = 0x3BBA08u;
            goto label_3bba08;
        }
    }
    ctx->pc = 0x3BB9F4u;
label_3bb9f4:
    // 0x3bb9f4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3bb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3bb9f8:
    // 0x3bb9f8: 0x40f809  jalr        $v0
label_3bb9fc:
    if (ctx->pc == 0x3BB9FCu) {
        ctx->pc = 0x3BB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9F8u;
        // 0x3bb9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBA00u;
        goto label_3bba00;
    }
    ctx->pc = 0x3BB9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BBA00u);
        ctx->pc = 0x3BB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9F8u;
        // 0x3bb9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB9F8u, 0x3BBA00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BBA00u;
label_3bba00:
    // 0x3bba00: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bba04:
    if (ctx->pc == 0x3BBA04u) {
        ctx->pc = 0x3BBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA00u;
        // 0x3bba04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBA08u;
        goto label_3bba08;
    }
    ctx->pc = 0x3BBA00u;
    {
        const bool branch_taken_0x3bba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA00u;
        // 0x3bba04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba00) {
            ctx->pc = 0x3BBA0Cu;
            goto label_3bba0c;
        }
    }
    ctx->pc = 0x3BBA08u;
label_3bba08:
    // 0x3bba08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bba08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bba0c:
    // 0x3bba0c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3bba0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3bba10:
    // 0x3bba10: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3bba10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bba14:
    // 0x3bba14: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3bba14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bba18:
    // 0x3bba18: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3bba18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bba1c:
    // 0x3bba1c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3bba1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bba20:
    // 0x3bba20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bba24:
    // 0x3bba24: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3bba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bba28:
    // 0x3bba28: 0x3e00008  jr          $ra
label_3bba2c:
    if (ctx->pc == 0x3BBA2Cu) {
        ctx->pc = 0x3BBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA28u;
        // 0x3bba2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBA30u;
        goto label_fallthrough_0x3bba28;
    }
    ctx->pc = 0x3BBA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA28u;
        // 0x3bba2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bba28:
    ctx->pc = 0x3BBA30u;
}
