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

// Function: sub_00323438
// Address: 0x323438 - 0x3235c8
void sub_00323438_0x323438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323438_0x323438");
#endif

    switch (ctx->pc) {
        case 0x323460u: goto label_323460;
        case 0x323490u: goto label_323490;
        case 0x3234b8u: goto label_3234b8;
        case 0x3234dcu: goto label_3234dc;
        case 0x323500u: goto label_323500;
        case 0x323524u: goto label_323524;
        case 0x323544u: goto label_323544;
        case 0x323568u: goto label_323568;
        case 0x323588u: goto label_323588;
        case 0x3235acu: goto label_3235ac;
        default: break;
    }

    ctx->pc = 0x323438u;

    // 0x323438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32343c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x32343cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x323440: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x323440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x323444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32344c: 0x24c63230  addiu       $a2, $a2, 0x3230
    ctx->pc = 0x32344cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12848));
    // 0x323450: 0x24e745d8  addiu       $a3, $a3, 0x45D8
    ctx->pc = 0x323450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17880));
    // 0x323454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x323454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323458: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x323458u;
    SET_GPR_U32(ctx, 31, 0x323460u);
    ctx->pc = 0x32345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323458u;
    // 0x32345c: 0x24050114  addiu       $a1, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x323458u, 0x323460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323460u;
label_323460:
    // 0x323460: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x323460u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x323464: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x323464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x323468: 0xae02b1e0  sw          $v0, -0x4E20($s0)
    ctx->pc = 0x323468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61B1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B1E0u, _value); } while (0);
    // 0x32346c: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x32346cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x323470: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x323470u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x323474: 0x2610b1e0  addiu       $s0, $s0, -0x4E20
    ctx->pc = 0x323474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947296));
    // 0x323478: 0x24c63c88  addiu       $a2, $a2, 0x3C88
    ctx->pc = 0x323478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15496));
    // 0x32347c: 0x24e73cd0  addiu       $a3, $a3, 0x3CD0
    ctx->pc = 0x32347cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15568));
    // 0x323480: 0x25083d50  addiu       $t0, $t0, 0x3D50
    ctx->pc = 0x323480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15696));
    // 0x323484: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x323484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x323488: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x323488u;
    SET_GPR_U32(ctx, 31, 0x323490u);
    ctx->pc = 0x32348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323488u;
    // 0x32348c: 0x24050114  addiu       $a1, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x323488u, 0x323490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323490u;
label_323490:
    // 0x323490: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x323490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x323494: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x323494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x323498: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x323498u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x32349c: 0x24c63da0  addiu       $a2, $a2, 0x3DA0
    ctx->pc = 0x32349cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15776));
    // 0x3234a0: 0x25083e00  addiu       $t0, $t0, 0x3E00
    ctx->pc = 0x3234a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15872));
    // 0x3234a4: 0x24e73db8  addiu       $a3, $a3, 0x3DB8
    ctx->pc = 0x3234a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15800));
    // 0x3234a8: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x3234a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x3234ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3234acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3234b0: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x3234B0u;
    SET_GPR_U32(ctx, 31, 0x3234B8u);
    ctx->pc = 0x3234B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3234B0u;
    // 0x3234b4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x3234B0u, 0x3234B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3234B8u;
label_3234b8:
    // 0x3234b8: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x3234b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x3234bc: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x3234bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x3234c0: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x3234c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x3234c4: 0x24c64180  addiu       $a2, $a2, 0x4180
    ctx->pc = 0x3234c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16768));
    // 0x3234c8: 0x24e74248  addiu       $a3, $a3, 0x4248
    ctx->pc = 0x3234c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16968));
    // 0x3234cc: 0x24a540c8  addiu       $a1, $a1, 0x40C8
    ctx->pc = 0x3234ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16584));
    // 0x3234d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3234d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3234d4: 0xc0e2910  jal         func_38A440
    ctx->pc = 0x3234D4u;
    SET_GPR_U32(ctx, 31, 0x3234DCu);
    ctx->pc = 0x3234D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3234D4u;
    // 0x3234d8: 0x24040114  addiu       $a0, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A440u, 0x3234D4u, 0x3234DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3234DCu;
label_3234dc:
    // 0x3234dc: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x3234dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x3234e0: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x3234e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x3234e4: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3234e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3234e8: 0x24c63e28  addiu       $a2, $a2, 0x3E28
    ctx->pc = 0x3234e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15912));
    // 0x3234ec: 0x25083ef0  addiu       $t0, $t0, 0x3EF0
    ctx->pc = 0x3234ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16112));
    // 0x3234f0: 0x24e73e70  addiu       $a3, $a3, 0x3E70
    ctx->pc = 0x3234f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15984));
    // 0x3234f4: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x3234f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x3234f8: 0xc0e63a2  jal         func_398E88
    ctx->pc = 0x3234F8u;
    SET_GPR_U32(ctx, 31, 0x323500u);
    ctx->pc = 0x3234FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3234F8u;
    // 0x3234fc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x3234F8u, 0x323500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323500u;
label_323500:
    // 0x323500: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x323500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x323504: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x323504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x323508: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x323508u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x32350c: 0x24c64320  addiu       $a2, $a2, 0x4320
    ctx->pc = 0x32350cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17184));
    // 0x323510: 0x24a54268  addiu       $a1, $a1, 0x4268
    ctx->pc = 0x323510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17000));
    // 0x323514: 0x24e743e8  addiu       $a3, $a3, 0x43E8
    ctx->pc = 0x323514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17384));
    // 0x323518: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x323518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x32351c: 0xc0e63b4  jal         func_398ED0
    ctx->pc = 0x32351Cu;
    SET_GPR_U32(ctx, 31, 0x323524u);
    ctx->pc = 0x323520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32351Cu;
    // 0x323520: 0x24040114  addiu       $a0, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x32351Cu, 0x323524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323524u;
label_323524:
    // 0x323524: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x323524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x323528: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x323528u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x32352c: 0x25083f60  addiu       $t0, $t0, 0x3F60
    ctx->pc = 0x32352cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16224));
    // 0x323530: 0x24c63f40  addiu       $a2, $a2, 0x3F40
    ctx->pc = 0x323530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16192));
    // 0x323534: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x323534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x323538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x323538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32353c: 0xc0e6a18  jal         func_39A860
    ctx->pc = 0x32353Cu;
    SET_GPR_U32(ctx, 31, 0x323544u);
    ctx->pc = 0x323540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32353Cu;
    // 0x323540: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A860u, 0x32353Cu, 0x323544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323544u;
label_323544:
    // 0x323544: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x323544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x323548: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x323548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x32354c: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x32354cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x323550: 0x24c64490  addiu       $a2, $a2, 0x4490
    ctx->pc = 0x323550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17552));
    // 0x323554: 0x24a54408  addiu       $a1, $a1, 0x4408
    ctx->pc = 0x323554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17416));
    // 0x323558: 0x24e74508  addiu       $a3, $a3, 0x4508
    ctx->pc = 0x323558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17672));
    // 0x32355c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x32355cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x323560: 0xc0e6a2a  jal         func_39A8A8
    ctx->pc = 0x323560u;
    SET_GPR_U32(ctx, 31, 0x323568u);
    ctx->pc = 0x323564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323560u;
    // 0x323564: 0x24040114  addiu       $a0, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A8A8u, 0x323560u, 0x323568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323568u;
label_323568:
    // 0x323568: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x323568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x32356c: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x32356cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x323570: 0x24c63be0  addiu       $a2, $a2, 0x3BE0
    ctx->pc = 0x323570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15328));
    // 0x323574: 0x25083c48  addiu       $t0, $t0, 0x3C48
    ctx->pc = 0x323574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15432));
    // 0x323578: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x323578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x32357c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32357cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323580: 0xc0e39f6  jal         func_38E7D8
    ctx->pc = 0x323580u;
    SET_GPR_U32(ctx, 31, 0x323588u);
    ctx->pc = 0x323584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323580u;
    // 0x323584: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E7D8u, 0x323580u, 0x323588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323588u;
label_323588:
    // 0x323588: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x323588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x32358c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x32358cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x323590: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x323590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x323594: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x323594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x323598: 0x24a53f68  addiu       $a1, $a1, 0x3F68
    ctx->pc = 0x323598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16232));
    // 0x32359c: 0x24c64008  addiu       $a2, $a2, 0x4008
    ctx->pc = 0x32359cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16392));
    // 0x3235a0: 0x24e740a8  addiu       $a3, $a3, 0x40A8
    ctx->pc = 0x3235a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16552));
    // 0x3235a4: 0xc0e3a08  jal         func_38E820
    ctx->pc = 0x3235A4u;
    SET_GPR_U32(ctx, 31, 0x3235ACu);
    ctx->pc = 0x3235A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235A4u;
    // 0x3235a8: 0x24040114  addiu       $a0, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E820u, 0x3235A4u, 0x3235ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235ACu;
label_3235ac:
    // 0x3235ac: 0x24032504  addiu       $v1, $zero, 0x2504
    ctx->pc = 0x3235acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9476));
    // 0x3235b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3235b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3235b4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3235b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3235b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3235b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3235bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3235bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3235c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3235C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3235C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235C0u;
        // 0x3235c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3235C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3235C8u;
}
