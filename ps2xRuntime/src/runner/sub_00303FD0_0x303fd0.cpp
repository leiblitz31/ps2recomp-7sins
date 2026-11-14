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

// Function: sub_00303FD0
// Address: 0x303fd0 - 0x304810
void sub_00303FD0_0x303fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303FD0_0x303fd0");
#endif

    switch (ctx->pc) {
        case 0x304010u: goto label_304010;
        case 0x304028u: goto label_304028;
        case 0x304050u: goto label_304050;
        case 0x3040bcu: goto label_3040bc;
        case 0x3040fcu: goto label_3040fc;
        case 0x30410cu: goto label_30410c;
        case 0x304114u: goto label_304114;
        case 0x304128u: goto label_304128;
        case 0x304138u: goto label_304138;
        case 0x304148u: goto label_304148;
        case 0x304150u: goto label_304150;
        case 0x304190u: goto label_304190;
        case 0x3041a0u: goto label_3041a0;
        case 0x3041e0u: goto label_3041e0;
        case 0x3041f8u: goto label_3041f8;
        case 0x304220u: goto label_304220;
        case 0x304294u: goto label_304294;
        case 0x3042d4u: goto label_3042d4;
        case 0x3042e4u: goto label_3042e4;
        case 0x3042ecu: goto label_3042ec;
        case 0x304300u: goto label_304300;
        case 0x304310u: goto label_304310;
        case 0x304320u: goto label_304320;
        case 0x304328u: goto label_304328;
        case 0x304368u: goto label_304368;
        case 0x304378u: goto label_304378;
        case 0x3043c0u: goto label_3043c0;
        case 0x3043d8u: goto label_3043d8;
        case 0x3043f8u: goto label_3043f8;
        case 0x304460u: goto label_304460;
        case 0x3044a0u: goto label_3044a0;
        case 0x3044c8u: goto label_3044c8;
        case 0x304528u: goto label_304528;
        case 0x304548u: goto label_304548;
        case 0x304574u: goto label_304574;
        case 0x304584u: goto label_304584;
        case 0x30458cu: goto label_30458c;
        case 0x3045a0u: goto label_3045a0;
        case 0x3045b0u: goto label_3045b0;
        case 0x3045c0u: goto label_3045c0;
        case 0x3045c8u: goto label_3045c8;
        case 0x3045f8u: goto label_3045f8;
        case 0x304624u: goto label_304624;
        case 0x30463cu: goto label_30463c;
        case 0x304660u: goto label_304660;
        case 0x3046b0u: goto label_3046b0;
        case 0x3046c0u: goto label_3046c0;
        case 0x3046c8u: goto label_3046c8;
        case 0x3046dcu: goto label_3046dc;
        case 0x3046ecu: goto label_3046ec;
        case 0x3046fcu: goto label_3046fc;
        case 0x304704u: goto label_304704;
        case 0x304738u: goto label_304738;
        case 0x304748u: goto label_304748;
        case 0x304768u: goto label_304768;
        case 0x304780u: goto label_304780;
        case 0x304788u: goto label_304788;
        case 0x304790u: goto label_304790;
        case 0x3047acu: goto label_3047ac;
        case 0x3047c0u: goto label_3047c0;
        case 0x3047d4u: goto label_3047d4;
        case 0x3047f4u: goto label_3047f4;
        default: break;
    }

    ctx->pc = 0x303fd0u;

label_303fd0:
    // 0x303fd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x303fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x303fd4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x303fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x303fd8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x303fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x303fdc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x303fdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fe4: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x303fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x303fe8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x303fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x303fec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x303fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ff0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x303ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x303ff4: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x303ff4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x303ff8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x303ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x303ffc: 0x26f31340  addiu       $s3, $s7, 0x1340
    ctx->pc = 0x303ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x304000: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x304000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x304004: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x304008: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x304008u;
    SET_GPR_U32(ctx, 31, 0x304010u);
    ctx->pc = 0x30400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304008u;
    // 0x30400c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x304008u, 0x304010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304010u;
label_304010:
    // 0x304010: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x304014: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x304014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x304018: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x304018u;
    {
        const bool branch_taken_0x304018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x304018) {
            ctx->pc = 0x30401Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304018u;
            // 0x30401c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30402Cu;
            goto label_30402c;
        }
    }
    ctx->pc = 0x304020u;
    // 0x304020: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x304020u;
    SET_GPR_U32(ctx, 31, 0x304028u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x304020u, 0x304028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304028u;
label_304028:
    // 0x304028: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x304028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_30402c:
    // 0x30402c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30402cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304030: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x304030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x304034: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x304034u;
    {
        const bool branch_taken_0x304034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304034u;
        // 0x304038: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304034) {
            ctx->pc = 0x30407Cu;
            goto label_30407c;
        }
    }
    ctx->pc = 0x30403Cu;
    // 0x30403c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30403cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304040: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x304040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304044: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304044u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304048: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x30404c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30404cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_304050:
    // 0x304050: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x304050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x304054: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x304054u;
    {
        const bool branch_taken_0x304054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304054u;
        // 0x304058: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304054) {
            ctx->pc = 0x30408Cu;
            goto label_30408c;
        }
    }
    ctx->pc = 0x30405Cu;
    // 0x30405c: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x30405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x304060: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304064: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x304064u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x304068: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x304068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x30406c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30406Cu;
    {
        const bool branch_taken_0x30406c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30406c) {
            ctx->pc = 0x304070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30406Cu;
            // 0x304070: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304050;
        }
    }
    ctx->pc = 0x304074u;
    // 0x304074: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304074u;
    {
        const bool branch_taken_0x304074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304074u;
        // 0x304078: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304074) {
            ctx->pc = 0x304090u;
            goto label_304090;
        }
    }
    ctx->pc = 0x30407Cu;
label_30407c:
    // 0x30407c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30407cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304080: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x304080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304084: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304084u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304088: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304088u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_30408c:
    // 0x30408c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x30408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_304090:
    // 0x304090: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304090u;
    {
        const bool branch_taken_0x304090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x304094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304090u;
        // 0x304094: 0x24a2ab68  addiu       $v0, $a1, -0x5498 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304090) {
            ctx->pc = 0x3040A0u;
            goto label_3040a0;
        }
    }
    ctx->pc = 0x304098u;
    // 0x304098: 0xa260040b  sb          $zero, 0x40B($s3)
    ctx->pc = 0x304098u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x30409c: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x30409cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_3040a0:
    // 0x3040a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3040a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3040a4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3040a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3040a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3040a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3040ac: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3040acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3040b0: 0x26941f80  addiu       $s4, $s4, 0x1F80
    ctx->pc = 0x3040b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x3040b4: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x3040B4u;
    SET_GPR_U32(ctx, 31, 0x3040BCu);
    ctx->pc = 0x3040B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040B4u;
    // 0x3040b8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3040B4u, 0x3040BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040BCu;
label_3040bc:
    // 0x3040bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3040bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040c0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3040c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3040c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3040c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3040c8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x3040c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3040cc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3040ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3040d0: 0x26a42a40  addiu       $a0, $s5, 0x2A40
    ctx->pc = 0x3040d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10816));
    // 0x3040d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3040d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040d8: 0x26e71340  addiu       $a3, $s7, 0x1340
    ctx->pc = 0x3040d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x3040dc: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x3040dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x3040e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3040e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3040e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3040e8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3040e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040ec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3040ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3040f0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3040f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3040f4: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x3040F4u;
    SET_GPR_U32(ctx, 31, 0x3040FCu);
    ctx->pc = 0x3040F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040F4u;
    // 0x3040f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x3040F4u, 0x3040FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040FCu;
label_3040fc:
    // 0x3040fc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3040FCu;
    {
        const bool branch_taken_0x3040fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x304100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040FCu;
        // 0x304100: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040fc) {
            ctx->pc = 0x30411Cu;
            goto label_30411c;
        }
    }
    ctx->pc = 0x304104u;
    // 0x304104: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304104u;
    SET_GPR_U32(ctx, 31, 0x30410Cu);
    ctx->pc = 0x304108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304104u;
    // 0x304108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304104u, 0x30410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30410Cu;
label_30410c:
    // 0x30410c: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x30410Cu;
    SET_GPR_U32(ctx, 31, 0x304114u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x30410Cu, 0x304114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304114u;
label_304114:
    // 0x304114: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x304114u;
    {
        const bool branch_taken_0x304114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304114u;
        // 0x304118: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304114) {
            ctx->pc = 0x304154u;
            goto label_304154;
        }
    }
    ctx->pc = 0x30411Cu;
label_30411c:
    // 0x30411c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x30411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x304120: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304120u;
    SET_GPR_U32(ctx, 31, 0x304128u);
    ctx->pc = 0x304124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304120u;
    // 0x304124: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304120u, 0x304128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304128u;
label_304128:
    // 0x304128: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304128u;
    {
        const bool branch_taken_0x304128 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x304128) {
            ctx->pc = 0x304140u;
            goto label_304140;
        }
    }
    ctx->pc = 0x304130u;
    // 0x304130: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304130u;
    SET_GPR_U32(ctx, 31, 0x304138u);
    ctx->pc = 0x304134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304130u;
    // 0x304134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304130u, 0x304138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304138u;
label_304138:
    // 0x304138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304138u;
    {
        const bool branch_taken_0x304138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304138u;
        // 0x30413c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304138) {
            ctx->pc = 0x304154u;
            goto label_304154;
        }
    }
    ctx->pc = 0x304140u;
label_304140:
    // 0x304140: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x304140u;
    SET_GPR_U32(ctx, 31, 0x304148u);
    ctx->pc = 0x304144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304140u;
    // 0x304144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x304140u, 0x304148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304148u;
label_304148:
    // 0x304148: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304148u;
    SET_GPR_U32(ctx, 31, 0x304150u);
    ctx->pc = 0x30414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304148u;
    // 0x30414c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304148u, 0x304150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304150u;
label_304150:
    // 0x304150: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x304150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_304154:
    // 0x304154: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x304154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x304158: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x304158u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30415c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x30415cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x304160: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x304160u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x304164: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x304164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x304168: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x304168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30416c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x30416cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304170: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x304170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304174: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x304174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304178: 0x3e00008  jr          $ra
    ctx->pc = 0x304178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304178u;
        // 0x30417c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304180u;
    // 0x304180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304188: 0xc0c0ff4  jal         func_303FD0
    ctx->pc = 0x304188u;
    SET_GPR_U32(ctx, 31, 0x304190u);
    ctx->pc = 0x30418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304188u;
    // 0x30418c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD0u;
    goto label_303fd0;
    ctx->pc = 0x304190u;
label_304190:
    // 0x304190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304194: 0x3e00008  jr          $ra
    ctx->pc = 0x304194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304194u;
        // 0x304198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30419Cu;
    // 0x30419c: 0x0  nop
    ctx->pc = 0x30419cu;
    // NOP
label_3041a0:
    // 0x3041a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3041a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3041a4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3041a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3041a8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3041a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3041ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3041acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3041b0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3041b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3041b4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3041b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3041b8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3041b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3041bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3041bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3041c0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3041c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3041c4: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x3041c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x3041c8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3041c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3041cc: 0x26f21340  addiu       $s2, $s7, 0x1340
    ctx->pc = 0x3041ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x3041d0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3041d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3041d4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3041d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3041d8: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x3041D8u;
    SET_GPR_U32(ctx, 31, 0x3041E0u);
    ctx->pc = 0x3041DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041D8u;
    // 0x3041dc: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x3041D8u, 0x3041E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041E0u;
label_3041e0:
    // 0x3041e0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3041e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3041e4: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x3041e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x3041e8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3041E8u;
    {
        const bool branch_taken_0x3041e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3041e8) {
            ctx->pc = 0x3041ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3041E8u;
            // 0x3041ec: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3041FCu;
            goto label_3041fc;
        }
    }
    ctx->pc = 0x3041F0u;
    // 0x3041f0: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x3041F0u;
    SET_GPR_U32(ctx, 31, 0x3041F8u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x3041F0u, 0x3041F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041F8u;
label_3041f8:
    // 0x3041f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3041f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3041fc:
    // 0x3041fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3041fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304200: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x304200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x304204: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x304204u;
    {
        const bool branch_taken_0x304204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304204u;
        // 0x304208: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304204) {
            ctx->pc = 0x30424Cu;
            goto label_30424c;
        }
    }
    ctx->pc = 0x30420Cu;
    // 0x30420c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304210: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x304210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304214: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304214u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304218: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304218u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x30421c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30421cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_304220:
    // 0x304220: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x304220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x304224: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x304224u;
    {
        const bool branch_taken_0x304224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304224u;
        // 0x304228: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304224) {
            ctx->pc = 0x30425Cu;
            goto label_30425c;
        }
    }
    ctx->pc = 0x30422Cu;
    // 0x30422c: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x30422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x304230: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304234: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x304234u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x304238: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x304238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x30423c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30423Cu;
    {
        const bool branch_taken_0x30423c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30423c) {
            ctx->pc = 0x304240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30423Cu;
            // 0x304240: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304220;
        }
    }
    ctx->pc = 0x304244u;
    // 0x304244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304244u;
    {
        const bool branch_taken_0x304244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304244u;
        // 0x304248: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304244) {
            ctx->pc = 0x304260u;
            goto label_304260;
        }
    }
    ctx->pc = 0x30424Cu;
label_30424c:
    // 0x30424c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30424cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304250: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x304250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304254: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304254u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304258: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304258u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_30425c:
    // 0x30425c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x30425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_304260:
    // 0x304260: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304260u;
    {
        const bool branch_taken_0x304260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x304260) {
            ctx->pc = 0x304264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304260u;
            // 0x304264: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304274u;
            goto label_304274;
        }
    }
    ctx->pc = 0x304268u;
    // 0x304268: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x304268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x30426c: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x30426cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x304270: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x304270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_304274:
    // 0x304274: 0x24a3ab80  addiu       $v1, $a1, -0x5480
    ctx->pc = 0x304274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945664));
    // 0x304278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30427c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304280: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x304280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x304284: 0x26941f80  addiu       $s4, $s4, 0x1F80
    ctx->pc = 0x304284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x304288: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x304288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x30428c: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x30428Cu;
    SET_GPR_U32(ctx, 31, 0x304294u);
    ctx->pc = 0x304290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30428Cu;
    // 0x304290: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x30428Cu, 0x304294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304294u;
label_304294:
    // 0x304294: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304298: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x304298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x30429c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3042a0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3042a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3042a4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3042a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3042a8: 0x26a42a40  addiu       $a0, $s5, 0x2A40
    ctx->pc = 0x3042a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10816));
    // 0x3042ac: 0x26e71340  addiu       $a3, $s7, 0x1340
    ctx->pc = 0x3042acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x3042b0: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x3042b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x3042b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3042b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3042b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3042b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3042bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3042bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3042c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3042c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042c4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3042c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3042c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3042cc: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x3042CCu;
    SET_GPR_U32(ctx, 31, 0x3042D4u);
    ctx->pc = 0x3042D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042CCu;
    // 0x3042d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x3042CCu, 0x3042D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042D4u;
label_3042d4:
    // 0x3042d4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3042D4u;
    {
        const bool branch_taken_0x3042d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3042D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042D4u;
        // 0x3042d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042d4) {
            ctx->pc = 0x3042F4u;
            goto label_3042f4;
        }
    }
    ctx->pc = 0x3042DCu;
    // 0x3042dc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3042DCu;
    SET_GPR_U32(ctx, 31, 0x3042E4u);
    ctx->pc = 0x3042E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042DCu;
    // 0x3042e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3042DCu, 0x3042E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042E4u;
label_3042e4:
    // 0x3042e4: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3042E4u;
    SET_GPR_U32(ctx, 31, 0x3042ECu);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3042E4u, 0x3042ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042ECu;
label_3042ec:
    // 0x3042ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3042ECu;
    {
        const bool branch_taken_0x3042ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042ECu;
        // 0x3042f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042ec) {
            ctx->pc = 0x30432Cu;
            goto label_30432c;
        }
    }
    ctx->pc = 0x3042F4u;
label_3042f4:
    // 0x3042f4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3042f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3042f8: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3042F8u;
    SET_GPR_U32(ctx, 31, 0x304300u);
    ctx->pc = 0x3042FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042F8u;
    // 0x3042fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3042F8u, 0x304300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304300u;
label_304300:
    // 0x304300: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304300u;
    {
        const bool branch_taken_0x304300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x304300) {
            ctx->pc = 0x304318u;
            goto label_304318;
        }
    }
    ctx->pc = 0x304308u;
    // 0x304308: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304308u;
    SET_GPR_U32(ctx, 31, 0x304310u);
    ctx->pc = 0x30430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304308u;
    // 0x30430c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304308u, 0x304310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304310u;
label_304310:
    // 0x304310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304310u;
    {
        const bool branch_taken_0x304310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304310u;
        // 0x304314: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304310) {
            ctx->pc = 0x30432Cu;
            goto label_30432c;
        }
    }
    ctx->pc = 0x304318u;
label_304318:
    // 0x304318: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x304318u;
    SET_GPR_U32(ctx, 31, 0x304320u);
    ctx->pc = 0x30431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304318u;
    // 0x30431c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x304318u, 0x304320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304320u;
label_304320:
    // 0x304320: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304320u;
    SET_GPR_U32(ctx, 31, 0x304328u);
    ctx->pc = 0x304324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304320u;
    // 0x304324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304320u, 0x304328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304328u;
label_304328:
    // 0x304328: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x304328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_30432c:
    // 0x30432c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x30432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x304330: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x304330u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x304334: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x304334u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x304338: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x304338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30433c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x30433cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x304340: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x304340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304344: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x304344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304348: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x304348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30434c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x30434cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304350: 0x3e00008  jr          $ra
    ctx->pc = 0x304350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304350u;
        // 0x304354: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304358u;
    // 0x304358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30435c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304360: 0xc0c0ff4  jal         func_303FD0
    ctx->pc = 0x304360u;
    SET_GPR_U32(ctx, 31, 0x304368u);
    ctx->pc = 0x304364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304360u;
    // 0x304364: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD0u;
    goto label_303fd0;
    ctx->pc = 0x304368u;
label_304368:
    // 0x304368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30436c: 0x3e00008  jr          $ra
    ctx->pc = 0x30436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30436Cu;
        // 0x304370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30436Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304374u;
    // 0x304374: 0x0  nop
    ctx->pc = 0x304374u;
    // NOP
label_304378:
    // 0x304378: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x304378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x30437c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x30437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x304380: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x304380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x304384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304388: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x30438c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x30438cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304390: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x304390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x304394: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x304394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304398: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x304398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x30439c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30439cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043a0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3043a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3043a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3043a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3043a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3043a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3043ac: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x3043acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x3043b0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3043b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3043b4: 0x26f31340  addiu       $s3, $s7, 0x1340
    ctx->pc = 0x3043b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x3043b8: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x3043B8u;
    SET_GPR_U32(ctx, 31, 0x3043C0u);
    ctx->pc = 0x3043BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043B8u;
    // 0x3043bc: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x3043B8u, 0x3043C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043C0u;
label_3043c0:
    // 0x3043c0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3043c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3043c4: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x3043c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x3043c8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3043C8u;
    {
        const bool branch_taken_0x3043c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3043c8) {
            ctx->pc = 0x3043CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3043C8u;
            // 0x3043cc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3043DCu;
            goto label_3043dc;
        }
    }
    ctx->pc = 0x3043D0u;
    // 0x3043d0: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x3043D0u;
    SET_GPR_U32(ctx, 31, 0x3043D8u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x3043D0u, 0x3043D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043D8u;
label_3043d8:
    // 0x3043d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3043d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3043dc:
    // 0x3043dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3043dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043e0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x3043e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3043e4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3043E4u;
    {
        const bool branch_taken_0x3043e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043E4u;
        // 0x3043e8: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043e4) {
            ctx->pc = 0x304424u;
            goto label_304424;
        }
    }
    ctx->pc = 0x3043ECu;
    // 0x3043ec: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x3043ecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3043f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3043f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3043f4: 0x0  nop
    ctx->pc = 0x3043f4u;
    // NOP
label_3043f8:
    // 0x3043f8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x3043f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3043fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3043FCu;
    {
        const bool branch_taken_0x3043fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043FCu;
        // 0x304400: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043fc) {
            ctx->pc = 0x304428u;
            goto label_304428;
        }
    }
    ctx->pc = 0x304404u;
    // 0x304404: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x304404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x304408: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30440c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x30440cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x304410: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x304410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x304414: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x304414u;
    {
        const bool branch_taken_0x304414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x304414) {
            ctx->pc = 0x304418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304414u;
            // 0x304418: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3043F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3043f8;
        }
    }
    ctx->pc = 0x30441Cu;
    // 0x30441c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30441Cu;
    {
        const bool branch_taken_0x30441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30441Cu;
        // 0x304420: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30441c) {
            ctx->pc = 0x30442Cu;
            goto label_30442c;
        }
    }
    ctx->pc = 0x304424u;
label_304424:
    // 0x304424: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x304424u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_304428:
    // 0x304428: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x304428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_30442c:
    // 0x30442c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x30442Cu;
    {
        const bool branch_taken_0x30442c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x30442c) {
            ctx->pc = 0x304430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30442Cu;
            // 0x304430: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304434u;
            goto label_304434;
        }
    }
    ctx->pc = 0x304434u;
label_304434:
    // 0x304434: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x304434u;
    {
        const bool branch_taken_0x304434 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x304434) {
            ctx->pc = 0x304438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304434u;
            // 0x304438: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304444u;
            goto label_304444;
        }
    }
    ctx->pc = 0x30443Cu;
    // 0x30443c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30443Cu;
    {
        const bool branch_taken_0x30443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30443Cu;
        // 0x304440: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30443c) {
            ctx->pc = 0x304490u;
            goto label_304490;
        }
    }
    ctx->pc = 0x304444u;
label_304444:
    // 0x304444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304448: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x304448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x30444c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30444Cu;
    {
        const bool branch_taken_0x30444c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30444Cu;
        // 0x304450: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30444c) {
            ctx->pc = 0x304484u;
            goto label_304484;
        }
    }
    ctx->pc = 0x304454u;
    // 0x304454: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x304454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x304458: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x304458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30445c: 0x0  nop
    ctx->pc = 0x30445cu;
    // NOP
label_304460:
    // 0x304460: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x304460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x304464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304464u;
    {
        const bool branch_taken_0x304464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304464u;
        // 0x304468: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304464) {
            ctx->pc = 0x304484u;
            goto label_304484;
        }
    }
    ctx->pc = 0x30446Cu;
    // 0x30446c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x30446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x304470: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304474: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x304474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x304478: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x304478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x30447c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30447Cu;
    {
        const bool branch_taken_0x30447c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30447c) {
            ctx->pc = 0x304480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30447Cu;
            // 0x304480: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304460;
        }
    }
    ctx->pc = 0x304484u;
label_304484:
    // 0x304484: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x304484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x304488: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x304488u;
    {
        const bool branch_taken_0x304488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x304488) {
            ctx->pc = 0x30448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304488u;
            // 0x30448c: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304490u;
            goto label_304490;
        }
    }
    ctx->pc = 0x304490u;
label_304490:
    // 0x304490: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x304490u;
    {
        const bool branch_taken_0x304490 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x304490) {
            ctx->pc = 0x3044A8u;
            goto label_3044a8;
        }
    }
    ctx->pc = 0x304498u;
    // 0x304498: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304498u;
    SET_GPR_U32(ctx, 31, 0x3044A0u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304498u, 0x3044A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044A0u;
label_3044a0:
    // 0x3044a0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3044A0u;
    {
        const bool branch_taken_0x3044a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044A0u;
        // 0x3044a4: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044a0) {
            ctx->pc = 0x3045CCu;
            goto label_3045cc;
        }
    }
    ctx->pc = 0x3044A8u;
label_3044a8:
    // 0x3044a8: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3044A8u;
    {
        const bool branch_taken_0x3044a8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3044ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044A8u;
        // 0x3044ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044a8) {
            ctx->pc = 0x3044F0u;
            goto label_3044f0;
        }
    }
    ctx->pc = 0x3044B0u;
    // 0x3044b0: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x3044b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x3044b4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3044b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x3044b8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3044b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3044bc: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x3044bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x3044c0: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x3044c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x3044c4: 0x0  nop
    ctx->pc = 0x3044c4u;
    // NOP
label_3044c8:
    // 0x3044c8: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x3044c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x3044cc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x3044ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3044d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3044d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3044d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3044d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3044d8: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x3044d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3044dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3044dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3044e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3044E0u;
    {
        const bool branch_taken_0x3044e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3044e0) {
            ctx->pc = 0x3044C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3044c8;
        }
    }
    ctx->pc = 0x3044E8u;
    // 0x3044e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3044E8u;
    {
        const bool branch_taken_0x3044e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044E8u;
        // 0x3044ec: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044e8) {
            ctx->pc = 0x304504u;
            goto label_304504;
        }
    }
    ctx->pc = 0x3044F0u;
label_3044f0:
    // 0x3044f0: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3044f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x3044f4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3044f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3044f8: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x3044f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x3044fc: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x3044fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x304500: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x304500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_304504:
    // 0x304504: 0x24e3ab98  addiu       $v1, $a3, -0x5468
    ctx->pc = 0x304504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945688));
    // 0x304508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30450c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304510: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x304510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x304514: 0x26f01340  addiu       $s0, $s7, 0x1340
    ctx->pc = 0x304514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x304518: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x304518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x30451c: 0x26941f80  addiu       $s4, $s4, 0x1F80
    ctx->pc = 0x30451cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x304520: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x304520u;
    SET_GPR_U32(ctx, 31, 0x304528u);
    ctx->pc = 0x304524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304520u;
    // 0x304524: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x304520u, 0x304528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304528u;
label_304528:
    // 0x304528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30452c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30452cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304534: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x304534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x304538: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x304538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x30453c: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x30453cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x304540: 0xc0c041c  jal         func_301070
    ctx->pc = 0x304540u;
    SET_GPR_U32(ctx, 31, 0x304548u);
    ctx->pc = 0x304544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304540u;
    // 0x304544: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x304540u, 0x304548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304548u;
label_304548:
    // 0x304548: 0x26a42a40  addiu       $a0, $s5, 0x2A40
    ctx->pc = 0x304548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10816));
    // 0x30454c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x30454cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304550: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x304550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x304554: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x304554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x304558: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x304558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x30455c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30455cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304560: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x304560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x304564: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x304564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304568: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x304568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30456c: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x30456Cu;
    SET_GPR_U32(ctx, 31, 0x304574u);
    ctx->pc = 0x304570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30456Cu;
    // 0x304570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x30456Cu, 0x304574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304574u;
label_304574:
    // 0x304574: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304574u;
    {
        const bool branch_taken_0x304574 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x304578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304574u;
        // 0x304578: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304574) {
            ctx->pc = 0x304594u;
            goto label_304594;
        }
    }
    ctx->pc = 0x30457Cu;
    // 0x30457c: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x30457Cu;
    SET_GPR_U32(ctx, 31, 0x304584u);
    ctx->pc = 0x304580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30457Cu;
    // 0x304580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x30457Cu, 0x304584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304584u;
label_304584:
    // 0x304584: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304584u;
    SET_GPR_U32(ctx, 31, 0x30458Cu);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304584u, 0x30458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30458Cu;
label_30458c:
    // 0x30458c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30458Cu;
    {
        const bool branch_taken_0x30458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30458Cu;
        // 0x304590: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30458c) {
            ctx->pc = 0x3045CCu;
            goto label_3045cc;
        }
    }
    ctx->pc = 0x304594u;
label_304594:
    // 0x304594: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x304594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x304598: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304598u;
    SET_GPR_U32(ctx, 31, 0x3045A0u);
    ctx->pc = 0x30459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304598u;
    // 0x30459c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304598u, 0x3045A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045A0u;
label_3045a0:
    // 0x3045a0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3045A0u;
    {
        const bool branch_taken_0x3045a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3045a0) {
            ctx->pc = 0x3045B8u;
            goto label_3045b8;
        }
    }
    ctx->pc = 0x3045A8u;
    // 0x3045a8: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3045A8u;
    SET_GPR_U32(ctx, 31, 0x3045B0u);
    ctx->pc = 0x3045ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045A8u;
    // 0x3045ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3045A8u, 0x3045B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045B0u;
label_3045b0:
    // 0x3045b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3045B0u;
    {
        const bool branch_taken_0x3045b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045B0u;
        // 0x3045b4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045b0) {
            ctx->pc = 0x3045CCu;
            goto label_3045cc;
        }
    }
    ctx->pc = 0x3045B8u;
label_3045b8:
    // 0x3045b8: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3045B8u;
    SET_GPR_U32(ctx, 31, 0x3045C0u);
    ctx->pc = 0x3045BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045B8u;
    // 0x3045bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3045B8u, 0x3045C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045C0u;
label_3045c0:
    // 0x3045c0: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3045C0u;
    SET_GPR_U32(ctx, 31, 0x3045C8u);
    ctx->pc = 0x3045C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045C0u;
    // 0x3045c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3045C0u, 0x3045C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045C8u;
label_3045c8:
    // 0x3045c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3045c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3045cc:
    // 0x3045cc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3045ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3045d0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3045d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3045d4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3045d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3045d8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3045d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3045dc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3045dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3045e0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3045e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3045e4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3045e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3045e8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3045e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3045ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3045ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3045f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3045F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3045F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045F0u;
        // 0x3045f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3045F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3045F8u;
label_3045f8:
    // 0x3045f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3045f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3045fc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3045fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x304600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304604: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x304604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x304608: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x304608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x30460c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x30460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x304610: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x304610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x304614: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x304614u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
    // 0x304618: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x30461c: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x30461Cu;
    SET_GPR_U32(ctx, 31, 0x304624u);
    ctx->pc = 0x304620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30461Cu;
    // 0x304620: 0x26701340  addiu       $s0, $s3, 0x1340 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x30461Cu, 0x304624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304624u;
label_304624:
    // 0x304624: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x304624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x304628: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x304628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x30462c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30462Cu;
    {
        const bool branch_taken_0x30462c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30462Cu;
        // 0x304630: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30462c) {
            ctx->pc = 0x304640u;
            goto label_304640;
        }
    }
    ctx->pc = 0x304634u;
    // 0x304634: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x304634u;
    SET_GPR_U32(ctx, 31, 0x30463Cu);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x304634u, 0x30463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30463Cu;
label_30463c:
    // 0x30463c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30463cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_304640:
    // 0x304640: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x304640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x304644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304648: 0x2442abb0  addiu       $v0, $v0, -0x5450
    ctx->pc = 0x304648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
    // 0x30464c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x30464cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x304650: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x304650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304654: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x304654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x304658: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x304658u;
    SET_GPR_U32(ctx, 31, 0x304660u);
    ctx->pc = 0x30465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304658u;
    // 0x30465c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x304658u, 0x304660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304660u;
label_304660:
    // 0x304660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304664: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x304664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304668: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x304668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x30466c: 0xae711340  sw          $s1, 0x1340($s3)
    ctx->pc = 0x30466cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4928), GPR_U32(ctx, 17));
    // 0x304670: 0x24521f80  addiu       $s2, $v0, 0x1F80
    ctx->pc = 0x304670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x304674: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x304674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x304678: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30467c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x30467cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x304680: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x304680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x304684: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x304684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x304688: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x304688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30468c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x304690: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x304690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x304694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304698: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x304698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x30469c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x30469cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3046a0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3046a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046a4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3046a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3046a8: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x3046A8u;
    SET_GPR_U32(ctx, 31, 0x3046B0u);
    ctx->pc = 0x3046ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046A8u;
    // 0x3046ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x3046A8u, 0x3046B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046B0u;
label_3046b0:
    // 0x3046b0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3046B0u;
    {
        const bool branch_taken_0x3046b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046B0u;
        // 0x3046b4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046b0) {
            ctx->pc = 0x3046D0u;
            goto label_3046d0;
        }
    }
    ctx->pc = 0x3046B8u;
    // 0x3046b8: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3046B8u;
    SET_GPR_U32(ctx, 31, 0x3046C0u);
    ctx->pc = 0x3046BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046B8u;
    // 0x3046bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3046B8u, 0x3046C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C0u;
label_3046c0:
    // 0x3046c0: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3046C0u;
    SET_GPR_U32(ctx, 31, 0x3046C8u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3046C0u, 0x3046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C8u;
label_3046c8:
    // 0x3046c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3046C8u;
    {
        const bool branch_taken_0x3046c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3046CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046C8u;
        // 0x3046cc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046c8) {
            ctx->pc = 0x304708u;
            goto label_304708;
        }
    }
    ctx->pc = 0x3046D0u;
label_3046d0:
    // 0x3046d0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x3046d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3046d4: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3046D4u;
    SET_GPR_U32(ctx, 31, 0x3046DCu);
    ctx->pc = 0x3046D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046D4u;
    // 0x3046d8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3046D4u, 0x3046DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046DCu;
label_3046dc:
    // 0x3046dc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3046DCu;
    {
        const bool branch_taken_0x3046dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3046dc) {
            ctx->pc = 0x3046F4u;
            goto label_3046f4;
        }
    }
    ctx->pc = 0x3046E4u;
    // 0x3046e4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3046E4u;
    SET_GPR_U32(ctx, 31, 0x3046ECu);
    ctx->pc = 0x3046E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046E4u;
    // 0x3046e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3046E4u, 0x3046ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046ECu;
label_3046ec:
    // 0x3046ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3046ECu;
    {
        const bool branch_taken_0x3046ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046ECu;
        // 0x3046f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046ec) {
            ctx->pc = 0x304708u;
            goto label_304708;
        }
    }
    ctx->pc = 0x3046F4u;
label_3046f4:
    // 0x3046f4: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3046F4u;
    SET_GPR_U32(ctx, 31, 0x3046FCu);
    ctx->pc = 0x3046F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046F4u;
    // 0x3046f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3046F4u, 0x3046FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046FCu;
label_3046fc:
    // 0x3046fc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3046FCu;
    SET_GPR_U32(ctx, 31, 0x304704u);
    ctx->pc = 0x304700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046FCu;
    // 0x304700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3046FCu, 0x304704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304704u;
label_304704:
    // 0x304704: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x304704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_304708:
    // 0x304708: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x304708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30470c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x30470cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304710: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x304710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304714: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x304714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304718: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x304718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30471c: 0x3e00008  jr          $ra
    ctx->pc = 0x30471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30471Cu;
        // 0x304720: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304724u;
    // 0x304724: 0x0  nop
    ctx->pc = 0x304724u;
    // NOP
    // 0x304728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30472c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304730: 0xc0c0ff4  jal         func_303FD0
    ctx->pc = 0x304730u;
    SET_GPR_U32(ctx, 31, 0x304738u);
    ctx->pc = 0x304734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304730u;
    // 0x304734: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD0u;
    goto label_303fd0;
    ctx->pc = 0x304738u;
label_304738:
    // 0x304738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30473c: 0x3e00008  jr          $ra
    ctx->pc = 0x30473Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30473Cu;
        // 0x304740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30473Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304744u;
    // 0x304744: 0x0  nop
    ctx->pc = 0x304744u;
    // NOP
label_304748:
    // 0x304748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x304748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30474c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x304754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x304758: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x304758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30475c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x304760: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x304760u;
    SET_GPR_U32(ctx, 31, 0x304768u);
    ctx->pc = 0x304764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304760u;
    // 0x304764: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x304760u, 0x304768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304768u;
label_304768:
    // 0x304768: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x304768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x30476c: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x30476cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x304770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304770u;
    {
        const bool branch_taken_0x304770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304770) {
            ctx->pc = 0x304780u;
            goto label_304780;
        }
    }
    ctx->pc = 0x304778u;
    // 0x304778: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x304778u;
    SET_GPR_U32(ctx, 31, 0x304780u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x304778u, 0x304780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304780u;
label_304780:
    // 0x304780: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304780u;
    SET_GPR_U32(ctx, 31, 0x304788u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304780u, 0x304788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304788u;
label_304788:
    // 0x304788: 0xc0c08b2  jal         func_3022C8
    ctx->pc = 0x304788u;
    SET_GPR_U32(ctx, 31, 0x304790u);
    ctx->pc = 0x3022C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022C8u, 0x304788u, 0x304790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304790u;
label_304790:
    // 0x304790: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x304790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304794: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x304794u;
    {
        const bool branch_taken_0x304794 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x304798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304794u;
        // 0x304798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304794) {
            ctx->pc = 0x3047A4u;
            goto label_3047a4;
        }
    }
    ctx->pc = 0x30479Cu;
    // 0x30479c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30479Cu;
    {
        const bool branch_taken_0x30479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30479Cu;
        // 0x3047a0: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30479c) {
            ctx->pc = 0x3047F8u;
            goto label_3047f8;
        }
    }
    ctx->pc = 0x3047A4u;
label_3047a4:
    // 0x3047a4: 0xc0c0ff4  jal         func_303FD0
    ctx->pc = 0x3047A4u;
    SET_GPR_U32(ctx, 31, 0x3047ACu);
    ctx->pc = 0x3047A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047A4u;
    // 0x3047a8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD0u;
    goto label_303fd0;
    ctx->pc = 0x3047ACu;
label_3047ac:
    // 0x3047ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3047acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3047b0: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3047B0u;
    {
        const bool branch_taken_0x3047b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3047B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047B0u;
        // 0x3047b4: 0x3c10004f  lui         $s0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047b0) {
            ctx->pc = 0x3047CCu;
            goto label_3047cc;
        }
    }
    ctx->pc = 0x3047B8u;
    // 0x3047b8: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3047B8u;
    SET_GPR_U32(ctx, 31, 0x3047C0u);
    ctx->pc = 0x3047BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047B8u;
    // 0x3047bc: 0x8e040c28  lw          $a0, 0xC28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3047B8u, 0x3047C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047C0u;
label_3047c0:
    // 0x3047c0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3047c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3047c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3047C4u;
    {
        const bool branch_taken_0x3047c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047C4u;
        // 0x3047c8: 0x8e040c28  lw          $a0, 0xC28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047c4) {
            ctx->pc = 0x3047ECu;
            goto label_3047ec;
        }
    }
    ctx->pc = 0x3047CCu;
label_3047cc:
    // 0x3047cc: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3047CCu;
    SET_GPR_U32(ctx, 31, 0x3047D4u);
    ctx->pc = 0x3047D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047CCu;
    // 0x3047d0: 0x8e040c28  lw          $a0, 0xC28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3047CCu, 0x3047D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047D4u;
label_3047d4:
    // 0x3047d4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3047d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3047d8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3047d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3047dc: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x3047dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x3047e0: 0x8e040c28  lw          $a0, 0xC28($s0)
    ctx->pc = 0x3047e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
    // 0x3047e4: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x3047e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3047e8: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x3047e8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_3047ec:
    // 0x3047ec: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x3047ECu;
    SET_GPR_U32(ctx, 31, 0x3047F4u);
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3047ECu, 0x3047F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047F4u;
label_3047f4:
    // 0x3047f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3047f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3047f8:
    // 0x3047f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3047f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3047fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3047fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x304800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304808: 0x3e00008  jr          $ra
    ctx->pc = 0x304808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304808u;
        // 0x30480c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304810u;
}
