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

// Function: sub_001EA1A0
// Address: 0x1ea1a0 - 0x1eadd0
void sub_001EA1A0_0x1ea1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA1A0_0x1ea1a0");
#endif

    switch (ctx->pc) {
        case 0x1ea200u: goto label_1ea200;
        case 0x1ea214u: goto label_1ea214;
        case 0x1ea228u: goto label_1ea228;
        case 0x1ea238u: goto label_1ea238;
        case 0x1ea258u: goto label_1ea258;
        case 0x1ea298u: goto label_1ea298;
        case 0x1ea308u: goto label_1ea308;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea34cu: goto label_1ea34c;
        case 0x1ea364u: goto label_1ea364;
        case 0x1ea380u: goto label_1ea380;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea3b0u: goto label_1ea3b0;
        case 0x1ea3ccu: goto label_1ea3cc;
        case 0x1ea3e4u: goto label_1ea3e4;
        case 0x1ea400u: goto label_1ea400;
        case 0x1ea418u: goto label_1ea418;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5b8u: goto label_1ea5b8;
        case 0x1ea5d8u: goto label_1ea5d8;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea628u: goto label_1ea628;
        case 0x1ea644u: goto label_1ea644;
        case 0x1ea65cu: goto label_1ea65c;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea690u: goto label_1ea690;
        case 0x1ea6acu: goto label_1ea6ac;
        case 0x1ea6c4u: goto label_1ea6c4;
        case 0x1ea6e0u: goto label_1ea6e0;
        case 0x1ea6f8u: goto label_1ea6f8;
        case 0x1ea714u: goto label_1ea714;
        case 0x1ea72cu: goto label_1ea72c;
        case 0x1ea748u: goto label_1ea748;
        case 0x1ea760u: goto label_1ea760;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea794u: goto label_1ea794;
        case 0x1ea7b0u: goto label_1ea7b0;
        case 0x1ea7c8u: goto label_1ea7c8;
        case 0x1ea7e4u: goto label_1ea7e4;
        case 0x1ea7fcu: goto label_1ea7fc;
        case 0x1ea818u: goto label_1ea818;
        case 0x1ea830u: goto label_1ea830;
        case 0x1ea84cu: goto label_1ea84c;
        case 0x1ea864u: goto label_1ea864;
        case 0x1ea880u: goto label_1ea880;
        case 0x1ea898u: goto label_1ea898;
        case 0x1ea8b0u: goto label_1ea8b0;
        case 0x1ea8c8u: goto label_1ea8c8;
        case 0x1ea8e4u: goto label_1ea8e4;
        case 0x1ea8fcu: goto label_1ea8fc;
        case 0x1ea91cu: goto label_1ea91c;
        case 0x1ea934u: goto label_1ea934;
        case 0x1ea958u: goto label_1ea958;
        case 0x1ea978u: goto label_1ea978;
        case 0x1ea99cu: goto label_1ea99c;
        case 0x1ea9bcu: goto label_1ea9bc;
        case 0x1ea9e0u: goto label_1ea9e0;
        case 0x1eaa00u: goto label_1eaa00;
        case 0x1eaa24u: goto label_1eaa24;
        case 0x1eaa44u: goto label_1eaa44;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaaacu: goto label_1eaaac;
        case 0x1eaaccu: goto label_1eaacc;
        case 0x1eaaf0u: goto label_1eaaf0;
        case 0x1eab10u: goto label_1eab10;
        case 0x1eab34u: goto label_1eab34;
        case 0x1eab54u: goto label_1eab54;
        case 0x1eab78u: goto label_1eab78;
        case 0x1eab98u: goto label_1eab98;
        case 0x1eabbcu: goto label_1eabbc;
        case 0x1eabdcu: goto label_1eabdc;
        case 0x1eac00u: goto label_1eac00;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac44u: goto label_1eac44;
        case 0x1eac64u: goto label_1eac64;
        case 0x1eac7cu: goto label_1eac7c;
        case 0x1eac88u: goto label_1eac88;
        case 0x1eaca8u: goto label_1eaca8;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1eace0u: goto label_1eace0;
        case 0x1ead00u: goto label_1ead00;
        case 0x1ead1cu: goto label_1ead1c;
        case 0x1ead30u: goto label_1ead30;
        case 0x1ead74u: goto label_1ead74;
        case 0x1ead84u: goto label_1ead84;
        default: break;
    }

    ctx->pc = 0x1ea1a0u;

    // 0x1ea1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea1a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ea1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ea1a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ea1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea1ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ea1acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ea1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA1B8u;
    // 0x1ea1b8: 0x0  nop
    ctx->pc = 0x1ea1b8u;
    // NOP
    // 0x1ea1bc: 0x0  nop
    ctx->pc = 0x1ea1bcu;
    // NOP
    // 0x1ea1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea1c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ea1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ea1cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1ea1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ea1d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea1d4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EA1D4u;
    {
        const bool branch_taken_0x1ea1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea1d4) {
            ctx->pc = 0x1EA258u;
            goto label_1ea258;
        }
    }
    ctx->pc = 0x1EA1DCu;
    // 0x1ea1dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ea1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ea1e0: 0x24634d00  addiu       $v1, $v1, 0x4D00
    ctx->pc = 0x1ea1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19712));
    // 0x1ea1e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea1e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ea1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ea1ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea1f0: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1ea1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1ea1f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea1f8: 0xc056094  jal         func_158250
    ctx->pc = 0x1EA1F8u;
    SET_GPR_U32(ctx, 31, 0x1EA200u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1EA1F8u, 0x1EA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA200u;
label_1ea200:
    // 0x1ea200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea204: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ea204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ea208: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea20c: 0xc07a790  jal         func_1E9E40
    ctx->pc = 0x1EA20Cu;
    SET_GPR_U32(ctx, 31, 0x1EA214u);
    ctx->pc = 0x1E9E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9E40u, 0x1EA20Cu, 0x1EA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA214u;
label_1ea214:
    // 0x1ea214: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea218: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea21c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea220: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1EA220u;
    SET_GPR_U32(ctx, 31, 0x1EA228u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1EA220u, 0x1EA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA228u;
label_1ea228:
    // 0x1ea228: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ea228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea230: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1EA230u;
    SET_GPR_U32(ctx, 31, 0x1EA238u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1EA230u, 0x1EA238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA238u;
label_1ea238:
    // 0x1ea238: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1ea238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea23c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ea23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ea240: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ea240u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ea244: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA244u;
    {
        const bool branch_taken_0x1ea244 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ea244) {
            ctx->pc = 0x1EA258u;
            goto label_1ea258;
        }
    }
    ctx->pc = 0x1EA24Cu;
    // 0x1ea24c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea250: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1EA250u;
    SET_GPR_U32(ctx, 31, 0x1EA258u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1EA250u, 0x1EA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA258u;
label_1ea258:
    // 0x1ea258: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea260: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ea264: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA26Cu;
    // 0x1ea26c: 0x0  nop
    ctx->pc = 0x1ea26cu;
    // NOP
    // 0x1ea270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ea270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ea274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ea278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ea27c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1ea27cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ea280: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ea280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ea284: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ea284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea288: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1ea288u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea28c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1ea28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea290: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1EA290u;
    SET_GPR_U32(ctx, 31, 0x1EA298u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1EA290u, 0x1EA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA298u;
label_1ea298:
    // 0x1ea298: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1ea298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea29c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ea29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ea2a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA2A0u;
    {
        const bool branch_taken_0x1ea2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea2a0) {
            ctx->pc = 0x1EA2B8u;
            goto label_1ea2b8;
        }
    }
    ctx->pc = 0x1EA2A8u;
    // 0x1ea2a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ea2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea2ac: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ea2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea2b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ea2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea2b4: 0xe46000c8  swc1        $f0, 0xC8($v1)
    ctx->pc = 0x1ea2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 200), bits); }
label_1ea2b8:
    // 0x1ea2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea2bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ea2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ea2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA2C8u;
    // 0x1ea2c8: 0x0  nop
    ctx->pc = 0x1ea2c8u;
    // NOP
    // 0x1ea2cc: 0x0  nop
    ctx->pc = 0x1ea2ccu;
    // NOP
    // 0x1ea2d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ea2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ea2d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ea2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ea2d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ea2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ea2dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ea2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ea2e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ea2e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea2e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea2f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea2f8: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1ea2fc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea300: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1EA300u;
    SET_GPR_U32(ctx, 31, 0x1EA308u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1EA300u, 0x1EA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA308u;
label_1ea308:
    // 0x1ea308: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ea308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ea30c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ea30cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea310: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1ea314: 0x26d681a0  addiu       $s6, $s6, -0x7E60
    ctx->pc = 0x1ea314u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934944));
    // 0x1ea318: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ea318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea31c: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1EA31Cu;
    SET_GPR_U32(ctx, 31, 0x1EA324u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1EA31Cu, 0x1EA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA324u;
label_1ea324:
    // 0x1ea324: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea328: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1ea328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1ea32c: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x1ea32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1ea330: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea334: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1EA334u;
    SET_GPR_U32(ctx, 31, 0x1EA33Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1EA334u, 0x1EA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA33Cu;
label_1ea33c:
    // 0x1ea33c: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1ea33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1ea340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea344: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1EA344u;
    SET_GPR_U32(ctx, 31, 0x1EA34Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1EA344u, 0x1EA34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA34Cu;
label_1ea34c:
    // 0x1ea34c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea350: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA350u;
    {
        const bool branch_taken_0x1ea350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea350) {
            ctx->pc = 0x1EA368u;
            goto label_1ea368;
        }
    }
    ctx->pc = 0x1EA358u;
    // 0x1ea358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea35c: 0xc07ab74  jal         func_1EADD0
    ctx->pc = 0x1EA35Cu;
    SET_GPR_U32(ctx, 31, 0x1EA364u);
    ctx->pc = 0x1EADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADD0u, 0x1EA35Cu, 0x1EA364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA364u;
label_1ea364:
    // 0x1ea364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea368:
    // 0x1ea368: 0xaf90bb60  sw          $s0, -0x44A0($gp)
    ctx->pc = 0x1ea368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949728), GPR_U32(ctx, 16));
    // 0x1ea36c: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea370: 0x26c400a4  addiu       $a0, $s6, 0xA4
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 164));
    // 0x1ea374: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1ea374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ea378: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1EA378u;
    SET_GPR_U32(ctx, 31, 0x1EA380u);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1EA378u, 0x1EA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA380u;
label_1ea380:
    // 0x1ea380: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea384: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea388: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea38c: 0x24a581c8  addiu       $a1, $a1, -0x7E38
    ctx->pc = 0x1ea38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934984));
    // 0x1ea390: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA390u;
    SET_GPR_U32(ctx, 31, 0x1EA398u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA390u, 0x1EA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA398u;
label_1ea398:
    // 0x1ea398: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea398u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea39c: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea3a0: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea3a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ea3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea3a8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA3A8u;
    SET_GPR_U32(ctx, 31, 0x1EA3B0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA3A8u, 0x1EA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3B0u;
label_1ea3b0:
    // 0x1ea3b0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea3b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea3b8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea3bc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea3c0: 0x24a581d8  addiu       $a1, $a1, -0x7E28
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935000));
    // 0x1ea3c4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA3C4u;
    SET_GPR_U32(ctx, 31, 0x1EA3CCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA3C4u, 0x1EA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3CCu;
label_1ea3cc:
    // 0x1ea3cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea3ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3d0: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea3d4: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea3d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ea3dc: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA3DCu;
    SET_GPR_U32(ctx, 31, 0x1EA3E4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA3DCu, 0x1EA3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3E4u;
label_1ea3e4:
    // 0x1ea3e4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea3e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea3ec: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea3f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea3f4: 0x24a581e8  addiu       $a1, $a1, -0x7E18
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935016));
    // 0x1ea3f8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA3F8u;
    SET_GPR_U32(ctx, 31, 0x1EA400u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA3F8u, 0x1EA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA400u;
label_1ea400:
    // 0x1ea400: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea400u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea404: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea404u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea408: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea40c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ea40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ea410: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA410u;
    SET_GPR_U32(ctx, 31, 0x1EA418u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA410u, 0x1EA418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA418u;
label_1ea418:
    // 0x1ea418: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea41c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea420: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea424: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea428: 0x24a581f8  addiu       $a1, $a1, -0x7E08
    ctx->pc = 0x1ea428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935032));
    // 0x1ea42c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA42Cu;
    SET_GPR_U32(ctx, 31, 0x1EA434u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA42Cu, 0x1EA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA434u;
label_1ea434:
    // 0x1ea434: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea434u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea438: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea43c: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea440: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ea440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ea444: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA444u;
    SET_GPR_U32(ctx, 31, 0x1EA44Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA444u, 0x1EA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA44Cu;
label_1ea44c:
    // 0x1ea44c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea450: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea454: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea458: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea45c: 0x24a58208  addiu       $a1, $a1, -0x7DF8
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935048));
    // 0x1ea460: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA460u;
    SET_GPR_U32(ctx, 31, 0x1EA468u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA460u, 0x1EA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA468u;
label_1ea468:
    // 0x1ea468: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea468u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea46c: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea46cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea470: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea474: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ea478: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA478u;
    SET_GPR_U32(ctx, 31, 0x1EA480u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA478u, 0x1EA480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA480u;
label_1ea480:
    // 0x1ea480: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea484: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea488: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea48c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea490: 0x24a58218  addiu       $a1, $a1, -0x7DE8
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935064));
    // 0x1ea494: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA494u;
    SET_GPR_U32(ctx, 31, 0x1EA49Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA494u, 0x1EA49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA49Cu;
label_1ea49c:
    // 0x1ea49c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea49cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4a0: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea4a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea4a4: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea4a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ea4ac: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA4ACu;
    SET_GPR_U32(ctx, 31, 0x1EA4B4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA4ACu, 0x1EA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4B4u;
label_1ea4b4:
    // 0x1ea4b4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea4b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea4bc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea4c0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea4c4: 0x24a58228  addiu       $a1, $a1, -0x7DD8
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935080));
    // 0x1ea4c8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA4C8u;
    SET_GPR_U32(ctx, 31, 0x1EA4D0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA4C8u, 0x1EA4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4D0u;
label_1ea4d0:
    // 0x1ea4d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea4d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4d4: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea4d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea4d8: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea4dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ea4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ea4e0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA4E0u;
    SET_GPR_U32(ctx, 31, 0x1EA4E8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA4E0u, 0x1EA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4E8u;
label_1ea4e8:
    // 0x1ea4e8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea4ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea4f0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea4f4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea4f8: 0x24a58238  addiu       $a1, $a1, -0x7DC8
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935096));
    // 0x1ea4fc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA4FCu;
    SET_GPR_U32(ctx, 31, 0x1EA504u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA4FCu, 0x1EA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA504u;
label_1ea504:
    // 0x1ea504: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea508: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea50c: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea510: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ea510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ea514: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA514u;
    SET_GPR_U32(ctx, 31, 0x1EA51Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA514u, 0x1EA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA51Cu;
label_1ea51c:
    // 0x1ea51c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea520: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea524: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea528: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea52c: 0x24a58248  addiu       $a1, $a1, -0x7DB8
    ctx->pc = 0x1ea52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935112));
    // 0x1ea530: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA530u;
    SET_GPR_U32(ctx, 31, 0x1EA538u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA530u, 0x1EA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA538u;
label_1ea538:
    // 0x1ea538: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea53c: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea53cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea540: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea544: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ea544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ea548: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA548u;
    SET_GPR_U32(ctx, 31, 0x1EA550u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA548u, 0x1EA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA550u;
label_1ea550:
    // 0x1ea550: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea554: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea558: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea55c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea560: 0x24a58258  addiu       $a1, $a1, -0x7DA8
    ctx->pc = 0x1ea560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935128));
    // 0x1ea564: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA564u;
    SET_GPR_U32(ctx, 31, 0x1EA56Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA564u, 0x1EA56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA56Cu;
label_1ea56c:
    // 0x1ea56c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea56cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea570: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea570u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea574: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea578: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ea57c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA57Cu;
    SET_GPR_U32(ctx, 31, 0x1EA584u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA57Cu, 0x1EA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA584u;
label_1ea584:
    // 0x1ea584: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea588: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea58c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea590: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea594: 0x24a58268  addiu       $a1, $a1, -0x7D98
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935144));
    // 0x1ea598: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA598u;
    SET_GPR_U32(ctx, 31, 0x1EA5A0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA598u, 0x1EA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5A0u;
label_1ea5a0:
    // 0x1ea5a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea5a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5a4: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x1ea5a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea5a8: 0x26e400a4  addiu       $a0, $s7, 0xA4
    ctx->pc = 0x1ea5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 164));
    // 0x1ea5ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ea5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ea5b0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA5B0u;
    SET_GPR_U32(ctx, 31, 0x1EA5B8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA5B0u, 0x1EA5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5B8u;
label_1ea5b8:
    // 0x1ea5b8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea5bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea5c0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea5c4: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x1ea5c8: 0x24e78278  addiu       $a3, $a3, -0x7D88
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935160));
    // 0x1ea5cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5d0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA5D0u;
    SET_GPR_U32(ctx, 31, 0x1EA5D8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA5D0u, 0x1EA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5D8u;
label_1ea5d8:
    // 0x1ea5d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea5d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5dc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1ea5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea5e0: 0x24a400a4  addiu       $a0, $a1, 0xA4
    ctx->pc = 0x1ea5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1ea5e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ea5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ea5e8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA5E8u;
    SET_GPR_U32(ctx, 31, 0x1EA5F0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA5E8u, 0x1EA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5F0u;
label_1ea5f0:
    // 0x1ea5f0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea5f4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1ea5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea5f8: 0x8cb60030  lw          $s6, 0x30($a1)
    ctx->pc = 0x1ea5f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1ea5fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ea5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea600: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea604: 0x24a58288  addiu       $a1, $a1, -0x7D78
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935176));
    // 0x1ea608: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA608u;
    SET_GPR_U32(ctx, 31, 0x1EA610u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA608u, 0x1EA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA610u;
label_1ea610:
    // 0x1ea610: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ea610u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea614: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea618: 0x248400a4  addiu       $a0, $a0, 0xA4
    ctx->pc = 0x1ea618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1ea61c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ea61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ea620: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA620u;
    SET_GPR_U32(ctx, 31, 0x1EA628u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA620u, 0x1EA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA628u;
label_1ea628:
    // 0x1ea628: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1ea628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1ea62c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea630: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ea634: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea638: 0x24a58298  addiu       $a1, $a1, -0x7D68
    ctx->pc = 0x1ea638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935192));
    // 0x1ea63c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA63Cu;
    SET_GPR_U32(ctx, 31, 0x1EA644u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA63Cu, 0x1EA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA644u;
label_1ea644:
    // 0x1ea644: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea644u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea648: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea64c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea650: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1ea650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ea654: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA654u;
    SET_GPR_U32(ctx, 31, 0x1EA65Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA654u, 0x1EA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA65Cu;
label_1ea65c:
    // 0x1ea65c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea660: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea664: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea668: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea66c: 0x24a582a8  addiu       $a1, $a1, -0x7D58
    ctx->pc = 0x1ea66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935208));
    // 0x1ea670: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA670u;
    SET_GPR_U32(ctx, 31, 0x1EA678u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA670u, 0x1EA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA678u;
label_1ea678:
    // 0x1ea678: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea678u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea67c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea680: 0x248400a4  addiu       $a0, $a0, 0xA4
    ctx->pc = 0x1ea680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1ea684: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1ea684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ea688: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA688u;
    SET_GPR_U32(ctx, 31, 0x1EA690u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA688u, 0x1EA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA690u;
label_1ea690:
    // 0x1ea690: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea694: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea698: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea69c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea6a0: 0x24a582b8  addiu       $a1, $a1, -0x7D48
    ctx->pc = 0x1ea6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935224));
    // 0x1ea6a4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA6A4u;
    SET_GPR_U32(ctx, 31, 0x1EA6ACu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA6A4u, 0x1EA6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6ACu;
label_1ea6ac:
    // 0x1ea6ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea6acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea6b4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea6b8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1ea6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ea6bc: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA6BCu;
    SET_GPR_U32(ctx, 31, 0x1EA6C4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA6BCu, 0x1EA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6C4u;
label_1ea6c4:
    // 0x1ea6c4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea6c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea6cc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea6d0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea6d4: 0x24a582c8  addiu       $a1, $a1, -0x7D38
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935240));
    // 0x1ea6d8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA6D8u;
    SET_GPR_U32(ctx, 31, 0x1EA6E0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA6D8u, 0x1EA6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6E0u;
label_1ea6e0:
    // 0x1ea6e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea6e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea6e8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea6ec: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1ea6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ea6f0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA6F0u;
    SET_GPR_U32(ctx, 31, 0x1EA6F8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA6F0u, 0x1EA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6F8u;
label_1ea6f8:
    // 0x1ea6f8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea6fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea700: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea704: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea708: 0x24a582d8  addiu       $a1, $a1, -0x7D28
    ctx->pc = 0x1ea708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935256));
    // 0x1ea70c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA70Cu;
    SET_GPR_U32(ctx, 31, 0x1EA714u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA70Cu, 0x1EA714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA714u;
label_1ea714:
    // 0x1ea714: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea718: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea71c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea720: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1ea720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1ea724: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA724u;
    SET_GPR_U32(ctx, 31, 0x1EA72Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA724u, 0x1EA72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA72Cu;
label_1ea72c:
    // 0x1ea72c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea730: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea734: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea738: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea73c: 0x24a582e8  addiu       $a1, $a1, -0x7D18
    ctx->pc = 0x1ea73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935272));
    // 0x1ea740: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA740u;
    SET_GPR_U32(ctx, 31, 0x1EA748u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA740u, 0x1EA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA748u;
label_1ea748:
    // 0x1ea748: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea748u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea74c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea750: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea758: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA758u;
    SET_GPR_U32(ctx, 31, 0x1EA760u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA758u, 0x1EA760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA760u;
label_1ea760:
    // 0x1ea760: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea764: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea768: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea76c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea770: 0x24a582f8  addiu       $a1, $a1, -0x7D08
    ctx->pc = 0x1ea770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935288));
    // 0x1ea774: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA774u;
    SET_GPR_U32(ctx, 31, 0x1EA77Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA774u, 0x1EA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA77Cu;
label_1ea77c:
    // 0x1ea77c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea77cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea780: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea784: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea788: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea78c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA78Cu;
    SET_GPR_U32(ctx, 31, 0x1EA794u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA78Cu, 0x1EA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA794u;
label_1ea794:
    // 0x1ea794: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea798: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea79c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea7a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea7a4: 0x24a58308  addiu       $a1, $a1, -0x7CF8
    ctx->pc = 0x1ea7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935304));
    // 0x1ea7a8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA7A8u;
    SET_GPR_U32(ctx, 31, 0x1EA7B0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA7A8u, 0x1EA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7B0u;
label_1ea7b0:
    // 0x1ea7b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea7b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea7b8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea7bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ea7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea7c0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA7C0u;
    SET_GPR_U32(ctx, 31, 0x1EA7C8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA7C0u, 0x1EA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7C8u;
label_1ea7c8:
    // 0x1ea7c8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea7cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea7d0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea7d4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea7d8: 0x24a58318  addiu       $a1, $a1, -0x7CE8
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935320));
    // 0x1ea7dc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA7DCu;
    SET_GPR_U32(ctx, 31, 0x1EA7E4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA7DCu, 0x1EA7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7E4u;
label_1ea7e4:
    // 0x1ea7e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea7e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea7ec: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea7f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ea7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea7f4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA7F4u;
    SET_GPR_U32(ctx, 31, 0x1EA7FCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA7F4u, 0x1EA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7FCu;
label_1ea7fc:
    // 0x1ea7fc: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea800: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea804: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea808: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea80c: 0x24a58328  addiu       $a1, $a1, -0x7CD8
    ctx->pc = 0x1ea80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935336));
    // 0x1ea810: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA810u;
    SET_GPR_U32(ctx, 31, 0x1EA818u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA810u, 0x1EA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA818u;
label_1ea818:
    // 0x1ea818: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea81c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea820: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea824: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ea828: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA828u;
    SET_GPR_U32(ctx, 31, 0x1EA830u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA828u, 0x1EA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA830u;
label_1ea830:
    // 0x1ea830: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea834: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea838: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea83c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea840: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
    // 0x1ea844: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA844u;
    SET_GPR_U32(ctx, 31, 0x1EA84Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA844u, 0x1EA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA84Cu;
label_1ea84c:
    // 0x1ea84c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea84cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea850: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea854: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea858: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ea85c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA85Cu;
    SET_GPR_U32(ctx, 31, 0x1EA864u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA85Cu, 0x1EA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA864u;
label_1ea864:
    // 0x1ea864: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea868: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea86c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea870: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea874: 0x24a58348  addiu       $a1, $a1, -0x7CB8
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935368));
    // 0x1ea878: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA878u;
    SET_GPR_U32(ctx, 31, 0x1EA880u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA878u, 0x1EA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA880u;
label_1ea880:
    // 0x1ea880: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea880u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea884: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea888: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea88c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ea88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ea890: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA890u;
    SET_GPR_U32(ctx, 31, 0x1EA898u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA890u, 0x1EA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA898u;
label_1ea898:
    // 0x1ea898: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea89c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea8a0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea8a4: 0x27859890  addiu       $a1, $gp, -0x6770
    ctx->pc = 0x1ea8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940816));
    // 0x1ea8a8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA8A8u;
    SET_GPR_U32(ctx, 31, 0x1EA8B0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA8A8u, 0x1EA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8B0u;
label_1ea8b0:
    // 0x1ea8b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea8b8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea8bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ea8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ea8c0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA8C0u;
    SET_GPR_U32(ctx, 31, 0x1EA8C8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA8C0u, 0x1EA8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8C8u;
label_1ea8c8:
    // 0x1ea8c8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea8cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea8d0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ea8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ea8d4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea8d8: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
    // 0x1ea8dc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA8DCu;
    SET_GPR_U32(ctx, 31, 0x1EA8E4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA8DCu, 0x1EA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8E4u;
label_1ea8e4:
    // 0x1ea8e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea8e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea8ec: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea8f0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1ea8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ea8f4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA8F4u;
    SET_GPR_U32(ctx, 31, 0x1EA8FCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA8F4u, 0x1EA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8FCu;
label_1ea8fc:
    // 0x1ea8fc: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea900: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea904: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ea904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ea908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea90c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ea910: 0x24a58368  addiu       $a1, $a1, -0x7C98
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935400));
    // 0x1ea914: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA914u;
    SET_GPR_U32(ctx, 31, 0x1EA91Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA914u, 0x1EA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA91Cu;
label_1ea91c:
    // 0x1ea91c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea91cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea920: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea924: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ea924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ea928: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1ea92c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA92Cu;
    SET_GPR_U32(ctx, 31, 0x1EA934u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA92Cu, 0x1EA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA934u;
label_1ea934:
    // 0x1ea934: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea938: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea93c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ea940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea944: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ea944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ea948: 0x24428378  addiu       $v0, $v0, -0x7C88
    ctx->pc = 0x1ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935416));
    // 0x1ea94c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea950: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA950u;
    SET_GPR_U32(ctx, 31, 0x1EA958u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA950u, 0x1EA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA958u;
label_1ea958:
    // 0x1ea958: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ea958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea95c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea960: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1ea960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1ea964: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea968: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1ea968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ea96c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea970: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA970u;
    SET_GPR_U32(ctx, 31, 0x1EA978u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA970u, 0x1EA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA978u;
label_1ea978:
    // 0x1ea978: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1ea978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1ea97c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea980: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ea980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ea984: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea988: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1ea988u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1ea98c: 0x26d68388  addiu       $s6, $s6, -0x7C78
    ctx->pc = 0x1ea98cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935432));
    // 0x1ea990: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ea990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea994: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA994u;
    SET_GPR_U32(ctx, 31, 0x1EA99Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA994u, 0x1EA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA99Cu;
label_1ea99c:
    // 0x1ea99c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ea99cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9a0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea9a4: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1ea9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1ea9a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9ac: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1ea9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ea9b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9b4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA9B4u;
    SET_GPR_U32(ctx, 31, 0x1EA9BCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA9B4u, 0x1EA9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9BCu;
label_1ea9bc:
    // 0x1ea9bc: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1ea9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1ea9c0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea9c4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ea9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ea9c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9cc: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1ea9ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1ea9d0: 0x26d68398  addiu       $s6, $s6, -0x7C68
    ctx->pc = 0x1ea9d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935448));
    // 0x1ea9d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ea9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9d8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EA9D8u;
    SET_GPR_U32(ctx, 31, 0x1EA9E0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EA9D8u, 0x1EA9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9E0u;
label_1ea9e0:
    // 0x1ea9e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ea9e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9e4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ea9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea9e8: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1ea9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1ea9ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9f0: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1ea9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ea9f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9f8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EA9F8u;
    SET_GPR_U32(ctx, 31, 0x1EAA00u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EA9F8u, 0x1EAA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA00u;
label_1eaa00:
    // 0x1eaa00: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eaa00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eaa04: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaa08: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eaa0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa10: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eaa14: 0x26d683a8  addiu       $s6, $s6, -0x7C58
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935464));
    // 0x1eaa18: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eaa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa1c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EAA1Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA24u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EAA1Cu, 0x1EAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA24u;
label_1eaa24:
    // 0x1eaa24: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eaa24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa28: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaa2c: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eaa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eaa30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa34: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1eaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1eaa38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eaa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa3c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA44u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAA3Cu, 0x1EAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA44u;
label_1eaa44:
    // 0x1eaa44: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eaa44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eaa48: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaa4c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eaa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eaa50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa54: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eaa54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eaa58: 0x26d683b8  addiu       $s6, $s6, -0x7C48
    ctx->pc = 0x1eaa58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935480));
    // 0x1eaa5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eaa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa60: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EAA60u;
    SET_GPR_U32(ctx, 31, 0x1EAA68u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EAA60u, 0x1EAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA68u;
label_1eaa68:
    // 0x1eaa68: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eaa68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa6c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaa70: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eaa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eaa74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa78: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1eaa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1eaa7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eaa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa80: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAA80u;
    SET_GPR_U32(ctx, 31, 0x1EAA88u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAA80u, 0x1EAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA88u;
label_1eaa88:
    // 0x1eaa88: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eaa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eaa8c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaa90: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eaa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eaa94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa98: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eaa98u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eaa9c: 0x26d683c8  addiu       $s6, $s6, -0x7C38
    ctx->pc = 0x1eaa9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935496));
    // 0x1eaaa0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eaaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaa4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EAAA4u;
    SET_GPR_U32(ctx, 31, 0x1EAAACu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EAAA4u, 0x1EAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAACu;
label_1eaaac:
    // 0x1eaaac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eaaacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaab0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaab4: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eaab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eaab8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaabc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1eaabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1eaac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eaac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaac4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAAC4u;
    SET_GPR_U32(ctx, 31, 0x1EAACCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAAC4u, 0x1EAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAACCu;
label_1eaacc:
    // 0x1eaacc: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eaaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eaad0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaad4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eaad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eaad8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaadc: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eaae0: 0x26d683d8  addiu       $s6, $s6, -0x7C28
    ctx->pc = 0x1eaae0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935512));
    // 0x1eaae4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eaae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaae8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EAAE8u;
    SET_GPR_U32(ctx, 31, 0x1EAAF0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EAAE8u, 0x1EAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAF0u;
label_1eaaf0:
    // 0x1eaaf0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eaaf0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaf4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eaaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaaf8: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eaafc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab00: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1eab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1eab04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab08: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAB08u;
    SET_GPR_U32(ctx, 31, 0x1EAB10u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAB08u, 0x1EAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB10u;
label_1eab10:
    // 0x1eab10: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eab10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eab14: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eab18: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eab1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab20: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eab20u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eab24: 0x26d683e8  addiu       $s6, $s6, -0x7C18
    ctx->pc = 0x1eab24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935528));
    // 0x1eab28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eab28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab2c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EAB2Cu;
    SET_GPR_U32(ctx, 31, 0x1EAB34u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EAB2Cu, 0x1EAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB34u;
label_1eab34:
    // 0x1eab34: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eab34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab38: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eab3c: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eab40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab44: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1eab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1eab48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eab48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab4c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAB4Cu;
    SET_GPR_U32(ctx, 31, 0x1EAB54u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAB4Cu, 0x1EAB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB54u;
label_1eab54:
    // 0x1eab54: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eab54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eab58: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eab5c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eab60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eab60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab64: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eab68: 0x26d683f8  addiu       $s6, $s6, -0x7C08
    ctx->pc = 0x1eab68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935544));
    // 0x1eab6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eab6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab70: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EAB70u;
    SET_GPR_U32(ctx, 31, 0x1EAB78u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EAB70u, 0x1EAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB78u;
label_1eab78:
    // 0x1eab78: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eab78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab7c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eab80: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eab84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab88: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1eab8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eab8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab90: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAB90u;
    SET_GPR_U32(ctx, 31, 0x1EAB98u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAB90u, 0x1EAB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB98u;
label_1eab98:
    // 0x1eab98: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eab98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eab9c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaba0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eaba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eaba4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eaba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaba8: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eaba8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eabac: 0x26d68408  addiu       $s6, $s6, -0x7BF8
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935560));
    // 0x1eabb0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eabb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabb4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EABB4u;
    SET_GPR_U32(ctx, 31, 0x1EABBCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EABB4u, 0x1EABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EABBCu;
label_1eabbc:
    // 0x1eabbc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eabbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabc0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eabc4: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eabc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eabc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabcc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1eabd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eabd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabd4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EABD4u;
    SET_GPR_U32(ctx, 31, 0x1EABDCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EABD4u, 0x1EABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EABDCu;
label_1eabdc:
    // 0x1eabdc: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eabe0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eabe4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eabe8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eabe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabec: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eabf0: 0x26d68418  addiu       $s6, $s6, -0x7BE8
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935576));
    // 0x1eabf4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eabf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabf8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EABF8u;
    SET_GPR_U32(ctx, 31, 0x1EAC00u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EABF8u, 0x1EAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC00u;
label_1eac00:
    // 0x1eac00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eac00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac04: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eac08: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eac08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eac0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac10: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1eac14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac18: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAC18u;
    SET_GPR_U32(ctx, 31, 0x1EAC20u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAC18u, 0x1EAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC20u;
label_1eac20:
    // 0x1eac20: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eac20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eac24: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eac28: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1eac28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eac2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac30: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x1eac30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x1eac34: 0x26d68328  addiu       $s6, $s6, -0x7CD8
    ctx->pc = 0x1eac34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935336));
    // 0x1eac38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eac38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac3c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1EAC44u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EAC3Cu, 0x1EAC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC44u;
label_1eac44:
    // 0x1eac44: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eac44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac48: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1eac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eac4c: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1eac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eac50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eac50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac54: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1eac58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eac58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac5c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EAC5Cu;
    SET_GPR_U32(ctx, 31, 0x1EAC64u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EAC5Cu, 0x1EAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC64u;
label_1eac64:
    // 0x1eac64: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1eac64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1eac68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eac68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eac70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac74: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1EAC74u;
    {
        const bool branch_taken_0x1eac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac74) {
            ctx->pc = 0x1EAD58u;
            goto label_1ead58;
        }
    }
    ctx->pc = 0x1EAC7Cu;
label_1eac7c:
    // 0x1eac7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eac7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac80: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1EAC80u;
    {
        const bool branch_taken_0x1eac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac80) {
            ctx->pc = 0x1EAD44u;
            goto label_1ead44;
        }
    }
    ctx->pc = 0x1EAC88u;
label_1eac88:
    // 0x1eac88: 0x26270061  addiu       $a3, $s1, 0x61
    ctx->pc = 0x1eac88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 97));
    // 0x1eac8c: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x1eac8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1eac90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1eac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac94: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1eac94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1eac98: 0x24a58428  addiu       $a1, $a1, -0x7BD8
    ctx->pc = 0x1eac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935592));
    // 0x1eac9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1eac9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaca0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1EACA0u;
    SET_GPR_U32(ctx, 31, 0x1EACA8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1EACA0u, 0x1EACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACA8u;
label_1eaca8:
    // 0x1eaca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacac: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1eacacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eacb0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1eacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1eacb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eacb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacb8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1eacb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1eacbc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1EACBCu;
    SET_GPR_U32(ctx, 31, 0x1EACC4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1EACBCu, 0x1EACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACC4u;
label_1eacc4:
    // 0x1eacc4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1eacc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacc8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1eacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaccc: 0x26770028  addiu       $s7, $s3, 0x28
    ctx->pc = 0x1eacccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x1eacd0: 0x24a400a4  addiu       $a0, $a1, 0xA4
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1eacd4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1eacd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacd8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EACD8u;
    SET_GPR_U32(ctx, 31, 0x1EACE0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EACD8u, 0x1EACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACE0u;
label_1eace0:
    // 0x1eace0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eace0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eace4: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x1eace4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
    // 0x1eace8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1eace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eacec: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x1eacecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x1eacf0: 0x24a400a4  addiu       $a0, $a1, 0xA4
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1eacf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eacf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacf8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EACF8u;
    SET_GPR_U32(ctx, 31, 0x1EAD00u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EACF8u, 0x1EAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD00u;
label_1ead00:
    // 0x1ead00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ead00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead04: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ead04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ead08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ead08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead0c: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x1ead0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ead10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ead10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead14: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EAD14u;
    SET_GPR_U32(ctx, 31, 0x1EAD1Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EAD14u, 0x1EAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD1Cu;
label_1ead1c:
    // 0x1ead1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ead1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ead20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ead24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead28: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1EAD28u;
    SET_GPR_U32(ctx, 31, 0x1EAD30u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1EAD28u, 0x1EAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD30u;
label_1ead30:
    // 0x1ead30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ead30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead34: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x1ead34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ead38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ead38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead3c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1ead3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ead40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ead40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ead44:
    // 0x1ead44: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x1ead44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ead48: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1EAD48u;
    {
        const bool branch_taken_0x1ead48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead48) {
            ctx->pc = 0x1EAC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eac88;
        }
    }
    ctx->pc = 0x1EAD50u;
    // 0x1ead50: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ead54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ead54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ead58:
    // 0x1ead58: 0x2e410005  sltiu       $at, $s2, 0x5
    ctx->pc = 0x1ead58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ead5c: 0x1420ffc7  bnez        $at, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1EAD5Cu;
    {
        const bool branch_taken_0x1ead5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead5c) {
            ctx->pc = 0x1EAC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eac7c;
        }
    }
    ctx->pc = 0x1EAD64u;
    // 0x1ead64: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1ead64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ead68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ead68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead6c: 0xc07b308  jal         func_1ECC20
    ctx->pc = 0x1EAD6Cu;
    SET_GPR_U32(ctx, 31, 0x1EAD74u);
    ctx->pc = 0x1ECC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECC20u, 0x1EAD6Cu, 0x1EAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD74u;
label_1ead74:
    // 0x1ead74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ead74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead78: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ead78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ead7c: 0xc07b564  jal         func_1ED590
    ctx->pc = 0x1EAD7Cu;
    SET_GPR_U32(ctx, 31, 0x1EAD84u);
    ctx->pc = 0x1ED590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED590u, 0x1EAD7Cu, 0x1EAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD84u;
label_1ead84:
    // 0x1ead84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ead84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ead88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ead8c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1ead8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ead90: 0xe4a000b8  swc1        $f0, 0xB8($a1)
    ctx->pc = 0x1ead90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 184), bits); }
    // 0x1ead94: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1ead94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ead98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ead9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ead9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eada0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eada0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eada4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eada4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eada8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eada8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eadac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eadacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eadb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eadb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eadb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eadb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eadb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eadb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eadbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1eadbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1eadc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EADC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EADC8u;
    // 0x1eadc8: 0x0  nop
    ctx->pc = 0x1eadc8u;
    // NOP
    // 0x1eadcc: 0x0  nop
    ctx->pc = 0x1eadccu;
    // NOP
    ctx->pc = 0x1eadd0u;
}
