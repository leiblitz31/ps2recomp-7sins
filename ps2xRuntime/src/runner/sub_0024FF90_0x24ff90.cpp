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

// Function: sub_0024FF90
// Address: 0x24ff90 - 0x2505e0
void sub_0024FF90_0x24ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FF90_0x24ff90");
#endif

    switch (ctx->pc) {
        case 0x24ffacu: goto label_24ffac;
        case 0x24ffecu: goto label_24ffec;
        case 0x25005cu: goto label_25005c;
        case 0x25006cu: goto label_25006c;
        case 0x25008cu: goto label_25008c;
        case 0x2500bcu: goto label_2500bc;
        case 0x2500fcu: goto label_2500fc;
        case 0x250164u: goto label_250164;
        case 0x2501c4u: goto label_2501c4;
        case 0x2501e4u: goto label_2501e4;
        case 0x2501f8u: goto label_2501f8;
        case 0x250210u: goto label_250210;
        case 0x250224u: goto label_250224;
        case 0x250238u: goto label_250238;
        case 0x250250u: goto label_250250;
        case 0x250268u: goto label_250268;
        case 0x250280u: goto label_250280;
        case 0x250298u: goto label_250298;
        case 0x2502b4u: goto label_2502b4;
        case 0x2502c0u: goto label_2502c0;
        case 0x2502d4u: goto label_2502d4;
        case 0x2502e4u: goto label_2502e4;
        case 0x2502f8u: goto label_2502f8;
        case 0x250328u: goto label_250328;
        case 0x250340u: goto label_250340;
        case 0x250358u: goto label_250358;
        case 0x2505a4u: goto label_2505a4;
        default: break;
    }

    ctx->pc = 0x24ff90u;

    // 0x24ff90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ff94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ff98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24ff9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ffa0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x24ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x24ffa4: 0xc091174  jal         func_2445D0
    ctx->pc = 0x24FFA4u;
    SET_GPR_U32(ctx, 31, 0x24FFACu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x24FFA4u, 0x24FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFACu;
label_24ffac:
    // 0x24ffac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x24ffb0: 0x24635850  addiu       $v1, $v1, 0x5850
    ctx->pc = 0x24ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22608));
    // 0x24ffb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ffb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24ffbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ffc0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x24ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x24ffc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ffc8: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x24ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x24ffcc: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x24ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x24ffd0: 0x24a56d20  addiu       $a1, $a1, 0x6D20
    ctx->pc = 0x24ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27936));
    // 0x24ffd4: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x24ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x24ffd8: 0x24c60b50  addiu       $a2, $a2, 0xB50
    ctx->pc = 0x24ffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2896));
    // 0x24ffdc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x24ffdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24ffe0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24ffe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ffe4: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x24FFE4u;
    SET_GPR_U32(ctx, 31, 0x24FFECu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x24FFE4u, 0x24FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFECu;
label_24ffec:
    // 0x24ffec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fff0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x24fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x24fff4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fffc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24fffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x250000: 0x3e00008  jr          $ra
    ctx->pc = 0x250000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250008u;
    // 0x250008: 0x0  nop
    ctx->pc = 0x250008u;
    // NOP
    // 0x25000c: 0x0  nop
    ctx->pc = 0x25000cu;
    // NOP
    // 0x250010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25001c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25001cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x250020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250024: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x250024u;
    {
        const bool branch_taken_0x250024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250024) {
            ctx->pc = 0x25008Cu;
            goto label_25008c;
        }
    }
    ctx->pc = 0x25002Cu;
    // 0x25002c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25002cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x250030: 0x24635850  addiu       $v1, $v1, 0x5850
    ctx->pc = 0x250030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22608));
    // 0x250034: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250038: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x250038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25003c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250040: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x250040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x250044: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x250044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x250048: 0x24a50b50  addiu       $a1, $a1, 0xB50
    ctx->pc = 0x250048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2896));
    // 0x25004c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x25004cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x250050: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x250050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250054: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x250054u;
    SET_GPR_U32(ctx, 31, 0x25005Cu);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x250054u, 0x25005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25005Cu;
label_25005c:
    // 0x25005c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250064: 0xc091188  jal         func_244620
    ctx->pc = 0x250064u;
    SET_GPR_U32(ctx, 31, 0x25006Cu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x250064u, 0x25006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25006Cu;
label_25006c:
    // 0x25006c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25006cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250070: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x250070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x250074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x250074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x250078: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x250078u;
    {
        const bool branch_taken_0x250078 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x250078) {
            ctx->pc = 0x25008Cu;
            goto label_25008c;
        }
    }
    ctx->pc = 0x250080u;
    // 0x250080: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250084: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x250084u;
    SET_GPR_U32(ctx, 31, 0x25008Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x250084u, 0x25008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25008Cu;
label_25008c:
    // 0x25008c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250094: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250098: 0x3e00008  jr          $ra
    ctx->pc = 0x250098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2500A0u;
    // 0x2500a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2500a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2500a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2500a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2500a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2500a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2500ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2500acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2500b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2500b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2500b4: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2500B4u;
    SET_GPR_U32(ctx, 31, 0x2500BCu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2500B4u, 0x2500BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2500BCu;
label_2500bc:
    // 0x2500bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2500bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2500c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2500c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2500c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2500c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2500c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2500cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2500ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2500d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2500D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2500D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2500D8u;
    // 0x2500d8: 0x0  nop
    ctx->pc = 0x2500d8u;
    // NOP
    // 0x2500dc: 0x0  nop
    ctx->pc = 0x2500dcu;
    // NOP
    // 0x2500e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2500e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2500e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2500e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2500e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2500e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2500ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2500ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2500f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2500f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2500f4: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2500F4u;
    SET_GPR_U32(ctx, 31, 0x2500FCu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2500F4u, 0x2500FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2500FCu;
label_2500fc:
    // 0x2500fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2500fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x250100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x250100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25010c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25010cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250110: 0x3e00008  jr          $ra
    ctx->pc = 0x250110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250118u;
    // 0x250118: 0x0  nop
    ctx->pc = 0x250118u;
    // NOP
    // 0x25011c: 0x0  nop
    ctx->pc = 0x25011cu;
    // NOP
    // 0x250120: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x250120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x250124: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x250124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x250128: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x250128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25012c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x250130: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x250130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x250134: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x250134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x250138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x250138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25013c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x250140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x250140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x250144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x250144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25014c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x25014cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x250150: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x250150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x250154: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x250154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x250158: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x250158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25015c: 0xc0911dc  jal         func_244770
    ctx->pc = 0x25015Cu;
    SET_GPR_U32(ctx, 31, 0x250164u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x25015Cu, 0x250164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250164u;
label_250164:
    // 0x250164: 0xa3a200cf  sb          $v0, 0xCF($sp)
    ctx->pc = 0x250164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 2));
    // 0x250168: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x250168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25016c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x250170: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250170u;
    {
        const bool branch_taken_0x250170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x250170) {
            ctx->pc = 0x250188u;
            goto label_250188;
        }
    }
    ctx->pc = 0x250178u;
    // 0x250178: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x250178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25017c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x25017cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x250180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250180u;
    {
        const bool branch_taken_0x250180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250180) {
            ctx->pc = 0x250190u;
            goto label_250190;
        }
    }
    ctx->pc = 0x250188u;
label_250188:
    // 0x250188: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x250188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25018c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x25018cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_250190:
    // 0x250190: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x250190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250198: 0xa3a200ce  sb          $v0, 0xCE($sp)
    ctx->pc = 0x250198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 206), (uint8_t)GPR_U32(ctx, 2));
    // 0x25019c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x25019cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2501a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2501a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2501a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2501a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501a8: 0x10100036  beq         $zero, $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2501A8u;
    {
        const bool branch_taken_0x2501a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2501a8) {
            ctx->pc = 0x250284u;
            goto label_250284;
        }
    }
    ctx->pc = 0x2501B0u;
    // 0x2501b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2501b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501b4: 0x2405040f  addiu       $a1, $zero, 0x40F
    ctx->pc = 0x2501b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x2501b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2501b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501bc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2501BCu;
    SET_GPR_U32(ctx, 31, 0x2501C4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2501BCu, 0x2501C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501C4u;
label_2501c4:
    // 0x2501c4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2501c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2501c8: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x2501c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x2501cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2501ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501d0: 0x24050410  addiu       $a1, $zero, 0x410
    ctx->pc = 0x2501d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2501d4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2501d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2501d8: 0x24c6be30  addiu       $a2, $a2, -0x41D0
    ctx->pc = 0x2501d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950448));
    // 0x2501dc: 0xc041a50  jal         func_106940
    ctx->pc = 0x2501DCu;
    SET_GPR_U32(ctx, 31, 0x2501E4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2501DCu, 0x2501E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501E4u;
label_2501e4:
    // 0x2501e4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2501e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2501e8: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x2501e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x2501ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2501ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501f0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2501F0u;
    SET_GPR_U32(ctx, 31, 0x2501F8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2501F0u, 0x2501F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501F8u;
label_2501f8:
    // 0x2501f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2501f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501fc: 0x24050411  addiu       $a1, $zero, 0x411
    ctx->pc = 0x2501fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x250200: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x250200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x250204: 0x24c6be40  addiu       $a2, $a2, -0x41C0
    ctx->pc = 0x250204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950464));
    // 0x250208: 0xc041a50  jal         func_106940
    ctx->pc = 0x250208u;
    SET_GPR_U32(ctx, 31, 0x250210u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x250208u, 0x250210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250210u;
label_250210:
    // 0x250210: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x250210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x250214: 0x24640044  addiu       $a0, $v1, 0x44
    ctx->pc = 0x250214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x250218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x250218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25021c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x25021Cu;
    SET_GPR_U32(ctx, 31, 0x250224u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x25021Cu, 0x250224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250224u;
label_250224:
    // 0x250224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250228: 0x240503fa  addiu       $a1, $zero, 0x3FA
    ctx->pc = 0x250228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
    // 0x25022c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25022cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250230: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x250230u;
    SET_GPR_U32(ctx, 31, 0x250238u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x250230u, 0x250238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250238u;
label_250238:
    // 0x250238: 0xa3a200ce  sb          $v0, 0xCE($sp)
    ctx->pc = 0x250238u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 206), (uint8_t)GPR_U32(ctx, 2));
    // 0x25023c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250240: 0x240503fb  addiu       $a1, $zero, 0x3FB
    ctx->pc = 0x250240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
    // 0x250244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x250244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250248: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x250248u;
    SET_GPR_U32(ctx, 31, 0x250250u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x250248u, 0x250250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250250u;
label_250250:
    // 0x250250: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x250250u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250258: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x250258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x25025c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250260: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x250260u;
    SET_GPR_U32(ctx, 31, 0x250268u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x250260u, 0x250268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250268u;
label_250268:
    // 0x250268: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x250268u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25026c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250270: 0x240503fd  addiu       $a1, $zero, 0x3FD
    ctx->pc = 0x250270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
    // 0x250274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250278: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x250278u;
    SET_GPR_U32(ctx, 31, 0x250280u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x250278u, 0x250280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250280u;
label_250280:
    // 0x250280: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x250280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250284:
    // 0x250284: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x250284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x250288: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x250288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25028c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x250290: 0xc085538  jal         func_2154E0
    ctx->pc = 0x250290u;
    SET_GPR_U32(ctx, 31, 0x250298u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x250290u, 0x250298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250298u;
label_250298:
    // 0x250298: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x250298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25029c: 0x10130011  beq         $zero, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x25029Cu;
    {
        const bool branch_taken_0x25029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x25029c) {
            ctx->pc = 0x2502E4u;
            goto label_2502e4;
        }
    }
    ctx->pc = 0x2502A4u;
    // 0x2502a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2502a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502a8: 0x93a500ce  lbu         $a1, 0xCE($sp)
    ctx->pc = 0x2502a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x2502ac: 0xc091020  jal         func_244080
    ctx->pc = 0x2502ACu;
    SET_GPR_U32(ctx, 31, 0x2502B4u);
    ctx->pc = 0x244080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244080u, 0x2502ACu, 0x2502B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502B4u;
label_2502b4:
    // 0x2502b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2502b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502b8: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x2502B8u;
    SET_GPR_U32(ctx, 31, 0x2502C0u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x2502B8u, 0x2502C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502C0u;
label_2502c0:
    // 0x2502c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2502c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502c4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2502c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502c8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2502c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502cc: 0xc094f14  jal         func_253C50
    ctx->pc = 0x2502CCu;
    SET_GPR_U32(ctx, 31, 0x2502D4u);
    ctx->pc = 0x253C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C50u, 0x2502CCu, 0x2502D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502D4u;
label_2502d4:
    // 0x2502d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2502d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2502d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502dc: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x2502DCu;
    SET_GPR_U32(ctx, 31, 0x2502E4u);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x2502DCu, 0x2502E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502E4u;
label_2502e4:
    // 0x2502e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2502e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2502e8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2502e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2502ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2502ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2502f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2502F0u;
    SET_GPR_U32(ctx, 31, 0x2502F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2502F0u, 0x2502F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502F8u;
label_2502f8:
    // 0x2502f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2502f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502fc: 0x101500a9  beq         $zero, $s5, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2502FCu;
    {
        const bool branch_taken_0x2502fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x2502fc) {
            ctx->pc = 0x2505A4u;
            goto label_2505a4;
        }
    }
    ctx->pc = 0x250304u;
    // 0x250304: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x250304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250308: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x250308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25030c: 0x1010000d  beq         $zero, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x25030Cu;
    {
        const bool branch_taken_0x25030c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x25030c) {
            ctx->pc = 0x250344u;
            goto label_250344;
        }
    }
    ctx->pc = 0x250314u;
    // 0x250314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250318: 0x240503fb  addiu       $a1, $zero, 0x3FB
    ctx->pc = 0x250318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
    // 0x25031c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25031cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250320: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x250320u;
    SET_GPR_U32(ctx, 31, 0x250328u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x250320u, 0x250328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250328u;
label_250328:
    // 0x250328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x250328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25032c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250330: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x250330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x250334: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x250334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250338: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x250338u;
    SET_GPR_U32(ctx, 31, 0x250340u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x250338u, 0x250340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250340u;
label_250340:
    // 0x250340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x250340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250344:
    // 0x250344: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x250348: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x250348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25034c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25034Cu;
    {
        const bool branch_taken_0x25034c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25034c) {
            ctx->pc = 0x250374u;
            goto label_250374;
        }
    }
    ctx->pc = 0x250354u;
    // 0x250354: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x250354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_250358:
    // 0x250358: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x250358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x25035c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x250360: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x250360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x250364: 0x0  nop
    ctx->pc = 0x250364u;
    // NOP
    // 0x250368: 0x0  nop
    ctx->pc = 0x250368u;
    // NOP
    // 0x25036c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25036Cu;
    {
        const bool branch_taken_0x25036c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25036c) {
            ctx->pc = 0x250358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250358;
        }
    }
    ctx->pc = 0x250374u;
label_250374:
    // 0x250374: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x250374u;
    {
        const bool branch_taken_0x250374 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x250374) {
            ctx->pc = 0x250390u;
            goto label_250390;
        }
    }
    ctx->pc = 0x25037Cu;
    // 0x25037c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x25037cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250380: 0x0  nop
    ctx->pc = 0x250380u;
    // NOP
    // 0x250384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x250388u;
    {
        const bool branch_taken_0x250388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250388) {
            ctx->pc = 0x2503ACu;
            goto label_2503ac;
        }
    }
    ctx->pc = 0x250390u;
label_250390:
    // 0x250390: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x250390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x250394: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x250394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x250398: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25039c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25039cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2503a0: 0x0  nop
    ctx->pc = 0x2503a0u;
    // NOP
    // 0x2503a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2503a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2503a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2503a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2503ac:
    // 0x2503ac: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2503acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2503b0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2503b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2503b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2503b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2503b8: 0x0  nop
    ctx->pc = 0x2503b8u;
    // NOP
    // 0x2503bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2503bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2503c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2503c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2503c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2503c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2503c8: 0x0  nop
    ctx->pc = 0x2503c8u;
    // NOP
    // 0x2503cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2503ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2503d0: 0x0  nop
    ctx->pc = 0x2503d0u;
    // NOP
    // 0x2503d4: 0x0  nop
    ctx->pc = 0x2503d4u;
    // NOP
    // 0x2503d8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2503d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2503dc: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2503DCu;
    {
        const bool branch_taken_0x2503dc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2503dc) {
            ctx->pc = 0x2503F8u;
            goto label_2503f8;
        }
    }
    ctx->pc = 0x2503E4u;
    // 0x2503e4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2503e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2503e8: 0x0  nop
    ctx->pc = 0x2503e8u;
    // NOP
    // 0x2503ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2503ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2503f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2503F0u;
    {
        const bool branch_taken_0x2503f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2503f0) {
            ctx->pc = 0x250414u;
            goto label_250414;
        }
    }
    ctx->pc = 0x2503F8u;
label_2503f8:
    // 0x2503f8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2503f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2503fc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2503fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x250400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x250404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x250404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250408: 0x0  nop
    ctx->pc = 0x250408u;
    // NOP
    // 0x25040c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25040cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250410: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x250410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_250414:
    // 0x250414: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x250414u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x250418: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x250418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x25041c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250420: 0x0  nop
    ctx->pc = 0x250420u;
    // NOP
    // 0x250424: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x250424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x250428: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x250428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x25042c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250430: 0x0  nop
    ctx->pc = 0x250430u;
    // NOP
    // 0x250434: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x250434u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x250438: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x250438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x25043c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x250440: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x250440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x250444: 0x2484be20  addiu       $a0, $a0, -0x41E0
    ctx->pc = 0x250444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950432));
    // 0x250448: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x250448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25044c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x25044cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EBE20u));
    // 0x250450: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x250450u;
    { uint32_t bits = FAST_READ32(0x4EBE28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250454: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x250454u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x250458: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x250458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x25045c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x25045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x250460: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x250460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250464: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x250464u;
    {
        const bool branch_taken_0x250464 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x250464) {
            ctx->pc = 0x250480u;
            goto label_250480;
        }
    }
    ctx->pc = 0x25046Cu;
    // 0x25046c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x25046cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250470: 0x0  nop
    ctx->pc = 0x250470u;
    // NOP
    // 0x250474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250478: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x250478u;
    {
        const bool branch_taken_0x250478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250478) {
            ctx->pc = 0x25049Cu;
            goto label_25049c;
        }
    }
    ctx->pc = 0x250480u;
label_250480:
    // 0x250480: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x250480u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x250484: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x250484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x250488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25048c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25048cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250490: 0x0  nop
    ctx->pc = 0x250490u;
    // NOP
    // 0x250494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250498: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x250498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25049c:
    // 0x25049c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25049cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2504a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2504a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2504a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2504a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2504a8: 0x0  nop
    ctx->pc = 0x2504a8u;
    // NOP
    // 0x2504ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2504acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2504b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2504b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2504b4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2504b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2504b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2504b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2504bc: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2504BCu;
    {
        const bool branch_taken_0x2504bc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2504bc) {
            ctx->pc = 0x2504D8u;
            goto label_2504d8;
        }
    }
    ctx->pc = 0x2504C4u;
    // 0x2504c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2504c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2504c8: 0x0  nop
    ctx->pc = 0x2504c8u;
    // NOP
    // 0x2504cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2504ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2504d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2504D0u;
    {
        const bool branch_taken_0x2504d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2504d0) {
            ctx->pc = 0x2504F4u;
            goto label_2504f4;
        }
    }
    ctx->pc = 0x2504D8u;
label_2504d8:
    // 0x2504d8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2504d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2504dc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2504dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2504e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2504e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2504e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2504e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2504e8: 0x0  nop
    ctx->pc = 0x2504e8u;
    // NOP
    // 0x2504ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2504ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2504f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2504f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2504f4:
    // 0x2504f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2504f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2504f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2504f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2504fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2504fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250500: 0x0  nop
    ctx->pc = 0x250500u;
    // NOP
    // 0x250504: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x250504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x250508: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x250508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x25050c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x250510: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x250510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x250514: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x250514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x250518: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x250518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25051c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25051Cu;
    {
        const bool branch_taken_0x25051c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25051c) {
            ctx->pc = 0x250580u;
            goto label_250580;
        }
    }
    ctx->pc = 0x250524u;
    // 0x250524: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x250524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x250528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25052c: 0x0  nop
    ctx->pc = 0x25052cu;
    // NOP
    // 0x250530: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x250530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x250534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250538: 0x0  nop
    ctx->pc = 0x250538u;
    // NOP
    // 0x25053c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x25053cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x250540: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x250544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250548: 0x0  nop
    ctx->pc = 0x250548u;
    // NOP
    // 0x25054c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x25054cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x250550: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x250550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x250554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250558: 0x0  nop
    ctx->pc = 0x250558u;
    // NOP
    // 0x25055c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x250560: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x250560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x250564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250568: 0x0  nop
    ctx->pc = 0x250568u;
    // NOP
    // 0x25056c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x25056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x250570: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x250570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x250574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250578: 0x0  nop
    ctx->pc = 0x250578u;
    // NOP
    // 0x25057c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x25057cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_250580:
    // 0x250580: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x250580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x250584: 0xc7809e9c  lwc1        $f0, -0x6164($gp)
    ctx->pc = 0x250584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250588: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x250588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25058c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250590: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x250590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x250594: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x250594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x250598: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x250598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x25059c: 0xc0a43e4  jal         func_290F90
    ctx->pc = 0x25059Cu;
    SET_GPR_U32(ctx, 31, 0x2505A4u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x25059Cu, 0x2505A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505A4u;
label_2505a4:
    // 0x2505a4: 0x93a200cf  lbu         $v0, 0xCF($sp)
    ctx->pc = 0x2505a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x2505a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2505a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2505ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2505acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2505b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2505b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2505b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2505b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2505b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2505b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2505bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2505bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2505c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2505c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2505c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2505c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2505c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2505c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2505cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2505ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2505d0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2505d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2505d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2505D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2505DCu;
    // 0x2505dc: 0x0  nop
    ctx->pc = 0x2505dcu;
    // NOP
    ctx->pc = 0x2505e0u;
}
