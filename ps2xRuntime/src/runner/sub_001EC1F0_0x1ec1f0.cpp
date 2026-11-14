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

// Function: sub_001EC1F0
// Address: 0x1ec1f0 - 0x1ec300
void sub_001EC1F0_0x1ec1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC1F0_0x1ec1f0");
#endif

    switch (ctx->pc) {
        case 0x1ec224u: goto label_1ec224;
        case 0x1ec238u: goto label_1ec238;
        case 0x1ec25cu: goto label_1ec25c;
        case 0x1ec278u: goto label_1ec278;
        case 0x1ec290u: goto label_1ec290;
        case 0x1ec2b8u: goto label_1ec2b8;
        case 0x1ec2c8u: goto label_1ec2c8;
        case 0x1ec2e4u: goto label_1ec2e4;
        default: break;
    }

    ctx->pc = 0x1ec1f0u;

    // 0x1ec1f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ec1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ec1f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ec1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ec1f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec1fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec204: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1ec204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1ec208: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1ec208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1ec20c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1ec20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1ec210: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1ec210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1ec214: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1ec214u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1ec218: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1ec218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec21c: 0xc07b110  jal         func_1EC440
    ctx->pc = 0x1EC21Cu;
    SET_GPR_U32(ctx, 31, 0x1EC224u);
    ctx->pc = 0x1EC440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC440u, 0x1EC21Cu, 0x1EC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC224u;
label_1ec224:
    // 0x1ec224: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1ec224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1ec228: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1ec228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1ec22c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ec22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ec230: 0xc041954  jal         func_106550
    ctx->pc = 0x1EC230u;
    SET_GPR_U32(ctx, 31, 0x1EC238u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1EC230u, 0x1EC238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC238u;
label_1ec238:
    // 0x1ec238: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1ec238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1ec23c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec240: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1ec240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec244: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec248: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1ec248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ec24c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ec24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec254: 0xc07c2bc  jal         func_1F0AF0
    ctx->pc = 0x1EC254u;
    SET_GPR_U32(ctx, 31, 0x1EC25Cu);
    ctx->pc = 0x1F0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0AF0u, 0x1EC254u, 0x1EC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC25Cu;
label_1ec25c:
    // 0x1ec25c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec260: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ec260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec264: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ec264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec268: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1ec268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec26c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ec26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec270: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1EC270u;
    SET_GPR_U32(ctx, 31, 0x1EC278u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1EC270u, 0x1EC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC278u;
label_1ec278:
    // 0x1ec278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec280: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ec284: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1ec284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec288: 0xc07b0f4  jal         func_1EC3D0
    ctx->pc = 0x1EC288u;
    SET_GPR_U32(ctx, 31, 0x1EC290u);
    ctx->pc = 0x1EC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC3D0u, 0x1EC288u, 0x1EC290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC290u;
label_1ec290:
    // 0x1ec290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec294: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1ec294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ec298: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC298u;
    {
        const bool branch_taken_0x1ec298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec298) {
            ctx->pc = 0x1EC2BCu;
            goto label_1ec2bc;
        }
    }
    ctx->pc = 0x1EC2A0u;
    // 0x1ec2a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec2a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ec2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec2a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ec2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec2ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ec2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1EC2B0u;
    SET_GPR_U32(ctx, 31, 0x1EC2B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1EC2B0u, 0x1EC2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2B8u;
label_1ec2b8:
    // 0x1ec2b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec2bc:
    // 0x1ec2bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1ec2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec2c0: 0xc07b0d4  jal         func_1EC350
    ctx->pc = 0x1EC2C0u;
    SET_GPR_U32(ctx, 31, 0x1EC2C8u);
    ctx->pc = 0x1EC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC350u, 0x1EC2C0u, 0x1EC2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2C8u;
label_1ec2c8:
    // 0x1ec2c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1ec2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ec2cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1ec2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ec2d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1ec2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec2d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ec2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2dc: 0xc07b0c0  jal         func_1EC300
    ctx->pc = 0x1EC2DCu;
    SET_GPR_U32(ctx, 31, 0x1EC2E4u);
    ctx->pc = 0x1EC300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC300u, 0x1EC2DCu, 0x1EC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2E4u;
label_1ec2e4:
    // 0x1ec2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ec2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec2e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec2f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1ec2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ec2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC300u;
}
