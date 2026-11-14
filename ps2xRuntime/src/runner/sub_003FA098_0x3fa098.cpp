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

// Function: sub_003FA098
// Address: 0x3fa098 - 0x3fa300
void sub_003FA098_0x3fa098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FA098_0x3fa098");
#endif

    switch (ctx->pc) {
        case 0x3fa0fcu: goto label_3fa0fc;
        case 0x3fa110u: goto label_3fa110;
        case 0x3fa11cu: goto label_3fa11c;
        case 0x3fa128u: goto label_3fa128;
        case 0x3fa134u: goto label_3fa134;
        case 0x3fa140u: goto label_3fa140;
        case 0x3fa14cu: goto label_3fa14c;
        case 0x3fa158u: goto label_3fa158;
        case 0x3fa168u: goto label_3fa168;
        case 0x3fa174u: goto label_3fa174;
        case 0x3fa17cu: goto label_3fa17c;
        case 0x3fa194u: goto label_3fa194;
        case 0x3fa1a0u: goto label_3fa1a0;
        case 0x3fa1a8u: goto label_3fa1a8;
        case 0x3fa1c0u: goto label_3fa1c0;
        case 0x3fa1ccu: goto label_3fa1cc;
        case 0x3fa1d4u: goto label_3fa1d4;
        case 0x3fa1ecu: goto label_3fa1ec;
        case 0x3fa1f8u: goto label_3fa1f8;
        case 0x3fa200u: goto label_3fa200;
        case 0x3fa218u: goto label_3fa218;
        case 0x3fa224u: goto label_3fa224;
        case 0x3fa22cu: goto label_3fa22c;
        case 0x3fa244u: goto label_3fa244;
        case 0x3fa250u: goto label_3fa250;
        case 0x3fa258u: goto label_3fa258;
        case 0x3fa270u: goto label_3fa270;
        case 0x3fa27cu: goto label_3fa27c;
        case 0x3fa284u: goto label_3fa284;
        case 0x3fa29cu: goto label_3fa29c;
        case 0x3fa2a8u: goto label_3fa2a8;
        case 0x3fa2b0u: goto label_3fa2b0;
        default: break;
    }

    ctx->pc = 0x3fa098u;

    // 0x3fa098: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3fa098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3fa09c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3fa09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3fa0a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3fa0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3fa0a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3fa0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa0a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fa0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3fa0ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3fa0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa0b0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3fa0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3fa0b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3fa0b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa0b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3fa0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3fa0bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3fa0bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa0c0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3fa0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3fa0c4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3fa0c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa0c8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3fa0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3fa0cc: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3fa0ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa0d0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3fa0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3fa0d4: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3fa0d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa0d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3fa0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3fa0dc: 0x1080007b  beqz        $a0, . + 4 + (0x7B << 2)
    ctx->pc = 0x3FA0DCu;
    {
        const bool branch_taken_0x3fa0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA0DCu;
        // 0x3fa0e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa0dc) {
            ctx->pc = 0x3FA2CCu;
            goto label_3fa2cc;
        }
    }
    ctx->pc = 0x3FA0E4u;
    // 0x3fa0e4: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
    ctx->pc = 0x3FA0E4u;
    {
        const bool branch_taken_0x3fa0e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA0E4u;
        // 0x3fa0e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa0e4) {
            ctx->pc = 0x3FA2D0u;
            goto label_3fa2d0;
        }
    }
    ctx->pc = 0x3FA0ECu;
    // 0x3fa0ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa0f0: 0xdc30f730  ld          $s0, -0x8D0($at)
    ctx->pc = 0x3fa0f0u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x5FF730u));
    // 0x3fa0f4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA0F4u;
    SET_GPR_U32(ctx, 31, 0x3FA0FCu);
    ctx->pc = 0x3FA0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA0F4u;
    // 0x3fa0f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA0F4u, 0x3FA0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA0FCu;
label_3fa0fc:
    // 0x3fa0fc: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x3fa0fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3fa100: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x3fa100u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x3fa104: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa108: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA108u;
    SET_GPR_U32(ctx, 31, 0x3FA110u);
    ctx->pc = 0x3FA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA108u;
    // 0x3fa10c: 0xe64000a8  swc1        $f0, 0xA8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA108u, 0x3FA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA110u;
label_3fa110:
    // 0x3fa110: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fa110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa114: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA114u;
    SET_GPR_U32(ctx, 31, 0x3FA11Cu);
    ctx->pc = 0x3FA118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA114u;
    // 0x3fa118: 0xe64000ac  swc1        $f0, 0xAC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA114u, 0x3FA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA11Cu;
label_3fa11c:
    // 0x3fa11c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fa11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa120: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA120u;
    SET_GPR_U32(ctx, 31, 0x3FA128u);
    ctx->pc = 0x3FA124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA120u;
    // 0x3fa124: 0xe64000b0  swc1        $f0, 0xB0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA120u, 0x3FA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA128u;
label_3fa128:
    // 0x3fa128: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fa128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa12c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA12Cu;
    SET_GPR_U32(ctx, 31, 0x3FA134u);
    ctx->pc = 0x3FA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA12Cu;
    // 0x3fa130: 0xe64000b4  swc1        $f0, 0xB4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA12Cu, 0x3FA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA134u;
label_3fa134:
    // 0x3fa134: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fa134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa138: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA138u;
    SET_GPR_U32(ctx, 31, 0x3FA140u);
    ctx->pc = 0x3FA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA138u;
    // 0x3fa13c: 0xe64000b8  swc1        $f0, 0xB8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA138u, 0x3FA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA140u;
label_3fa140:
    // 0x3fa140: 0xe64000bc  swc1        $f0, 0xBC($s2)
    ctx->pc = 0x3fa140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
    // 0x3fa144: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA144u;
    SET_GPR_U32(ctx, 31, 0x3FA14Cu);
    ctx->pc = 0x3FA148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA144u;
    // 0x3fa148: 0xdfa400a0  ld          $a0, 0xA0($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA144u, 0x3FA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA14Cu;
label_3fa14c:
    // 0x3fa14c: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3fa14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x3fa150: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA150u;
    SET_GPR_U32(ctx, 31, 0x3FA158u);
    ctx->pc = 0x3FA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA150u;
    // 0x3fa154: 0xdfa400a8  ld          $a0, 0xA8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA150u, 0x3FA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA158u;
label_3fa158:
    // 0x3fa158: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x3fa158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x3fa15c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa160: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA160u;
    SET_GPR_U32(ctx, 31, 0x3FA168u);
    ctx->pc = 0x3FA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA160u;
    // 0x3fa164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA160u, 0x3FA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA168u;
label_3fa168:
    // 0x3fa168: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fa168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa16c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA16Cu;
    SET_GPR_U32(ctx, 31, 0x3FA174u);
    ctx->pc = 0x3FA170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA16Cu;
    // 0x3fa170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA16Cu, 0x3FA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA174u;
label_3fa174:
    // 0x3fa174: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA174u;
    SET_GPR_U32(ctx, 31, 0x3FA17Cu);
    ctx->pc = 0x3FA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA174u;
    // 0x3fa178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA174u, 0x3FA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA17Cu;
label_3fa17c:
    // 0x3fa17c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa17cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa180: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fa180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fa184: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa18c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA18Cu;
    SET_GPR_U32(ctx, 31, 0x3FA194u);
    ctx->pc = 0x3FA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA18Cu;
    // 0x3fa190: 0xfe420150  sd          $v0, 0x150($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 336), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA18Cu, 0x3FA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA194u;
label_3fa194:
    // 0x3fa194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fa194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa198: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA198u;
    SET_GPR_U32(ctx, 31, 0x3FA1A0u);
    ctx->pc = 0x3FA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA198u;
    // 0x3fa19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA198u, 0x3FA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1A0u;
label_3fa1a0:
    // 0x3fa1a0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA1A0u;
    SET_GPR_U32(ctx, 31, 0x3FA1A8u);
    ctx->pc = 0x3FA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1A0u;
    // 0x3fa1a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA1A0u, 0x3FA1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1A8u;
label_3fa1a8:
    // 0x3fa1a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa1a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa1ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fa1acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fa1b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fa1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa1b8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA1B8u;
    SET_GPR_U32(ctx, 31, 0x3FA1C0u);
    ctx->pc = 0x3FA1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1B8u;
    // 0x3fa1bc: 0xfe420158  sd          $v0, 0x158($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 344), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA1B8u, 0x3FA1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1C0u;
label_3fa1c0:
    // 0x3fa1c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fa1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa1c4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA1C4u;
    SET_GPR_U32(ctx, 31, 0x3FA1CCu);
    ctx->pc = 0x3FA1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1C4u;
    // 0x3fa1c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA1C4u, 0x3FA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1CCu;
label_3fa1cc:
    // 0x3fa1cc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA1CCu;
    SET_GPR_U32(ctx, 31, 0x3FA1D4u);
    ctx->pc = 0x3FA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1CCu;
    // 0x3fa1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA1CCu, 0x3FA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1D4u;
label_3fa1d4:
    // 0x3fa1d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa1d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa1d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fa1d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fa1dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fa1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa1e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa1e4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA1E4u;
    SET_GPR_U32(ctx, 31, 0x3FA1ECu);
    ctx->pc = 0x3FA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1E4u;
    // 0x3fa1e8: 0xfe420160  sd          $v0, 0x160($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 352), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA1E4u, 0x3FA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1ECu;
label_3fa1ec:
    // 0x3fa1ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fa1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa1f0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA1F0u;
    SET_GPR_U32(ctx, 31, 0x3FA1F8u);
    ctx->pc = 0x3FA1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1F0u;
    // 0x3fa1f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA1F0u, 0x3FA1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1F8u;
label_3fa1f8:
    // 0x3fa1f8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA1F8u;
    SET_GPR_U32(ctx, 31, 0x3FA200u);
    ctx->pc = 0x3FA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1F8u;
    // 0x3fa1fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA1F8u, 0x3FA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA200u;
label_3fa200:
    // 0x3fa200: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa204: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fa204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fa208: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fa208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa210: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA210u;
    SET_GPR_U32(ctx, 31, 0x3FA218u);
    ctx->pc = 0x3FA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA210u;
    // 0x3fa214: 0xfe420168  sd          $v0, 0x168($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 360), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA210u, 0x3FA218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA218u;
label_3fa218:
    // 0x3fa218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fa218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa21c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA21Cu;
    SET_GPR_U32(ctx, 31, 0x3FA224u);
    ctx->pc = 0x3FA220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA21Cu;
    // 0x3fa220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA21Cu, 0x3FA224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA224u;
label_3fa224:
    // 0x3fa224: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA224u;
    SET_GPR_U32(ctx, 31, 0x3FA22Cu);
    ctx->pc = 0x3FA228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA224u;
    // 0x3fa228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA224u, 0x3FA22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA22Cu;
label_3fa22c:
    // 0x3fa22c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa22cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa230: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fa230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fa234: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fa234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa23c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA23Cu;
    SET_GPR_U32(ctx, 31, 0x3FA244u);
    ctx->pc = 0x3FA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA23Cu;
    // 0x3fa240: 0xfe420170  sd          $v0, 0x170($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA23Cu, 0x3FA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA244u;
label_3fa244:
    // 0x3fa244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fa244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa248: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA248u;
    SET_GPR_U32(ctx, 31, 0x3FA250u);
    ctx->pc = 0x3FA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA248u;
    // 0x3fa24c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA248u, 0x3FA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA250u;
label_3fa250:
    // 0x3fa250: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA250u;
    SET_GPR_U32(ctx, 31, 0x3FA258u);
    ctx->pc = 0x3FA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA250u;
    // 0x3fa254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA250u, 0x3FA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA258u;
label_3fa258:
    // 0x3fa258: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa25c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fa25cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fa260: 0xdfa400a0  ld          $a0, 0xA0($sp)
    ctx->pc = 0x3fa260u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3fa264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa268: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA268u;
    SET_GPR_U32(ctx, 31, 0x3FA270u);
    ctx->pc = 0x3FA26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA268u;
    // 0x3fa26c: 0xfe420178  sd          $v0, 0x178($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 376), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA268u, 0x3FA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA270u;
label_3fa270:
    // 0x3fa270: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fa270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa274: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA274u;
    SET_GPR_U32(ctx, 31, 0x3FA27Cu);
    ctx->pc = 0x3FA278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA274u;
    // 0x3fa278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA274u, 0x3FA27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA27Cu;
label_3fa27c:
    // 0x3fa27c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA27Cu;
    SET_GPR_U32(ctx, 31, 0x3FA284u);
    ctx->pc = 0x3FA280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA27Cu;
    // 0x3fa280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA27Cu, 0x3FA284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA284u;
label_3fa284:
    // 0x3fa284: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa288: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fa288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fa28c: 0xdfa400a8  ld          $a0, 0xA8($sp)
    ctx->pc = 0x3fa28cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3fa290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa294: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA294u;
    SET_GPR_U32(ctx, 31, 0x3FA29Cu);
    ctx->pc = 0x3FA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA294u;
    // 0x3fa298: 0xfe420180  sd          $v0, 0x180($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 384), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA294u, 0x3FA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA29Cu;
label_3fa29c:
    // 0x3fa29c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fa29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa2a0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA2A0u;
    SET_GPR_U32(ctx, 31, 0x3FA2A8u);
    ctx->pc = 0x3FA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA2A0u;
    // 0x3fa2a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA2A0u, 0x3FA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA2A8u;
label_3fa2a8:
    // 0x3fa2a8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA2A8u;
    SET_GPR_U32(ctx, 31, 0x3FA2B0u);
    ctx->pc = 0x3FA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA2A8u;
    // 0x3fa2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA2A8u, 0x3FA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA2B0u;
label_3fa2b0:
    // 0x3fa2b0: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x3fa2b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3fa2b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa2b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa2b8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3fa2b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3fa2bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fa2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fa2c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fa2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fa2c4: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x3fa2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x3fa2c8: 0xfe440188  sd          $a0, 0x188($s2)
    ctx->pc = 0x3fa2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 392), GPR_U64(ctx, 4));
label_3fa2cc:
    // 0x3fa2cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3fa2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fa2d0:
    // 0x3fa2d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3fa2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fa2d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3fa2d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fa2d8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3fa2d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fa2dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fa2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fa2e0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3fa2e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fa2e4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3fa2e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fa2e8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3fa2e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fa2ec: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3fa2ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fa2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fa2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fa2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3FA2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA2F4u;
        // 0x3fa2f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FA2FCu;
    // 0x3fa2fc: 0x0  nop
    ctx->pc = 0x3fa2fcu;
    // NOP
    ctx->pc = 0x3fa300u;
}
