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

// Function: sub_0025D230
// Address: 0x25d230 - 0x25d410
void sub_0025D230_0x25d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D230_0x25d230");
#endif

    switch (ctx->pc) {
        case 0x25d24cu: goto label_25d24c;
        case 0x25d2b0u: goto label_25d2b0;
        case 0x25d2c0u: goto label_25d2c0;
        case 0x25d2e0u: goto label_25d2e0;
        case 0x25d31cu: goto label_25d31c;
        case 0x25d35cu: goto label_25d35c;
        case 0x25d3acu: goto label_25d3ac;
        case 0x25d3ecu: goto label_25d3ec;
        default: break;
    }

    ctx->pc = 0x25d230u;

    // 0x25d230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d23c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25d240: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d244: 0xc042290  jal         func_108A40
    ctx->pc = 0x25D244u;
    SET_GPR_U32(ctx, 31, 0x25D24Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x25D244u, 0x25D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D24Cu;
label_25d24c:
    // 0x25d24c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25d250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25d254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d25c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d260: 0x3e00008  jr          $ra
    ctx->pc = 0x25D260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D268u;
    // 0x25d268: 0x0  nop
    ctx->pc = 0x25d268u;
    // NOP
    // 0x25d26c: 0x0  nop
    ctx->pc = 0x25d26cu;
    // NOP
    // 0x25d270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d27c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25d27cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25d280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d284: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25D284u;
    {
        const bool branch_taken_0x25d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d284) {
            ctx->pc = 0x25D2E0u;
            goto label_25d2e0;
        }
    }
    ctx->pc = 0x25D28Cu;
    // 0x25d28c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25d290: 0x24635960  addiu       $v1, $v1, 0x5960
    ctx->pc = 0x25d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22880));
    // 0x25d294: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d298: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d29c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d2a0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d2a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d2a8: 0xc0420a0  jal         func_108280
    ctx->pc = 0x25D2A8u;
    SET_GPR_U32(ctx, 31, 0x25D2B0u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x25D2A8u, 0x25D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2B0u;
label_25d2b0:
    // 0x25d2b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2b8: 0xc091188  jal         func_244620
    ctx->pc = 0x25D2B8u;
    SET_GPR_U32(ctx, 31, 0x25D2C0u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x25D2B8u, 0x25D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2C0u;
label_25d2c0:
    // 0x25d2c0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25d2c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d2c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25d2c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25d2c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25d2cc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D2CCu;
    {
        const bool branch_taken_0x25d2cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25d2cc) {
            ctx->pc = 0x25D2E0u;
            goto label_25d2e0;
        }
    }
    ctx->pc = 0x25D2D4u;
    // 0x25d2d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d2d8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25D2D8u;
    SET_GPR_U32(ctx, 31, 0x25D2E0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25D2D8u, 0x25D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2E0u;
label_25d2e0:
    // 0x25d2e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d2e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25D2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D2F4u;
    // 0x25d2f4: 0x0  nop
    ctx->pc = 0x25d2f4u;
    // NOP
    // 0x25d2f8: 0x0  nop
    ctx->pc = 0x25d2f8u;
    // NOP
    // 0x25d2fc: 0x0  nop
    ctx->pc = 0x25d2fcu;
    // NOP
    // 0x25d300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d30c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25d310: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25d310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d314: 0xc0911a4  jal         func_244690
    ctx->pc = 0x25D314u;
    SET_GPR_U32(ctx, 31, 0x25D31Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x25D314u, 0x25D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D31Cu;
label_25d31c:
    // 0x25d31c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x25d31cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d32c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d32cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d330: 0x3e00008  jr          $ra
    ctx->pc = 0x25D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D338u;
    // 0x25d338: 0x0  nop
    ctx->pc = 0x25d338u;
    // NOP
    // 0x25d33c: 0x0  nop
    ctx->pc = 0x25d33cu;
    // NOP
    // 0x25d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d34c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25d350: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d354: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x25D354u;
    SET_GPR_U32(ctx, 31, 0x25D35Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x25D354u, 0x25D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D35Cu;
label_25d35c:
    // 0x25d35c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x25d35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d36c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d370: 0x3e00008  jr          $ra
    ctx->pc = 0x25D370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D378u;
    // 0x25d378: 0x0  nop
    ctx->pc = 0x25d378u;
    // NOP
    // 0x25d37c: 0x0  nop
    ctx->pc = 0x25d37cu;
    // NOP
    // 0x25d380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25d384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25d384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25d388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d394: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x25d394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x25d398: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x25d398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x25d39c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d3a0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d3a4: 0xc0911dc  jal         func_244770
    ctx->pc = 0x25D3A4u;
    SET_GPR_U32(ctx, 31, 0x25D3ACu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x25D3A4u, 0x25D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3ACu;
label_25d3ac:
    // 0x25d3ac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25d3acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d3b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d3b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25d3b8: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D3B8u;
    {
        const bool branch_taken_0x25d3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d3b8) {
            ctx->pc = 0x25D3D0u;
            goto label_25d3d0;
        }
    }
    ctx->pc = 0x25D3C0u;
    // 0x25d3c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d3c4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x25d3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25d3c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D3C8u;
    {
        const bool branch_taken_0x25d3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d3c8) {
            ctx->pc = 0x25D3D8u;
            goto label_25d3d8;
        }
    }
    ctx->pc = 0x25D3D0u;
label_25d3d0:
    // 0x25d3d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d3d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25d3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25d3d8:
    // 0x25d3d8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25d3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d3e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3e4: 0xc097b48  jal         func_25ED20
    ctx->pc = 0x25D3E4u;
    SET_GPR_U32(ctx, 31, 0x25D3ECu);
    ctx->pc = 0x25ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ED20u, 0x25D3E4u, 0x25D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3ECu;
label_25d3ec:
    // 0x25d3ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25d3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25d3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d3f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d400: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25d404: 0x3e00008  jr          $ra
    ctx->pc = 0x25D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D40Cu;
    // 0x25d40c: 0x0  nop
    ctx->pc = 0x25d40cu;
    // NOP
    ctx->pc = 0x25d410u;
}
