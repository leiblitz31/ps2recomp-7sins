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

// Function: sub_00488F30
// Address: 0x488f30 - 0x4890b0
void sub_00488F30_0x488f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488F30_0x488f30");
#endif

    switch (ctx->pc) {
        case 0x488f7cu: goto label_488f7c;
        case 0x488f98u: goto label_488f98;
        case 0x489084u: goto label_489084;
        default: break;
    }

    ctx->pc = 0x488f30u;

    // 0x488f30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x488f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x488f34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x488f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x488f38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x488f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x488f3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x488f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x488f40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x488f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x488f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x488f4c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x488f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x488f50: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x488f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x488f54: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x488f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x488f58: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x488f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x488f5c: 0x8f82c0d0  lw          $v0, -0x3F30($gp)
    ctx->pc = 0x488f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951120)));
    // 0x488f60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x488F60u;
    {
        const bool branch_taken_0x488f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x488f60) {
            ctx->pc = 0x488F74u;
            goto label_488f74;
        }
    }
    ctx->pc = 0x488F68u;
    // 0x488f68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x488f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488f6c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x488F6Cu;
    {
        const bool branch_taken_0x488f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488f6c) {
            ctx->pc = 0x48908Cu;
            goto label_48908c;
        }
    }
    ctx->pc = 0x488F74u;
label_488f74:
    // 0x488f74: 0xc1063a4  jal         func_418E90
    ctx->pc = 0x488F74u;
    SET_GPR_U32(ctx, 31, 0x488F7Cu);
    ctx->pc = 0x418E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418E90u, 0x488F74u, 0x488F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488F7Cu;
label_488f7c:
    // 0x488f7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x488f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488f80: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x488f84: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x488f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
    // 0x488f88: 0x2785b5f8  addiu       $a1, $gp, -0x4A08
    ctx->pc = 0x488f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948344));
    // 0x488f8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x488f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488f90: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x488F90u;
    SET_GPR_U32(ctx, 31, 0x488F98u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x488F90u, 0x488F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488F98u;
label_488f98:
    // 0x488f98: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488f9c: 0x80427c50  lb          $v0, 0x7C50($v0)
    ctx->pc = 0x488f9cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x657C50u));
    // 0x488fa0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x488fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x488fa4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x488fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x488fa8: 0x2453ffd0  addiu       $s3, $v0, -0x30
    ctx->pc = 0x488fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x488fac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488fb0: 0x80427c51  lb          $v0, 0x7C51($v0)
    ctx->pc = 0x488fb0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x657C51u));
    // 0x488fb4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x488fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x488fb8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x488fb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x488fbc: 0x2452ffd0  addiu       $s2, $v0, -0x30
    ctx->pc = 0x488fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x488fc0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488fc4: 0x80427c52  lb          $v0, 0x7C52($v0)
    ctx->pc = 0x488fc4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x657C52u));
    // 0x488fc8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x488fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x488fcc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x488fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x488fd0: 0x2451ffd0  addiu       $s1, $v0, -0x30
    ctx->pc = 0x488fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x488fd4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488fd8: 0x80427c53  lb          $v0, 0x7C53($v0)
    ctx->pc = 0x488fd8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x657C53u));
    // 0x488fdc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x488fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x488fe0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x488fe0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x488fe4: 0x2443ffd0  addiu       $v1, $v0, -0x30
    ctx->pc = 0x488fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x488fe8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x488fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x488fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x488fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x488ff0: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x488ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x488ff4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488ff8: 0x80427c54  lb          $v0, 0x7C54($v0)
    ctx->pc = 0x488ff8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x657C54u));
    // 0x488ffc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x488ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x489000: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x489000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x489004: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x489004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x489008: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x489008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x48900c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489010u;
    {
        const bool branch_taken_0x489010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489010) {
            ctx->pc = 0x489020u;
            goto label_489020;
        }
    }
    ctx->pc = 0x489018u;
    // 0x489018: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x489018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48901c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x48901cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_489020:
    // 0x489020: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x489020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x489024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489024u;
    {
        const bool branch_taken_0x489024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489024) {
            ctx->pc = 0x489034u;
            goto label_489034;
        }
    }
    ctx->pc = 0x48902Cu;
    // 0x48902c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x48902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x489030: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x489030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_489034:
    // 0x489034: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x489034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x489038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489038u;
    {
        const bool branch_taken_0x489038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489038) {
            ctx->pc = 0x489048u;
            goto label_489048;
        }
    }
    ctx->pc = 0x489040u;
    // 0x489040: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x489040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x489044: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x489044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_489048:
    // 0x489048: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x489048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48904c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48904Cu;
    {
        const bool branch_taken_0x48904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48904c) {
            ctx->pc = 0x48905Cu;
            goto label_48905c;
        }
    }
    ctx->pc = 0x489054u;
    // 0x489054: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x489054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x489058: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x489058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_48905c:
    // 0x48905c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x48905cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x489060: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x489060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
    // 0x489064: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x489064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x489068: 0x24a544b0  addiu       $a1, $a1, 0x44B0
    ctx->pc = 0x489068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17584));
    // 0x48906c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x48906cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489070: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x489070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489074: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x489074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489078: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x489078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48907c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x48907Cu;
    SET_GPR_U32(ctx, 31, 0x489084u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x48907Cu, 0x489084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489084u;
label_489084:
    // 0x489084: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x489084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x489088: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x489088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_48908c:
    // 0x48908c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x489090: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x489090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x489094: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x489094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x489098: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x489098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48909c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48909cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4890a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4890a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4890a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x4890a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4890a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4890A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4890A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4890B0u;
}
