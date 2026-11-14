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

// Function: sub_002A83A0
// Address: 0x2a83a0 - 0x2a9290
void sub_002A83A0_0x2a83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A83A0_0x2a83a0");
#endif

    switch (ctx->pc) {
        case 0x2a83b8u: goto label_2a83b8;
        case 0x2a845cu: goto label_2a845c;
        case 0x2a847cu: goto label_2a847c;
        case 0x2a84bcu: goto label_2a84bc;
        case 0x2a84f8u: goto label_2a84f8;
        case 0x2a8534u: goto label_2a8534;
        case 0x2a8578u: goto label_2a8578;
        case 0x2a8594u: goto label_2a8594;
        case 0x2a85b0u: goto label_2a85b0;
        case 0x2a85d4u: goto label_2a85d4;
        case 0x2a8630u: goto label_2a8630;
        case 0x2a8670u: goto label_2a8670;
        case 0x2a8680u: goto label_2a8680;
        case 0x2a8698u: goto label_2a8698;
        case 0x2a86b8u: goto label_2a86b8;
        case 0x2a86ecu: goto label_2a86ec;
        case 0x2a8738u: goto label_2a8738;
        case 0x2a8794u: goto label_2a8794;
        case 0x2a87c4u: goto label_2a87c4;
        case 0x2a87d4u: goto label_2a87d4;
        case 0x2a88b8u: goto label_2a88b8;
        case 0x2a88ccu: goto label_2a88cc;
        case 0x2a88e0u: goto label_2a88e0;
        case 0x2a88f4u: goto label_2a88f4;
        case 0x2a8914u: goto label_2a8914;
        case 0x2a8924u: goto label_2a8924;
        case 0x2a8938u: goto label_2a8938;
        case 0x2a894cu: goto label_2a894c;
        case 0x2a8958u: goto label_2a8958;
        case 0x2a8970u: goto label_2a8970;
        case 0x2a898cu: goto label_2a898c;
        case 0x2a89b8u: goto label_2a89b8;
        case 0x2a89e0u: goto label_2a89e0;
        case 0x2a8a0cu: goto label_2a8a0c;
        case 0x2a8a20u: goto label_2a8a20;
        case 0x2a8aecu: goto label_2a8aec;
        case 0x2a8af8u: goto label_2a8af8;
        case 0x2a8b04u: goto label_2a8b04;
        case 0x2a8b10u: goto label_2a8b10;
        case 0x2a8bd4u: goto label_2a8bd4;
        case 0x2a8be0u: goto label_2a8be0;
        case 0x2a8becu: goto label_2a8bec;
        case 0x2a8bf8u: goto label_2a8bf8;
        case 0x2a8cb0u: goto label_2a8cb0;
        case 0x2a8cbcu: goto label_2a8cbc;
        case 0x2a8cc8u: goto label_2a8cc8;
        case 0x2a8cd4u: goto label_2a8cd4;
        case 0x2a8d98u: goto label_2a8d98;
        case 0x2a8da4u: goto label_2a8da4;
        case 0x2a8db0u: goto label_2a8db0;
        case 0x2a8dbcu: goto label_2a8dbc;
        case 0x2a8dd4u: goto label_2a8dd4;
        case 0x2a8e34u: goto label_2a8e34;
        case 0x2a8e84u: goto label_2a8e84;
        case 0x2a8fdcu: goto label_2a8fdc;
        case 0x2a8fe8u: goto label_2a8fe8;
        case 0x2a9000u: goto label_2a9000;
        case 0x2a901cu: goto label_2a901c;
        case 0x2a902cu: goto label_2a902c;
        case 0x2a9044u: goto label_2a9044;
        case 0x2a905cu: goto label_2a905c;
        case 0x2a90bcu: goto label_2a90bc;
        case 0x2a90ccu: goto label_2a90cc;
        case 0x2a90e8u: goto label_2a90e8;
        case 0x2a90f8u: goto label_2a90f8;
        case 0x2a9104u: goto label_2a9104;
        case 0x2a9138u: goto label_2a9138;
        case 0x2a9148u: goto label_2a9148;
        case 0x2a916cu: goto label_2a916c;
        case 0x2a918cu: goto label_2a918c;
        case 0x2a91a4u: goto label_2a91a4;
        case 0x2a91b0u: goto label_2a91b0;
        case 0x2a91f8u: goto label_2a91f8;
        case 0x2a920cu: goto label_2a920c;
        case 0x2a9234u: goto label_2a9234;
        case 0x2a9254u: goto label_2a9254;
        case 0x2a9264u: goto label_2a9264;
        default: break;
    }

    ctx->pc = 0x2a83a0u;

    // 0x2a83a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a83a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a83a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a83a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a83ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a83acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83b0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2A83B0u;
    SET_GPR_U32(ctx, 31, 0x2A83B8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2A83B0u, 0x2A83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83B8u;
label_2a83b8:
    // 0x2a83b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a83bc: 0x24636380  addiu       $v1, $v1, 0x6380
    ctx->pc = 0x2a83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25472));
    // 0x2a83c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a83c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a83c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83cc: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2a83ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2a83d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83d4: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2a83d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x2a83d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83dc: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x2a83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x2a83e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83e4: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2a83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2a83e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83ec: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x2a83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x2a83f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a83f4: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2a83f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2a83f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a83f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a83fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8400: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2a8404: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a8404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a840c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a840cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a8410: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8418u;
    // 0x2a8418: 0x0  nop
    ctx->pc = 0x2a8418u;
    // NOP
    // 0x2a841c: 0x0  nop
    ctx->pc = 0x2a841cu;
    // NOP
    // 0x2a8420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a8428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a842c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2a842cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a8430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a8430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8434: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A8434u;
    {
        const bool branch_taken_0x2a8434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8434) {
            ctx->pc = 0x2A847Cu;
            goto label_2a847c;
        }
    }
    ctx->pc = 0x2A843Cu;
    // 0x2a843c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a843cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a8440: 0x24636380  addiu       $v1, $v1, 0x6380
    ctx->pc = 0x2a8440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25472));
    // 0x2a8444: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a8444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8448: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a8448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a844c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8454: 0xc09d150  jal         func_274540
    ctx->pc = 0x2A8454u;
    SET_GPR_U32(ctx, 31, 0x2A845Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2A8454u, 0x2A845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A845Cu;
label_2a845c:
    // 0x2a845c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2a845cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8460: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a8460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a8464: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a8464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a8468: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8468u;
    {
        const bool branch_taken_0x2a8468 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a8468) {
            ctx->pc = 0x2A847Cu;
            goto label_2a847c;
        }
    }
    ctx->pc = 0x2A8470u;
    // 0x2a8470: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a8470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8474: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2A8474u;
    SET_GPR_U32(ctx, 31, 0x2A847Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2A8474u, 0x2A847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A847Cu;
label_2a847c:
    // 0x2a847c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8484: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a8484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8488: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8490u;
    // 0x2a8490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a8490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a8494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a849c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a84a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a84a4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2a84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2a84a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a84a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a84ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2a84acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a84b0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2a84b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a84b4: 0xc09d18c  jal         func_274630
    ctx->pc = 0x2A84B4u;
    SET_GPR_U32(ctx, 31, 0x2A84BCu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2A84B4u, 0x2A84BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84BCu;
label_2a84bc:
    // 0x2a84bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2a84bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a84c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a84c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a84c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a84c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a84c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a84cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a84ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a84d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A84D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A84D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A84D8u;
    // 0x2a84d8: 0x0  nop
    ctx->pc = 0x2a84d8u;
    // NOP
    // 0x2a84dc: 0x0  nop
    ctx->pc = 0x2a84dcu;
    // NOP
    // 0x2a84e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a84e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a84e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a84e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a84e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a84ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a84f0: 0xc09d1d8  jal         func_274760
    ctx->pc = 0x2A84F0u;
    SET_GPR_U32(ctx, 31, 0x2A84F8u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2A84F0u, 0x2A84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84F8u;
label_2a84f8:
    // 0x2a84f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a84f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a84fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a84fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a8500: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8508u;
    // 0x2a8508: 0x0  nop
    ctx->pc = 0x2a8508u;
    // NOP
    // 0x2a850c: 0x0  nop
    ctx->pc = 0x2a850cu;
    // NOP
    // 0x2a8510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a851c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a8520: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a8520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a8524: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a8524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8528: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2a8528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a852c: 0xc09d1e4  jal         func_274790
    ctx->pc = 0x2A852Cu;
    SET_GPR_U32(ctx, 31, 0x2A8534u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2A852Cu, 0x2A8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8534u;
label_2a8534:
    // 0x2a8534: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2a8534u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8538: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a8538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a853c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2a853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2a8540: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8544: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x2a8544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x2a8548: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a8548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a854c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2a854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2a8550: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a8550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8554: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x2a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x2a8558: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a855c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a8560: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8564: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2a8564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a8568: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a8568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a856c: 0x24a5dc50  addiu       $a1, $a1, -0x23B0
    ctx->pc = 0x2a856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958160));
    // 0x2a8570: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2A8570u;
    SET_GPR_U32(ctx, 31, 0x2A8578u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2A8570u, 0x2A8578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8578u;
label_2a8578:
    // 0x2a8578: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a857c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a857cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2a8580: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a8580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8584: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a8584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a8588: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a8588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a858c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A858Cu;
    SET_GPR_U32(ctx, 31, 0x2A8594u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A858Cu, 0x2A8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8594u;
label_2a8594:
    // 0x2a8594: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8598: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x2a8598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x2a859c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a85a0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2a85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a85a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a85a8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A85A8u;
    SET_GPR_U32(ctx, 31, 0x2A85B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A85A8u, 0x2A85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85B0u;
label_2a85b0:
    // 0x2a85b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a85b4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x2a85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x2a85b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a85bc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a85c0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a85c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a85c4: 0x24a5dc70  addiu       $a1, $a1, -0x2390
    ctx->pc = 0x2a85c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958192));
    // 0x2a85c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a85c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a85cc: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2A85CCu;
    SET_GPR_U32(ctx, 31, 0x2A85D4u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2A85CCu, 0x2A85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85D4u;
label_2a85d4:
    // 0x2a85d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a85d8: 0xa06200f4  sb          $v0, 0xF4($v1)
    ctx->pc = 0x2a85d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 244), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a85dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a85dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a85e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a85e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a85e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a85e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a85e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a85ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A85ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A85ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A85F4u;
    // 0x2a85f4: 0x0  nop
    ctx->pc = 0x2a85f4u;
    // NOP
    // 0x2a85f8: 0x0  nop
    ctx->pc = 0x2a85f8u;
    // NOP
    // 0x2a85fc: 0x0  nop
    ctx->pc = 0x2a85fcu;
    // NOP
    // 0x2a8600: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2a8600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2a8604: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a8604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a8608: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a8608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a860c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a8610: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a8614: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a8618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a8618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a861c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a861cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a8620: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x2a8620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    // 0x2a8624: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a8624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8628: 0xc09d248  jal         func_274920
    ctx->pc = 0x2A8628u;
    SET_GPR_U32(ctx, 31, 0x2A8630u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2A8628u, 0x2A8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8630u;
label_2a8630:
    // 0x2a8630: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a8630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8634: 0x104302f7  beq         $v0, $v1, . + 4 + (0x2F7 << 2)
    ctx->pc = 0x2A8634u;
    {
        const bool branch_taken_0x2a8634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8634) {
            ctx->pc = 0x2A9214u;
            goto label_2a9214;
        }
    }
    ctx->pc = 0x2A863Cu;
    // 0x2a863c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2a863cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8640: 0x10520282  beq         $v0, $s2, . + 4 + (0x282 << 2)
    ctx->pc = 0x2A8640u;
    {
        const bool branch_taken_0x2a8640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2a8640) {
            ctx->pc = 0x2A904Cu;
            goto label_2a904c;
        }
    }
    ctx->pc = 0x2A8648u;
    // 0x2a8648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a8648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a864c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A864Cu;
    {
        const bool branch_taken_0x2a864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a864c) {
            ctx->pc = 0x2A865Cu;
            goto label_2a865c;
        }
    }
    ctx->pc = 0x2A8654u;
    // 0x2a8654: 0x10000304  b           . + 4 + (0x304 << 2)
    ctx->pc = 0x2A8654u;
    {
        const bool branch_taken_0x2a8654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8654) {
            ctx->pc = 0x2A9268u;
            goto label_2a9268;
        }
    }
    ctx->pc = 0x2A865Cu;
label_2a865c:
    // 0x2a865c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8660: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x2a8660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2a8664: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a8664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a8668: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A8668u;
    SET_GPR_U32(ctx, 31, 0x2A8670u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A8668u, 0x2A8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8670u;
label_2a8670:
    // 0x2a8670: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a8670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8674: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a8674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8678: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2A8678u;
    SET_GPR_U32(ctx, 31, 0x2A8680u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A8678u, 0x2A8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8680u;
label_2a8680:
    // 0x2a8680: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8680u;
    {
        const bool branch_taken_0x2a8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8680) {
            ctx->pc = 0x2A86A4u;
            goto label_2a86a4;
        }
    }
    ctx->pc = 0x2A8688u;
    // 0x2a8688: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a8688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a868c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a8690: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A8690u;
    SET_GPR_U32(ctx, 31, 0x2A8698u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A8690u, 0x2A8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8698u;
label_2a8698:
    // 0x2a8698: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a8698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a869c: 0x100002f2  b           . + 4 + (0x2F2 << 2)
    ctx->pc = 0x2A869Cu;
    {
        const bool branch_taken_0x2a869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a869c) {
            ctx->pc = 0x2A9268u;
            goto label_2a9268;
        }
    }
    ctx->pc = 0x2A86A4u;
label_2a86a4:
    // 0x2a86a4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a86a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2a86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a86ac: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2a86acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2a86b0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2A86B0u;
    SET_GPR_U32(ctx, 31, 0x2A86B8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A86B0u, 0x2A86B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86B8u;
label_2a86b8:
    // 0x2a86b8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2a86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a86bc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2a86bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2a86c0: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2a86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a86c4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a86c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a86c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a86cc: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x2a86ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a86d0: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x2a86d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2a86d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2a86d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2a86d8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a86dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a86e0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2a86e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2a86e4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2A86E4u;
    SET_GPR_U32(ctx, 31, 0x2A86ECu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A86E4u, 0x2A86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86ECu;
label_2a86ec:
    // 0x2a86ec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a86f0: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x2a86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a86f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a86f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a86f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a86f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a86fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8700: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2a8700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a8704: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a8704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a8708: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a8708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a870c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2a870cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2a8710: 0x2463dc88  addiu       $v1, $v1, -0x2378
    ctx->pc = 0x2a8710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958216));
    // 0x2a8714: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2a8714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a8718: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2a8718u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x4EDC88u));
    // 0x2a871c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a871cu;
    { uint32_t bits = FAST_READ32(0x4EDC90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8720: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x2a8720u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x2a8724: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a8724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a8728: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a872c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x2a872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2a8730: 0xc091018  jal         func_244060
    ctx->pc = 0x2A8730u;
    SET_GPR_U32(ctx, 31, 0x2A8738u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A8730u, 0x2A8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8738u;
label_2a8738:
    // 0x2a8738: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2a8738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a873c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8740: 0x908200f4  lbu         $v0, 0xF4($a0)
    ctx->pc = 0x2a8740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2a8744: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2A8744u;
    {
        const bool branch_taken_0x2a8744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8744) {
            ctx->pc = 0x2A89CCu;
            goto label_2a89cc;
        }
    }
    ctx->pc = 0x2A874Cu;
    // 0x2a874c: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x2a874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8750: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x2a8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8754: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x2a8754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2a8758: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x2a8758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2a875c: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x2a875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8760: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2a8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8764: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a8764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a8768: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2a8768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2a876c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x2a876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8770: 0xc7a40148  lwc1        $f4, 0x148($sp)
    ctx->pc = 0x2a8770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8774: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x2a8774u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2a8778: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x2a8778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2a877c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a877cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8780: 0x0  nop
    ctx->pc = 0x2a8780u;
    // NOP
    // 0x2a8784: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x2a8784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2a8788: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a8788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a878c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2A878Cu;
    SET_GPR_U32(ctx, 31, 0x2A8794u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2A878Cu, 0x2A8794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8794u;
label_2a8794:
    // 0x2a8794: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x2a8794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2a8798: 0xc7a2016c  lwc1        $f2, 0x16C($sp)
    ctx->pc = 0x2a8798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a879c: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x2a879cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x2a87a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a87a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a87a4: 0x0  nop
    ctx->pc = 0x2a87a4u;
    // NOP
    // 0x2a87a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a87a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a87ac: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2A87ACu;
    {
        const bool branch_taken_0x2a87ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a87ac) {
            ctx->pc = 0x2A87DCu;
            goto label_2a87dc;
        }
    }
    ctx->pc = 0x2A87B4u;
    // 0x2a87b4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a87b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a87b8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2a87b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2a87bc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A87BCu;
    SET_GPR_U32(ctx, 31, 0x2A87C4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A87BCu, 0x2A87C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87C4u;
label_2a87c4:
    // 0x2a87c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a87c8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2a87c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a87cc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A87CCu;
    SET_GPR_U32(ctx, 31, 0x2A87D4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A87CCu, 0x2A87D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87D4u;
label_2a87d4:
    // 0x2a87d4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2A87D4u;
    {
        const bool branch_taken_0x2a87d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a87d4) {
            ctx->pc = 0x2A88A8u;
            goto label_2a88a8;
        }
    }
    ctx->pc = 0x2A87DCu;
label_2a87dc:
    // 0x2a87dc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a87e0: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x2a87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87e4: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2a87e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a87e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a87ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2a87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2a87f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a87f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a87f4: 0x0  nop
    ctx->pc = 0x2a87f4u;
    // NOP
    // 0x2a87f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a87f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a87fc: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2a87fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2a8800: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x2a8800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8804: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2a8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8808: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a8808u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a880c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2a880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8814: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2a8814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2a8818: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2a8818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a881c: 0xc7ac016c  lwc1        $f12, 0x16C($sp)
    ctx->pc = 0x2a881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8820: 0x460c0343  div.s       $f13, $f0, $f12
    ctx->pc = 0x2a8820u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2a8824: 0xc7ac0114  lwc1        $f12, 0x114($sp)
    ctx->pc = 0x2a8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8828: 0x460d6302  mul.s       $f12, $f12, $f13
    ctx->pc = 0x2a8828u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2a882c: 0xe7ac0114  swc1        $f12, 0x114($sp)
    ctx->pc = 0x2a882cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2a8830: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x2a8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8834: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2a8834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8838: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2a8838u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a883c: 0xc7ad0118  lwc1        $f13, 0x118($sp)
    ctx->pc = 0x2a883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8840: 0x460c6802  mul.s       $f0, $f13, $f12
    ctx->pc = 0x2a8840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x2a8844: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2a8844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2a8848: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2a8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a884c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2a884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8850: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8854: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2a8854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2a8858: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x2a8858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a885c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2a885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8864: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a8864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2a8868: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2a8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a886c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2a886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8870: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8874: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a8874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2a8878: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x2a8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a887c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2a887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8880: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8884: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2a8884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a8888: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2a8888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a888c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2a888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8890: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8894: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2a8894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2a8898: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x2a8898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a889c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2a889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a88a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a88a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a88a4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2a88a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2a88a8:
    // 0x2a88a8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a88a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a88ac: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2a88acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a88b0: 0xc0b5f04  jal         func_2D7C10
    ctx->pc = 0x2A88B0u;
    SET_GPR_U32(ctx, 31, 0x2A88B8u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2A88B0u, 0x2A88B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88B8u;
label_2a88b8:
    // 0x2a88b8: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2a88b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2a88bc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a88c0: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2a88c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2a88c4: 0xc091018  jal         func_244060
    ctx->pc = 0x2A88C4u;
    SET_GPR_U32(ctx, 31, 0x2A88CCu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A88C4u, 0x2A88CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88CCu;
label_2a88cc:
    // 0x2a88cc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a88d0: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x2a88d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2a88d4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2a88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a88d8: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x2A88D8u;
    SET_GPR_U32(ctx, 31, 0x2A88E0u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x2A88D8u, 0x2A88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88E0u;
label_2a88e0:
    // 0x2a88e0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a88e4: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x2a88e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2a88e8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2a88e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a88ec: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A88ECu;
    SET_GPR_U32(ctx, 31, 0x2A88F4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A88ECu, 0x2A88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88F4u;
label_2a88f4:
    // 0x2a88f4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a88f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a88fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a88fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a8900: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2a8900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2a8904: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x2a8904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a890c: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2A890Cu;
    SET_GPR_U32(ctx, 31, 0x2A8914u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2A890Cu, 0x2A8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8914u;
label_2a8914:
    // 0x2a8914: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8918: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x2a8918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2a891c: 0xc091018  jal         func_244060
    ctx->pc = 0x2A891Cu;
    SET_GPR_U32(ctx, 31, 0x2A8924u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A891Cu, 0x2A8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8924u;
label_2a8924:
    // 0x2a8924: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8928: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x2a8928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2a892c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a8930: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x2A8930u;
    SET_GPR_U32(ctx, 31, 0x2A8938u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x2A8930u, 0x2A8938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8938u;
label_2a8938:
    // 0x2a8938: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a893c: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x2a893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2a8940: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a8944: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A8944u;
    SET_GPR_U32(ctx, 31, 0x2A894Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A8944u, 0x2A894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A894Cu;
label_2a894c:
    // 0x2a894c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8950: 0xc1030b6  jal         func_40C2D8
    ctx->pc = 0x2A8950u;
    SET_GPR_U32(ctx, 31, 0x2A8958u);
    ctx->pc = 0x40C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2D8u, 0x2A8950u, 0x2A8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8958u;
label_2a8958:
    // 0x2a8958: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a895c: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x2a895cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x2a8960: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8964: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x2a8964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2a8968: 0xc091018  jal         func_244060
    ctx->pc = 0x2A8968u;
    SET_GPR_U32(ctx, 31, 0x2A8970u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A8968u, 0x2A8970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8970u;
label_2a8970:
    // 0x2a8970: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8974: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8978: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2a8978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a897c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2a897cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a8980: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x2a8980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2a8984: 0xc1030fe  jal         func_40C3F8
    ctx->pc = 0x2A8984u;
    SET_GPR_U32(ctx, 31, 0x2A898Cu);
    ctx->pc = 0x40C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C3F8u, 0x2A8984u, 0x2A898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A898Cu;
label_2a898c:
    // 0x2a898c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8990: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2a8990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2a8994: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8998: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2a8998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a899c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a899cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a89a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a89a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a89a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a89a8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2a89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2a89ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a89acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89b0: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2A89B0u;
    SET_GPR_U32(ctx, 31, 0x2A89B8u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2A89B0u, 0x2A89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89B8u;
label_2a89b8:
    // 0x2a89b8: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2a89b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a89bc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a89c0: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x2a89c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2a89c4: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x2A89C4u;
    {
        const bool branch_taken_0x2a89c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a89c4) {
            ctx->pc = 0x2A8FDCu;
            goto label_2a8fdc;
        }
    }
    ctx->pc = 0x2A89CCu;
label_2a89cc:
    // 0x2a89cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a89ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a89d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2a89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a89d4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A89D4u;
    {
        const bool branch_taken_0x2a89d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a89d4) {
            ctx->pc = 0x2A89FCu;
            goto label_2a89fc;
        }
    }
    ctx->pc = 0x2A89DCu;
    // 0x2a89dc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2a89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2a89e0:
    // 0x2a89e0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2a89e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a89e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a89e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a89ec: 0x0  nop
    ctx->pc = 0x2a89ecu;
    // NOP
    // 0x2a89f0: 0x0  nop
    ctx->pc = 0x2a89f0u;
    // NOP
    // 0x2a89f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A89F4u;
    {
        const bool branch_taken_0x2a89f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a89f4) {
            ctx->pc = 0x2A89E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a89e0;
        }
    }
    ctx->pc = 0x2A89FCu;
label_2a89fc:
    // 0x2a89fc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8a00: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2a8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2a8a04: 0xc091018  jal         func_244060
    ctx->pc = 0x2A8A04u;
    SET_GPR_U32(ctx, 31, 0x2A8A0Cu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A8A04u, 0x2A8A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A0Cu;
label_2a8a0c:
    // 0x2a8a0c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8a10: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x2a8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2a8a14: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2a8a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a8a18: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x2A8A18u;
    SET_GPR_U32(ctx, 31, 0x2A8A20u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x2A8A18u, 0x2A8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A20u;
label_2a8a20:
    // 0x2a8a20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a8a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a8a24: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2a8a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a8a28: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2a8a28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a8a2c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a8a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a30: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2a8a30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2a8a34: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a8a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a8a38: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8a3c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2a8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a40: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8a48: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a8a4c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8a50: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2a8a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a54: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8a5c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a8a60: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8a64: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2a8a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a68: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8a70: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a8a74: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2a8a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a78: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8a80: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a8a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a8a84: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2a8a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a88: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8a90: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a8a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a8a94: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2a8a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a98: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8aa0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a8aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a8aa4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8aa8: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x2a8aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8aac: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2a8aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ab0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8ab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8ab4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a8ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a8ab8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8abc: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x2a8abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ac0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a8ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ac4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8ac8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a8ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a8acc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8ad0: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x2a8ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ad4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2a8ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ad8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8adc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a8adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a8ae0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a8ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a8ae4: 0xc104d24  jal         func_413490
    ctx->pc = 0x2A8AE4u;
    SET_GPR_U32(ctx, 31, 0x2A8AECu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2A8AE4u, 0x2A8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AECu;
label_2a8aec:
    // 0x2a8aec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a8aecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a8af0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2A8AF0u;
    SET_GPR_U32(ctx, 31, 0x2A8AF8u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2A8AF0u, 0x2A8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AF8u;
label_2a8af8:
    // 0x2a8af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8afc: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2A8AFCu;
    SET_GPR_U32(ctx, 31, 0x2A8B04u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2A8AFCu, 0x2A8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B04u;
label_2a8b04:
    // 0x2a8b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b08: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2A8B08u;
    SET_GPR_U32(ctx, 31, 0x2A8B10u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2A8B08u, 0x2A8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B10u;
label_2a8b10:
    // 0x2a8b10: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2a8b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2a8b14: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8b18: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b1c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a8b1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8b20: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8b28: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a8b2c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8b30: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b34: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a8b34u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8b38: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2a8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8b40: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a8b44: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8b48: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b4c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a8b4cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8b50: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2a8b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8b58: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a8b5c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2a8b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b60: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b68: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a8b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a8b6c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2a8b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b70: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b78: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a8b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a8b7c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2a8b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b80: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b88: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a8b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a8b8c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8b90: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x2a8b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b94: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2a8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8b98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b9c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a8b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a8ba0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8ba4: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x2a8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ba8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2a8ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8bac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8bb0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a8bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a8bb4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8bb8: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x2a8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8bbc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2a8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8bc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8bc4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a8bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a8bc8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a8bcc: 0xc104d24  jal         func_413490
    ctx->pc = 0x2A8BCCu;
    SET_GPR_U32(ctx, 31, 0x2A8BD4u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2A8BCCu, 0x2A8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BD4u;
label_2a8bd4:
    // 0x2a8bd4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a8bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a8bd8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2A8BD8u;
    SET_GPR_U32(ctx, 31, 0x2A8BE0u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2A8BD8u, 0x2A8BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BE0u;
label_2a8be0:
    // 0x2a8be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8be4: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2A8BE4u;
    SET_GPR_U32(ctx, 31, 0x2A8BECu);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2A8BE4u, 0x2A8BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BECu;
label_2a8bec:
    // 0x2a8bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bf0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2A8BF0u;
    SET_GPR_U32(ctx, 31, 0x2A8BF8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2A8BF0u, 0x2A8BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BF8u;
label_2a8bf8:
    // 0x2a8bf8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2a8bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a8bfc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8c00: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2a8c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c04: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c0c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a8c10: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8c14: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c18: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c20: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a8c24: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8c28: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a8c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c2c: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c34: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a8c38: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2a8c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c3c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c44: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a8c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a8c48: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2a8c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c4c: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c54: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a8c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a8c58: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2a8c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c5c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c64: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a8c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a8c68: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8c6c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x2a8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c70: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2a8c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c78: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a8c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a8c7c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8c80: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x2a8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c84: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2a8c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8c8c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a8c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a8c90: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8c94: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x2a8c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c98: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a8c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8ca0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a8ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a8ca4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a8ca8: 0xc104d24  jal         func_413490
    ctx->pc = 0x2A8CA8u;
    SET_GPR_U32(ctx, 31, 0x2A8CB0u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2A8CA8u, 0x2A8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CB0u;
label_2a8cb0:
    // 0x2a8cb0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a8cb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a8cb4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2A8CB4u;
    SET_GPR_U32(ctx, 31, 0x2A8CBCu);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2A8CB4u, 0x2A8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CBCu;
label_2a8cbc:
    // 0x2a8cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cc0: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2A8CC0u;
    SET_GPR_U32(ctx, 31, 0x2A8CC8u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2A8CC0u, 0x2A8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CC8u;
label_2a8cc8:
    // 0x2a8cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ccc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2A8CCCu;
    SET_GPR_U32(ctx, 31, 0x2A8CD4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2A8CCCu, 0x2A8CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CD4u;
label_2a8cd4:
    // 0x2a8cd4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2a8cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2a8cd8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8cdc: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ce0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a8ce0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8ce4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a8ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ce8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8cec: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a8cf0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8cf4: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8cf8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a8cf8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8cfc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8d04: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a8d08: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8d0c: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a8d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d10: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a8d10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8d14: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a8d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8d1c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a8d20: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2a8d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8d24: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x2a8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8d2c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a8d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a8d30: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2a8d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8d34: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2a8d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8d3c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a8d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a8d40: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2a8d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8d44: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2a8d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8d4c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a8d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a8d50: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8d54: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x2a8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8d58: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a8d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8d60: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a8d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a8d64: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8d68: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x2a8d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8d6c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2a8d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8d74: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a8d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a8d78: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8d7c: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x2a8d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8d80: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2a8d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8d84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8d88: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a8d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a8d8c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a8d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a8d90: 0xc104d24  jal         func_413490
    ctx->pc = 0x2A8D90u;
    SET_GPR_U32(ctx, 31, 0x2A8D98u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2A8D90u, 0x2A8D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D98u;
label_2a8d98:
    // 0x2a8d98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a8d98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a8d9c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2A8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A8DA4u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2A8D9Cu, 0x2A8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DA4u;
label_2a8da4:
    // 0x2a8da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8da8: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2A8DA8u;
    SET_GPR_U32(ctx, 31, 0x2A8DB0u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2A8DA8u, 0x2A8DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DB0u;
label_2a8db0:
    // 0x2a8db0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8db4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2A8DB4u;
    SET_GPR_U32(ctx, 31, 0x2A8DBCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2A8DB4u, 0x2A8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DBCu;
label_2a8dbc:
    // 0x2a8dbc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2a8dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2a8dc0: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2a8dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8dc4: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2a8dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2a8dc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a8dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dcc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A8DCCu;
    {
        const bool branch_taken_0x2a8dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8dcc) {
            ctx->pc = 0x2A8E08u;
            goto label_2a8e08;
        }
    }
    ctx->pc = 0x2A8DD4u;
label_2a8dd4:
    // 0x2a8dd4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2a8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a8dd8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a8ddc: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x2a8ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8de0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2a8de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8de4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8de8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8DE8u;
    {
        const bool branch_taken_0x2a8de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8de8) {
            ctx->pc = 0x2A8E04u;
            goto label_2a8e04;
        }
    }
    ctx->pc = 0x2A8DF0u;
    // 0x2a8df0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2a8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a8df4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a8df8: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x2a8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8dfc: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2a8dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2a8e00: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2a8e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e04:
    // 0x2a8e04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a8e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a8e08:
    // 0x2a8e08: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x2a8e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a8e0c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A8E0Cu;
    {
        const bool branch_taken_0x2a8e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e0c) {
            ctx->pc = 0x2A8DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8dd4;
        }
    }
    ctx->pc = 0x2A8E14u;
    // 0x2a8e14: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2a8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2a8e18: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a8e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a8e20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a8e24: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2a8e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a8e28: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x2a8e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2a8e2c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A8E2Cu;
    SET_GPR_U32(ctx, 31, 0x2A8E34u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A8E2Cu, 0x2A8E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E34u;
label_2a8e34:
    // 0x2a8e34: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2a8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e38: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a8e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8e40: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a8e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a8e44: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2a8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e48: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8e50: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a8e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a8e54: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2a8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e58: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a8e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8e60: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a8e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a8e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8e68: 0x0  nop
    ctx->pc = 0x2a8e68u;
    // NOP
    // 0x2a8e6c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a8e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a8e70: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8e74: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2a8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2a8e78: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2a8e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a8e7c: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2A8E7Cu;
    SET_GPR_U32(ctx, 31, 0x2A8E84u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2A8E7Cu, 0x2A8E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E84u;
label_2a8e84:
    // 0x2a8e84: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8e88: 0xc4430094  lwc1        $f3, 0x94($v0)
    ctx->pc = 0x2a8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8e8c: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x2a8e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8e90: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8e94: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2a8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e98: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x2a8e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a8e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ea4: 0x0  nop
    ctx->pc = 0x2a8ea4u;
    // NOP
    // 0x2a8ea8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a8ea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a8eac: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x2a8eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2a8eb0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8eb4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2a8eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2a8eb8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8ebc: 0xc4430098  lwc1        $f3, 0x98($v0)
    ctx->pc = 0x2a8ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8ec0: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x2a8ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8ec4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8ec8: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2a8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ecc: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x2a8eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ed0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a8ed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8ed4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ed8: 0x0  nop
    ctx->pc = 0x2a8ed8u;
    // NOP
    // 0x2a8edc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a8edcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a8ee0: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x2a8ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2a8ee4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8ee8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2a8ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2a8eec: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8ef0: 0xc4430090  lwc1        $f3, 0x90($v0)
    ctx->pc = 0x2a8ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8ef4: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x2a8ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8ef8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8efc: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2a8efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f00: 0xc4400094  lwc1        $f0, 0x94($v0)
    ctx->pc = 0x2a8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a8f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8f0c: 0x0  nop
    ctx->pc = 0x2a8f0cu;
    // NOP
    // 0x2a8f10: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a8f10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a8f14: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x2a8f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2a8f18: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f1c: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2a8f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2a8f20: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f24: 0xc4440098  lwc1        $f4, 0x98($v0)
    ctx->pc = 0x2a8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8f28: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f2c: 0xc4430074  lwc1        $f3, 0x74($v0)
    ctx->pc = 0x2a8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8f30: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f34: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f38: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x2a8f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f3c: 0xc4420078  lwc1        $f2, 0x78($v0)
    ctx->pc = 0x2a8f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8f40: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2a8f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8f44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8f48: 0x0  nop
    ctx->pc = 0x2a8f48u;
    // NOP
    // 0x2a8f4c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a8f4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a8f50: 0x4603201d  msub.s      $f0, $f4, $f3
    ctx->pc = 0x2a8f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2a8f54: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a8f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a8f58: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f5c: 0xc4430090  lwc1        $f3, 0x90($v0)
    ctx->pc = 0x2a8f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8f60: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f64: 0xc4420078  lwc1        $f2, 0x78($v0)
    ctx->pc = 0x2a8f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8f68: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f6c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f70: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x2a8f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f74: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2a8f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a8f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8f7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8f80: 0x0  nop
    ctx->pc = 0x2a8f80u;
    // NOP
    // 0x2a8f84: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a8f84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a8f88: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2a8f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2a8f8c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a8f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a8f90: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f94: 0xc4440094  lwc1        $f4, 0x94($v0)
    ctx->pc = 0x2a8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8f98: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8f9c: 0xc4430070  lwc1        $f3, 0x70($v0)
    ctx->pc = 0x2a8f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8fa0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8fa4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8fa8: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x2a8fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8fac: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2a8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fb0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2a8fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8fb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a8fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8fb8: 0x0  nop
    ctx->pc = 0x2a8fb8u;
    // NOP
    // 0x2a8fbc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2a8fbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x2a8fc0: 0x4603201d  msub.s      $f0, $f4, $f3
    ctx->pc = 0x2a8fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2a8fc4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a8fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a8fc8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8fcc: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x2a8fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2a8fd0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2a8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a8fd4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A8FD4u;
    SET_GPR_U32(ctx, 31, 0x2A8FDCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A8FD4u, 0x2A8FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FDCu;
label_2a8fdc:
    // 0x2a8fdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8fe0: 0xc1030b6  jal         func_40C2D8
    ctx->pc = 0x2A8FE0u;
    SET_GPR_U32(ctx, 31, 0x2A8FE8u);
    ctx->pc = 0x40C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2D8u, 0x2A8FE0u, 0x2A8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FE8u;
label_2a8fe8:
    // 0x2a8fe8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8fec: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x2a8fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x2a8ff0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a8ff4: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2a8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2a8ff8: 0xc091018  jal         func_244060
    ctx->pc = 0x2A8FF8u;
    SET_GPR_U32(ctx, 31, 0x2A9000u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A8FF8u, 0x2A9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9000u;
label_2a9000:
    // 0x2a9000: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9004: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9008: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x2a9008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2a900c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2a900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a9010: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x2a9010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2a9014: 0xc1030fe  jal         func_40C3F8
    ctx->pc = 0x2A9014u;
    SET_GPR_U32(ctx, 31, 0x2A901Cu);
    ctx->pc = 0x40C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C3F8u, 0x2A9014u, 0x2A901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A901Cu;
label_2a901c:
    // 0x2a901c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a9020: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a9020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a9024: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A9024u;
    SET_GPR_U32(ctx, 31, 0x2A902Cu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A9024u, 0x2A902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A902Cu;
label_2a902c:
    // 0x2a902c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9030: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2a9030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2a9034: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a9034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9038: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a9038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a903c: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A903Cu;
    SET_GPR_U32(ctx, 31, 0x2A9044u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A903Cu, 0x2A9044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9044u;
label_2a9044:
    // 0x2a9044: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2A9044u;
    {
        const bool branch_taken_0x2a9044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9044) {
            ctx->pc = 0x2A9268u;
            goto label_2a9268;
        }
    }
    ctx->pc = 0x2A904Cu;
label_2a904c:
    // 0x2a904c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a9050: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a9050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a9054: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A9054u;
    SET_GPR_U32(ctx, 31, 0x2A905Cu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A9054u, 0x2A905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A905Cu;
label_2a905c:
    // 0x2a905c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9060: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2a9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9064: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a9064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a9068: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a9068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2a906c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2a906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2a9070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9074: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a9074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a9078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a907c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2a9080: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x2a9080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9084: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a9084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a908c: 0x0  nop
    ctx->pc = 0x2a908cu;
    // NOP
    // 0x2a9090: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a9090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9094: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9094u;
    {
        const bool branch_taken_0x2a9094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9094) {
            ctx->pc = 0x2A90BCu;
            goto label_2a90bc;
        }
    }
    ctx->pc = 0x2A909Cu;
    // 0x2a909c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a90a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a90a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a90a4: 0x0  nop
    ctx->pc = 0x2a90a4u;
    // NOP
    // 0x2a90a8: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a90a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2a90ac: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a90acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a90b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a90b4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A90B4u;
    SET_GPR_U32(ctx, 31, 0x2A90BCu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A90B4u, 0x2A90BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90BCu;
label_2a90bc:
    // 0x2a90bc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a90c0: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2a90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2a90c4: 0xc091018  jal         func_244060
    ctx->pc = 0x2A90C4u;
    SET_GPR_U32(ctx, 31, 0x2A90CCu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A90C4u, 0x2A90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90CCu;
label_2a90cc:
    // 0x2a90cc: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x2a90ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a90d0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a90d4: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x2a90d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2a90d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a90d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a90dc: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x2a90dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a90e0: 0xc102e3c  jal         func_40B8F0
    ctx->pc = 0x2A90E0u;
    SET_GPR_U32(ctx, 31, 0x2A90E8u);
    ctx->pc = 0x40B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40B8F0u, 0x2A90E0u, 0x2A90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90E8u;
label_2a90e8:
    // 0x2a90e8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a90ec: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2a90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2a90f0: 0xc091018  jal         func_244060
    ctx->pc = 0x2A90F0u;
    SET_GPR_U32(ctx, 31, 0x2A90F8u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A90F0u, 0x2A90F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90F8u;
label_2a90f8:
    // 0x2a90f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a90f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a90fc: 0xc106794  jal         func_419E50
    ctx->pc = 0x2A90FCu;
    SET_GPR_U32(ctx, 31, 0x2A9104u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x2A90FCu, 0x2A9104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9104u;
label_2a9104:
    // 0x2a9104: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a9104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9108: 0x906300f4  lbu         $v1, 0xF4($v1)
    ctx->pc = 0x2a9108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2a910c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2A910Cu;
    {
        const bool branch_taken_0x2a910c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a910c) {
            ctx->pc = 0x2A9148u;
            goto label_2a9148;
        }
    }
    ctx->pc = 0x2A9114u;
    // 0x2a9114: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a9114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9118: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a911c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a911cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a9120: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a9120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a9124: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x2a9124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2a9128: 0xc46c00f0  lwc1        $f12, 0xF0($v1)
    ctx->pc = 0x2a9128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a912c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a912cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9130: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2A9130u;
    SET_GPR_U32(ctx, 31, 0x2A9138u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2A9130u, 0x2A9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9138u;
label_2a9138:
    // 0x2a9138: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a913c: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2a913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2a9140: 0xc091084  jal         func_244210
    ctx->pc = 0x2A9140u;
    SET_GPR_U32(ctx, 31, 0x2A9148u);
    ctx->pc = 0x244210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244210u, 0x2A9140u, 0x2A9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9148u;
label_2a9148:
    // 0x2a9148: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a9148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a914c: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x2a914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2a9150: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2A9150u;
    {
        const bool branch_taken_0x2a9150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9150) {
            ctx->pc = 0x2A9268u;
            goto label_2a9268;
        }
    }
    ctx->pc = 0x2A9158u;
    // 0x2a9158: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a9158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a915c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2a915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2a9160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9164: 0xc091018  jal         func_244060
    ctx->pc = 0x2A9164u;
    SET_GPR_U32(ctx, 31, 0x2A916Cu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A9164u, 0x2A916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A916Cu;
label_2a916c:
    // 0x2a916c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a916cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9170: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x2a9170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a9174: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a9174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9178: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x2a9178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2a917c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9180: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x2a9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9184: 0xc102e3c  jal         func_40B8F0
    ctx->pc = 0x2A9184u;
    SET_GPR_U32(ctx, 31, 0x2A918Cu);
    ctx->pc = 0x40B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40B8F0u, 0x2A9184u, 0x2A918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A918Cu;
label_2a918c:
    // 0x2a918c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9190: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2a9190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9194: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x2a9194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2a9198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a919c: 0xc091018  jal         func_244060
    ctx->pc = 0x2A919Cu;
    SET_GPR_U32(ctx, 31, 0x2A91A4u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A919Cu, 0x2A91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91A4u;
label_2a91a4:
    // 0x2a91a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a91a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91a8: 0xc106794  jal         func_419E50
    ctx->pc = 0x2A91A8u;
    SET_GPR_U32(ctx, 31, 0x2A91B0u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x2A91A8u, 0x2A91B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91B0u;
label_2a91b0:
    // 0x2a91b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a91b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91b4: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2a91b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a91b8: 0x90a300f4  lbu         $v1, 0xF4($a1)
    ctx->pc = 0x2a91b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x2a91bc: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A91BCu;
    {
        const bool branch_taken_0x2a91bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a91bc) {
            ctx->pc = 0x2A9268u;
            goto label_2a9268;
        }
    }
    ctx->pc = 0x2A91C4u;
    // 0x2a91c4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a91c8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a91cc: 0xc48100f0  lwc1        $f1, 0xF0($a0)
    ctx->pc = 0x2a91ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a91d0: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x2a91d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
    // 0x2a91d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a91d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a91d8: 0x0  nop
    ctx->pc = 0x2a91d8u;
    // NOP
    // 0x2a91dc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a91dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a91e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a91e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a91e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a91e8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2a91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2a91ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a91ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91f0: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2A91F0u;
    SET_GPR_U32(ctx, 31, 0x2A91F8u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2A91F0u, 0x2A91F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91F8u;
label_2a91f8:
    // 0x2a91f8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a91f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a91fc: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x2a91fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2a9200: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a9200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9204: 0xc091084  jal         func_244210
    ctx->pc = 0x2A9204u;
    SET_GPR_U32(ctx, 31, 0x2A920Cu);
    ctx->pc = 0x244210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244210u, 0x2A9204u, 0x2A920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A920Cu;
label_2a920c:
    // 0x2a920c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A920Cu;
    {
        const bool branch_taken_0x2a920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a920c) {
            ctx->pc = 0x2A9268u;
            goto label_2a9268;
        }
    }
    ctx->pc = 0x2A9214u;
label_2a9214:
    // 0x2a9214: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a9214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9218: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x2a9218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2a921c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A921Cu;
    {
        const bool branch_taken_0x2a921c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a921c) {
            ctx->pc = 0x2A9234u;
            goto label_2a9234;
        }
    }
    ctx->pc = 0x2A9224u;
    // 0x2a9224: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2a9224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9228: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x2a9228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2a922c: 0xc1030e6  jal         func_40C398
    ctx->pc = 0x2A922Cu;
    SET_GPR_U32(ctx, 31, 0x2A9234u);
    ctx->pc = 0x40C398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C398u, 0x2A922Cu, 0x2A9234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9234u;
label_2a9234:
    // 0x2a9234: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a9234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9238: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a923c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A923Cu;
    {
        const bool branch_taken_0x2a923c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a923c) {
            ctx->pc = 0x2A9254u;
            goto label_2a9254;
        }
    }
    ctx->pc = 0x2A9244u;
    // 0x2a9244: 0x8fb00170  lw          $s0, 0x170($sp)
    ctx->pc = 0x2a9244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9248: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2a9248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a924c: 0xc1030e6  jal         func_40C398
    ctx->pc = 0x2A924Cu;
    SET_GPR_U32(ctx, 31, 0x2A9254u);
    ctx->pc = 0x40C398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C398u, 0x2A924Cu, 0x2A9254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9254u;
label_2a9254:
    // 0x2a9254: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a9254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a9258: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a925c: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A925Cu;
    SET_GPR_U32(ctx, 31, 0x2A9264u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A925Cu, 0x2A9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9264u;
label_2a9264:
    // 0x2a9264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9268:
    // 0x2a9268: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a9268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a926c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a926cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a927c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a927cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9284: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x2a9284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2a9288: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9290u;
}
