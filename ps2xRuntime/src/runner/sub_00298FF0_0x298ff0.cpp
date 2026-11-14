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

// Function: sub_00298FF0
// Address: 0x298ff0 - 0x299210
void sub_00298FF0_0x298ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298FF0_0x298ff0");
#endif

    switch (ctx->pc) {
        case 0x29900cu: goto label_29900c;
        case 0x29909cu: goto label_29909c;
        case 0x2990bcu: goto label_2990bc;
        case 0x2990ecu: goto label_2990ec;
        case 0x29912cu: goto label_29912c;
        case 0x299150u: goto label_299150;
        case 0x29919cu: goto label_29919c;
        case 0x2991e4u: goto label_2991e4;
        default: break;
    }

    ctx->pc = 0x298ff0u;

    // 0x298ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298ffc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x298ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299000: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x299000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x299004: 0xc091174  jal         func_2445D0
    ctx->pc = 0x299004u;
    SET_GPR_U32(ctx, 31, 0x29900Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x299004u, 0x29900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29900Cu;
label_29900c:
    // 0x29900c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29900cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x299010: 0x24636110  addiu       $v1, $v1, 0x6110
    ctx->pc = 0x299010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24848));
    // 0x299014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x299018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29901c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299020: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x299020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x299024: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x299028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29902c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299030: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x299030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x299034: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x299034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x299038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29903c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299040: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x299040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x299044: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29904c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29904cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299050: 0x3e00008  jr          $ra
    ctx->pc = 0x299050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299058u;
    // 0x299058: 0x0  nop
    ctx->pc = 0x299058u;
    // NOP
    // 0x29905c: 0x0  nop
    ctx->pc = 0x29905cu;
    // NOP
    // 0x299060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29906c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29906cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x299070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299074: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x299074u;
    {
        const bool branch_taken_0x299074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299074) {
            ctx->pc = 0x2990BCu;
            goto label_2990bc;
        }
    }
    ctx->pc = 0x29907Cu;
    // 0x29907c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x299080: 0x24636110  addiu       $v1, $v1, 0x6110
    ctx->pc = 0x299080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24848));
    // 0x299084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x299088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29908c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299094: 0xc091188  jal         func_244620
    ctx->pc = 0x299094u;
    SET_GPR_U32(ctx, 31, 0x29909Cu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x299094u, 0x29909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29909Cu;
label_29909c:
    // 0x29909c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x29909cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2990a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2990a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2990a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2990a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2990a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2990A8u;
    {
        const bool branch_taken_0x2990a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2990a8) {
            ctx->pc = 0x2990BCu;
            goto label_2990bc;
        }
    }
    ctx->pc = 0x2990B0u;
    // 0x2990b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2990b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2990b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2990B4u;
    SET_GPR_U32(ctx, 31, 0x2990BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2990B4u, 0x2990BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990BCu;
label_2990bc:
    // 0x2990bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2990bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2990c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2990c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2990c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2990c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2990c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2990C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2990C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2990D0u;
    // 0x2990d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2990d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2990d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2990d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2990d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2990d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2990dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2990dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2990e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2990e4: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2990E4u;
    SET_GPR_U32(ctx, 31, 0x2990ECu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2990E4u, 0x2990ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990ECu;
label_2990ec:
    // 0x2990ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2990ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2990f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2990f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2990f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2990f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2990f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2990fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2990fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299100: 0x3e00008  jr          $ra
    ctx->pc = 0x299100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299108u;
    // 0x299108: 0x0  nop
    ctx->pc = 0x299108u;
    // NOP
    // 0x29910c: 0x0  nop
    ctx->pc = 0x29910cu;
    // NOP
    // 0x299110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29911c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x299120: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x299120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299124: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x299124u;
    SET_GPR_U32(ctx, 31, 0x29912Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x299124u, 0x29912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29912Cu;
label_29912c:
    // 0x29912c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29912cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299130: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299134: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x299134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x299138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299138u;
    {
        const bool branch_taken_0x299138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299138) {
            ctx->pc = 0x299150u;
            goto label_299150;
        }
    }
    ctx->pc = 0x299140u;
    // 0x299140: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299144: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x299144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x299148: 0xc0e362e  jal         func_38D8B8
    ctx->pc = 0x299148u;
    SET_GPR_U32(ctx, 31, 0x299150u);
    ctx->pc = 0x38D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D8B8u, 0x299148u, 0x299150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299150u;
label_299150:
    // 0x299150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29915c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29915cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299160: 0x3e00008  jr          $ra
    ctx->pc = 0x299160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299168u;
    // 0x299168: 0x0  nop
    ctx->pc = 0x299168u;
    // NOP
    // 0x29916c: 0x0  nop
    ctx->pc = 0x29916cu;
    // NOP
    // 0x299170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x299174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x299178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x299178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29917c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299184: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x299184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x299188: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x299188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x29918c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29918cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299190: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x299190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299194: 0xc0911dc  jal         func_244770
    ctx->pc = 0x299194u;
    SET_GPR_U32(ctx, 31, 0x29919Cu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x299194u, 0x29919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29919Cu;
label_29919c:
    // 0x29919c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x29919cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2991a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2991a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2991a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2991a8: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2991A8u;
    {
        const bool branch_taken_0x2991a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2991a8) {
            ctx->pc = 0x2991C0u;
            goto label_2991c0;
        }
    }
    ctx->pc = 0x2991B0u;
    // 0x2991b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2991b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2991b4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2991b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2991b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2991B8u;
    {
        const bool branch_taken_0x2991b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2991b8) {
            ctx->pc = 0x2991C8u;
            goto label_2991c8;
        }
    }
    ctx->pc = 0x2991C0u;
label_2991c0:
    // 0x2991c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2991c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2991c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2991c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2991c8:
    // 0x2991c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2991c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991cc: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2991CCu;
    {
        const bool branch_taken_0x2991cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x2991cc) {
            ctx->pc = 0x2991E4u;
            goto label_2991e4;
        }
    }
    ctx->pc = 0x2991D4u;
    // 0x2991d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2991d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2991d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2991d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991dc: 0xc0a6510  jal         func_299440
    ctx->pc = 0x2991DCu;
    SET_GPR_U32(ctx, 31, 0x2991E4u);
    ctx->pc = 0x299440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299440u, 0x2991DCu, 0x2991E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2991E4u;
label_2991e4:
    // 0x2991e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2991e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2991e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2991ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2991ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2991f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2991f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2991f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2991f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2991f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2991f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2991fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2991FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2991FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299204u;
    // 0x299204: 0x0  nop
    ctx->pc = 0x299204u;
    // NOP
    // 0x299208: 0x0  nop
    ctx->pc = 0x299208u;
    // NOP
    // 0x29920c: 0x0  nop
    ctx->pc = 0x29920cu;
    // NOP
    ctx->pc = 0x299210u;
}
