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

// Function: sub_003AB898
// Address: 0x3ab898 - 0x3ab9e0
void sub_003AB898_0x3ab898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB898_0x3ab898");
#endif

    switch (ctx->pc) {
        case 0x3ab8d0u: goto label_3ab8d0;
        case 0x3ab8e8u: goto label_3ab8e8;
        case 0x3ab8fcu: goto label_3ab8fc;
        case 0x3ab910u: goto label_3ab910;
        case 0x3ab924u: goto label_3ab924;
        case 0x3ab92cu: goto label_3ab92c;
        case 0x3ab94cu: goto label_3ab94c;
        case 0x3ab95cu: goto label_3ab95c;
        case 0x3ab970u: goto label_3ab970;
        case 0x3ab984u: goto label_3ab984;
        default: break;
    }

    ctx->pc = 0x3ab898u;

    // 0x3ab898: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ab898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3ab89c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ab89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3ab8a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ab8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3ab8a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ab8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab8a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ab8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ab8ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ab8acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab8b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ab8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3ab8b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ab8b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab8b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ab8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3ab8bc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3ab8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3ab8c0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3ab8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3ab8c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ab8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ab8c8: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AB8C8u;
    SET_GPR_U32(ctx, 31, 0x3AB8D0u);
    ctx->pc = 0x3AB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8C8u;
    // 0x3ab8cc: 0x8e840134  lw          $a0, 0x134($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AB8C8u, 0x3AB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8D0u;
label_3ab8d0:
    // 0x3ab8d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ab8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab8d4: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x3ab8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x3ab8d8: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3AB8D8u;
    {
        const bool branch_taken_0x3ab8d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB8D8u;
        // 0x3ab8dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab8d8) {
            ctx->pc = 0x3AB9A4u;
            goto label_3ab9a4;
        }
    }
    ctx->pc = 0x3AB8E0u;
    // 0x3ab8e0: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x3ab8e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ab8e4: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x3ab8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3ab8e8:
    // 0x3ab8e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3ab8e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab8f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab8f4: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3AB8F4u;
    SET_GPR_U32(ctx, 31, 0x3AB8FCu);
    ctx->pc = 0x3AB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8F4u;
    // 0x3ab8f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3AB8F4u, 0x3AB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8FCu;
label_3ab8fc:
    // 0x3ab8fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AB8FCu;
    {
        const bool branch_taken_0x3ab8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB8FCu;
        // 0x3ab900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab8fc) {
            ctx->pc = 0x3AB92Cu;
            goto label_3ab92c;
        }
    }
    ctx->pc = 0x3AB904u;
    // 0x3ab904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab908: 0xc103454  jal         func_40D150
    ctx->pc = 0x3AB908u;
    SET_GPR_U32(ctx, 31, 0x3AB910u);
    ctx->pc = 0x3AB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB908u;
    // 0x3ab90c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3AB908u, 0x3AB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB910u;
label_3ab910:
    // 0x3ab910: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB910u;
    {
        const bool branch_taken_0x3ab910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB910u;
        // 0x3ab914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab910) {
            ctx->pc = 0x3AB92Cu;
            goto label_3ab92c;
        }
    }
    ctx->pc = 0x3AB918u;
    // 0x3ab918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab91c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3AB91Cu;
    SET_GPR_U32(ctx, 31, 0x3AB924u);
    ctx->pc = 0x3AB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB91Cu;
    // 0x3ab920: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3AB91Cu, 0x3AB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB924u;
label_3ab924:
    // 0x3ab924: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB924u;
    {
        const bool branch_taken_0x3ab924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB924u;
        // 0x3ab928: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab924) {
            ctx->pc = 0x3AB934u;
            goto label_3ab934;
        }
    }
    ctx->pc = 0x3AB92Cu;
label_3ab92c:
    // 0x3ab92c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3AB92Cu;
    {
        const bool branch_taken_0x3ab92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB92Cu;
        // 0x3ab930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab92c) {
            ctx->pc = 0x3AB9B4u;
            goto label_3ab9b4;
        }
    }
    ctx->pc = 0x3AB934u;
label_3ab934:
    // 0x3ab934: 0x14560010  bne         $v0, $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AB934u;
    {
        const bool branch_taken_0x3ab934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x3AB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB934u;
        // 0x3ab938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab934) {
            ctx->pc = 0x3AB978u;
            goto label_3ab978;
        }
    }
    ctx->pc = 0x3AB93Cu;
    // 0x3ab93c: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x3ab93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    // 0x3ab940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab944: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3AB944u;
    SET_GPR_U32(ctx, 31, 0x3AB94Cu);
    ctx->pc = 0x3AB948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB944u;
    // 0x3ab948: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3AB944u, 0x3AB94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB94Cu;
label_3ab94c:
    // 0x3ab94c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AB94Cu;
    {
        const bool branch_taken_0x3ab94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB94Cu;
        // 0x3ab950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab94c) {
            ctx->pc = 0x3AB9B4u;
            goto label_3ab9b4;
        }
    }
    ctx->pc = 0x3AB954u;
    // 0x3ab954: 0xc0ec458  jal         func_3B1160
    ctx->pc = 0x3AB954u;
    SET_GPR_U32(ctx, 31, 0x3AB95Cu);
    ctx->pc = 0x3AB958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB954u;
    // 0x3ab958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1160u, 0x3AB954u, 0x3AB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB95Cu;
label_3ab95c:
    // 0x3ab95c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ab95cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab964: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab968: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3AB968u;
    SET_GPR_U32(ctx, 31, 0x3AB970u);
    ctx->pc = 0x3AB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB968u;
    // 0x3ab96c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3AB968u, 0x3AB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB970u;
label_3ab970:
    // 0x3ab970: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AB970u;
    {
        const bool branch_taken_0x3ab970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB970u;
        // 0x3ab974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab970) {
            ctx->pc = 0x3AB92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab92c;
        }
    }
    ctx->pc = 0x3AB978u;
label_3ab978:
    // 0x3ab978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab97c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3AB97Cu;
    SET_GPR_U32(ctx, 31, 0x3AB984u);
    ctx->pc = 0x3AB980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB97Cu;
    // 0x3ab980: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3AB97Cu, 0x3AB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB984u;
label_3ab984:
    // 0x3ab984: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3AB984u;
    {
        const bool branch_taken_0x3ab984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB984u;
        // 0x3ab988: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab984) {
            ctx->pc = 0x3AB92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab92c;
        }
    }
    ctx->pc = 0x3AB98Cu;
    // 0x3ab98c: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x3ab98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x3ab990: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x3ab990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x3ab994: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x3ab994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3ab998: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3ab998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ab99c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3AB99Cu;
    {
        const bool branch_taken_0x3ab99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB99Cu;
        // 0x3ab9a0: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab99c) {
            ctx->pc = 0x3AB8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab8e8;
        }
    }
    ctx->pc = 0x3AB9A4u;
label_3ab9a4:
    // 0x3ab9a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3ab9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3ab9a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3ab9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab9ac: 0x2463d508  addiu       $v1, $v1, -0x2AF8
    ctx->pc = 0x3ab9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956296));
    // 0x3ab9b0: 0xae830138  sw          $v1, 0x138($s4)
    ctx->pc = 0x3ab9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 3));
label_3ab9b4:
    // 0x3ab9b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ab9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ab9b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ab9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ab9bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ab9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ab9c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ab9c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab9c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ab9c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab9c8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3ab9c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ab9cc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3ab9ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab9d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9D4u;
        // 0x3ab9d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB9DCu;
    // 0x3ab9dc: 0x0  nop
    ctx->pc = 0x3ab9dcu;
    // NOP
    ctx->pc = 0x3ab9e0u;
}
