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

// Function: sub_001A58B0
// Address: 0x1a58b0 - 0x1a5af0
void sub_001A58B0_0x1a58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A58B0_0x1a58b0");
#endif

    switch (ctx->pc) {
        case 0x1a58d4u: goto label_1a58d4;
        case 0x1a58e8u: goto label_1a58e8;
        case 0x1a58fcu: goto label_1a58fc;
        case 0x1a5924u: goto label_1a5924;
        case 0x1a5930u: goto label_1a5930;
        case 0x1a594cu: goto label_1a594c;
        case 0x1a5964u: goto label_1a5964;
        case 0x1a598cu: goto label_1a598c;
        case 0x1a5998u: goto label_1a5998;
        case 0x1a59b0u: goto label_1a59b0;
        case 0x1a59d8u: goto label_1a59d8;
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a0cu: goto label_1a5a0c;
        case 0x1a5a1cu: goto label_1a5a1c;
        case 0x1a5a34u: goto label_1a5a34;
        case 0x1a5a4cu: goto label_1a5a4c;
        case 0x1a5a58u: goto label_1a5a58;
        case 0x1a5a70u: goto label_1a5a70;
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5ab8u: goto label_1a5ab8;
        default: break;
    }

    ctx->pc = 0x1a58b0u;

    // 0x1a58b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a58b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a58b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a58b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a58b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a58bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a58bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a58c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a58c4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a58c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a58c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58cc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1A58CCu;
    {
        const bool branch_taken_0x1a58cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a58cc) {
            ctx->pc = 0x1A5AA8u;
            goto label_1a5aa8;
        }
    }
    ctx->pc = 0x1A58D4u;
label_1a58d4:
    // 0x1a58d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a58d8: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a58dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a58dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58e0: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A58E0u;
    SET_GPR_U32(ctx, 31, 0x1A58E8u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A58E0u, 0x1A58E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58E8u;
label_1a58e8:
    // 0x1a58e8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a58ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a58f0: 0x246500f4  addiu       $a1, $v1, 0xF4
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 244));
    // 0x1a58f4: 0xc069bd4  jal         func_1A6F50
    ctx->pc = 0x1A58F4u;
    SET_GPR_U32(ctx, 31, 0x1A58FCu);
    ctx->pc = 0x1A6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F50u, 0x1A58F4u, 0x1A58FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58FCu;
label_1a58fc:
    // 0x1a58fc: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1A58FCu;
    {
        const bool branch_taken_0x1a58fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a58fc) {
            ctx->pc = 0x1A5AA4u;
            goto label_1a5aa4;
        }
    }
    ctx->pc = 0x1A5904u;
    // 0x1a5904: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1a5904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a5908: 0xdf829390  ld          $v0, -0x6C70($gp)
    ctx->pc = 0x1a5908u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939536)));
    // 0x1a590c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a590cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a5910: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5914: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a5914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a5918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a591c: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A591Cu;
    SET_GPR_U32(ctx, 31, 0x1A5924u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A591Cu, 0x1A5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5924u;
label_1a5924:
    // 0x1a5924: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a5924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5928: 0xc069da0  jal         func_1A7680
    ctx->pc = 0x1A5928u;
    SET_GPR_U32(ctx, 31, 0x1A5930u);
    ctx->pc = 0x1A7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7680u, 0x1A5928u, 0x1A5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5930u;
label_1a5930:
    // 0x1a5930: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a5934: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a5938: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1a5938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1a593c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1a593cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5940: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5944: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A5944u;
    SET_GPR_U32(ctx, 31, 0x1A594Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A5944u, 0x1A594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A594Cu;
label_1a594c:
    // 0x1a594c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5950: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5954: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a5958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a595c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A595Cu;
    SET_GPR_U32(ctx, 31, 0x1A5964u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A595Cu, 0x1A5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5964u;
label_1a5964:
    // 0x1a5964: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5968: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1a5968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1a596c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5970: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1a5970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1a5974: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a5974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a5978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a597c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5980: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5984: 0xc08c544  jal         func_231510
    ctx->pc = 0x1A5984u;
    SET_GPR_U32(ctx, 31, 0x1A598Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1A5984u, 0x1A598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A598Cu;
label_1a598c:
    // 0x1a598c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5990: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A5990u;
    SET_GPR_U32(ctx, 31, 0x1A5998u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A5990u, 0x1A5998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5998u;
label_1a5998:
    // 0x1a5998: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a599c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a59a0: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a59a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a59a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59a8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A59A8u;
    SET_GPR_U32(ctx, 31, 0x1A59B0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A59A8u, 0x1A59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59B0u;
label_1a59b0:
    // 0x1a59b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a59b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a59b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a59b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a59b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a59bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a59c0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a59c4: 0xc78d81b8  lwc1        $f13, -0x7E48($gp)
    ctx->pc = 0x1a59c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a59c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a59c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a59ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59d0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1A59D0u;
    SET_GPR_U32(ctx, 31, 0x1A59D8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1A59D0u, 0x1A59D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59D8u;
label_1a59d8:
    // 0x1a59d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a59dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A59DCu;
    SET_GPR_U32(ctx, 31, 0x1A59E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A59DCu, 0x1A59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59E4u;
label_1a59e4:
    // 0x1a59e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a59e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a59ec: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a59f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59f4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A59F4u;
    SET_GPR_U32(ctx, 31, 0x1A59FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A59F4u, 0x1A59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59FCu;
label_1a59fc:
    // 0x1a59fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a04: 0xc08c49c  jal         func_231270
    ctx->pc = 0x1A5A04u;
    SET_GPR_U32(ctx, 31, 0x1A5A0Cu);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1A5A04u, 0x1A5A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A0Cu;
label_1a5a0c:
    // 0x1a5a0c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1a5a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1a5a10: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5a14: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A5A14u;
    SET_GPR_U32(ctx, 31, 0x1A5A1Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A5A14u, 0x1A5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A1Cu;
label_1a5a1c:
    // 0x1a5a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5a24: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a5a28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a2c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5A34u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A5A2Cu, 0x1A5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A34u;
label_1a5a34:
    // 0x1a5a34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a5a3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a44: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1A5A44u;
    SET_GPR_U32(ctx, 31, 0x1A5A4Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1A5A44u, 0x1A5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A4Cu;
label_1a5a4c:
    // 0x1a5a4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5a50: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A5A50u;
    SET_GPR_U32(ctx, 31, 0x1A5A58u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A5A50u, 0x1A5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A58u;
label_1a5a58:
    // 0x1a5a58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5a60: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a5a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A5A68u;
    SET_GPR_U32(ctx, 31, 0x1A5A70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A5A68u, 0x1A5A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A70u;
label_1a5a70:
    // 0x1a5a70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a5a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5a78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5a80: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1a5a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a5a84: 0xc78d81b8  lwc1        $f13, -0x7E48($gp)
    ctx->pc = 0x1a5a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a5a88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a5a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a5a8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a90: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1A5A90u;
    SET_GPR_U32(ctx, 31, 0x1A5A98u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1A5A90u, 0x1A5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A98u;
label_1a5a98:
    // 0x1a5a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A5A9Cu;
    {
        const bool branch_taken_0x1a5a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a9c) {
            ctx->pc = 0x1A5AC8u;
            goto label_1a5ac8;
        }
    }
    ctx->pc = 0x1A5AA4u;
label_1a5aa4:
    // 0x1a5aa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a5aa8:
    // 0x1a5aa8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5aac: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a5ab0: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x1A5AB0u;
    SET_GPR_U32(ctx, 31, 0x1A5AB8u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A5AB0u, 0x1A5AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AB8u;
label_1a5ab8:
    // 0x1a5ab8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1a5ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5abc: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x1A5ABCu;
    {
        const bool branch_taken_0x1a5abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5abc) {
            ctx->pc = 0x1A58D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a58d4;
        }
    }
    ctx->pc = 0x1A5AC4u;
    // 0x1a5ac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ac8:
    // 0x1a5ac8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5ad8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a5ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a5adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5AE4u;
    // 0x1a5ae4: 0x0  nop
    ctx->pc = 0x1a5ae4u;
    // NOP
    // 0x1a5ae8: 0x0  nop
    ctx->pc = 0x1a5ae8u;
    // NOP
    // 0x1a5aec: 0x0  nop
    ctx->pc = 0x1a5aecu;
    // NOP
    ctx->pc = 0x1a5af0u;
}
